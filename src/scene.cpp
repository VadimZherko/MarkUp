#include "../include/scene.h"

Scene::Scene()
{
    parentWidget = new QWidget();
    this->setSceneRect(-GRID_SIZE * SCENE_X_COEF, -GRID_SIZE * SCENE_Y_COEF, GRID_SIZE * SCENE_WIDTH_COEF, GRID_SIZE * SCENE_HEIGHT_COEF);
}

Scene::~Scene()
{
    delete parentWidget;
}

void Scene::drawBackground(QPainter* painter, const QRectF& rect)
{
    QColor color(225,79,0,255);
    QPen pen(color,1);
    painter->setPen(pen);

    auto left = this->sceneRect().left();
    auto right = this->sceneRect().right();
    auto top = this->sceneRect().top();
    auto bottom = this->sceneRect().bottom();

    for(int y = top; y < bottom; y += GRID_SIZE) //Grid
    {
        painter->drawLine(QLineF(left, y, right, y));
        painter->drawLine(QLineF());
    }

    for(int x = left; x < right; x += GRID_SIZE) //Grid
    {
        painter->drawLine(QLineF(x, top, x, bottom));
    }

    pen.setWidthF(0.2);
    painter->setPen(pen);

    for(int y = top; y < bottom; y += MILLIMIMETER_GRID) //Grid
    {
        painter->drawLine(QLineF(left, y, right, y));
    }

    for(int x = left; x < right; x += MILLIMIMETER_GRID) //Grid
    {
        painter->drawLine(QLineF(x, top, x, bottom));
    }

    pen.setWidth(3);
    painter->setPen(pen);
    painter->drawLine(QLineF(0, top, 0, bottom));

    painter->drawLine(QLineF(left, 0, right, 0));

    color.setRgb(200,200,200,200);
    QPen pen_text(color);
    painter->setPen(pen_text);
    QFont font = painter->font();
    font.setPixelSize(FONT_SIZE);
    painter->setFont(font);

    for(int x = left, i = -10; x < right; x+= GRID_SIZE, i++) //Lines on axis X
    {
        if(i == 0) continue;

        painter->setPen(pen);
        painter->drawLine(QLineF(x, -3, x, 3));

        painter->setPen(pen_text);
        painter->drawText(QPointF(x, FONT_POSE_Y), QString::number(i));
    }

    for(int y = bottom, i = -10; y > top; y -= GRID_SIZE, i++) //Lines on axis Y
    {
        if(i == 0) continue;

        painter->setPen(pen);
        painter->drawLine(QLineF(-3, y, 3, y));

        painter->setPen(pen_text);
        painter->drawText(QPointF(FONT_POSE_X, y), QString::number(i));
    }

    painter->drawText(QPointF(FONT_POSE_X, FONT_POSE_Y), QString::number(0));
}

QPair<double, double> Scene::toCoords(double x, double y)
{
    double new_x = (x + CENTER_MARK) /  GRID_SIZE;
    double new_y = (-y - CENTER_MARK) / GRID_SIZE;
    return QPair<double,double>(new_x, new_y);
}

QPair<double, double> Scene::toPixels(double x, double y)
{
    double new_x = x * GRID_SIZE - CENTER_MARK;
    double new_y = -y * GRID_SIZE - CENTER_MARK;
    return QPair<double, double>(new_x, new_y);
}

void Scene::addMark(double x, double y, int id, int angular = 0)
{
    auto [newX, newY] = toPixels(x, y);

    checkSceneSize(newX, newY);
    if(checkId(id) && checkInputMark(newX,newY))
    {
        Mark* new_mark = new Mark(newX, newY, id, angular);
        this->addItem(new_mark);
        new_mark->setSelected(true);

        emit markAdded(id, x, y, angular);
    }
    emit setScrollHandDrag();
}

Mark* Scene::addMarkNoCheck(double x, double y, int id, int angular = 0)
{
    auto [newX, newY] = toPixels(x, y);

    checkSceneSize(newX, newY);
    Mark* new_mark = new Mark(newX, newY, id, angular);
    this->addItem(new_mark);
    new_mark->setSelected(true);

    emit markAdded(id, x, y, angular);
    emit setScrollHandDrag();

    return new_mark;
}

void Scene::removeMark()
{
    auto selectedItems = this->selectedItems();
    if (!selectedItems.empty())
    {
        for(auto item : selectedItems)
        {
            this->removeItem(item);
            Mark* markItem = qgraphicsitem_cast<Mark*>(item);
            emit markRemoved(markItem->getId());
            narrowingScene(item);
            delete item;
        }
    }
    else
    {
        showError("No items selected\nSelect at least one object");
    }
}

void Scene::removeMark(Mark* mark)
{
    this->removeItem(mark);
    emit markRemoved(mark->getId());
    narrowingScene(mark);
    delete mark;
}

void Scene::duplicate(int key)
{
    auto selectedItems = this->selectedItems();
    if(selectedItems.empty())
    {
        showError("No items selected");
        return;
    }

    uint countRows = 0;
    QVector<QVector<Mark*>> items(64, QVector<Mark*>());
    for(auto i = 0; selectedItems.count() != 0; i++, countRows++)
    {
        qreal cord1 = 0;
        if(key == Qt::Key_Right || key == Qt::Key_Left)
        {
            cord1 = selectedItems[0]->scenePos().ry();
        }
        else
        {
            cord1 = selectedItems[0]->scenePos().rx();
        }

        for(auto t = 0; t < selectedItems.count(); t++)
        {
            qreal comparisionCord = 0;
            if(key == Qt::Key_Right || key == Qt::Key_Left) comparisionCord = selectedItems[t]->scenePos().ry();
            else comparisionCord = selectedItems[t]->scenePos().rx();

            if(cord1 == comparisionCord)
            {
                if(countRows == items.capacity() - 1) items.reserve(items.capacity() * 2);
                if(items[countRows].capacity() == t) items[countRows].reserve(items.size() * 2);
                items[countRows].push_back(qgraphicsitem_cast<Mark*>(selectedItems[t]));
                selectedItems.removeAt(t);
                t--;
            }
        }
    }

    int countMarksInRow = items[0].size();
    for(auto i = 0; i != countRows; i++)
    {
        if(countMarksInRow != items[i].size())
        {
            showError("The number of marks in one row does not match");
            return;
        }
    }

    if(countMarksInRow == 1)
    {
        auto shift = dialogWidget.showDuplicateMarkDialog();
        shift.first *= -GRID_SIZE;
        QVector<Mark*> addedMarks;
        for(auto i = 0; i < countRows; i++)
        {
            if(key == Qt::Key_Left)
            {
                auto newX = items[i][0]->scenePos().x() + shift.first;
                auto newY = items[i][0]->scenePos().y();
                auto newId = items[i][0]->getId() + shift.second;
                if(!checkId(newId) || !checkInputMark(newX,newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                auto newCoords = toCoords(newX, newY);
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
            else if(key == Qt::Key_Right)
            {
                auto newX = items[i][0]->scenePos().x() - shift.first;
                auto newY = items[i][0]->scenePos().y();
                auto newId = items[i][0]->getId() + shift.second;
                if(!checkId(newId) || !checkInputMark(newX, newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                auto newCoords = toCoords(newX, newY);
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
            else if(key == Qt::Key_Up)
            {
                auto newX = items[i][0]->scenePos().x();
                auto newY = items[i][0]->scenePos().y() + shift.first;
                auto newId = items[i][0]->getId() + shift.second;
                if(!checkId(newId) || !checkInputMark(newX,newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                auto newCoords = toCoords(newX, newY);
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
            else if(key == Qt::Key_Down)
            {
                auto newX = items[i][0]->scenePos().x();
                auto newY = items[i][0]->scenePos().y() - shift.first;
                auto newId = items[i][0]->getId() + shift.second;
                if(!checkId(newId) || !checkInputMark(newX,newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                auto newCoords = toCoords(newX, newY);
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
        }
    }
    else
    {
        if(key == Qt::Key_Right || key == Qt::Key_Left)
        {
            for(int i = 0; i < items.size(); i++)
            {
                auto item = items[i];
                std::sort(item.begin(), item.end(), [](Mark* a, Mark* b) ->
                          bool{ return a->scenePos().x() < b->scenePos().x(); });
                items[i] = item;
            }
        }
        else
        {
            for(int i = 0; i < items.size(); i++)
            {
                auto item = items[i];
                std::sort(item.begin(), item.end(), [](Mark* a, Mark* b) ->
                          bool{ return a->scenePos().y() < b->scenePos().y(); });
                items[i] = item;
            }
        }

        QVector<Mark*> addedMarks;
        qreal shift = 0;
        if(key == Qt::Key_Right)
        {
            shift = items[0][1]->scenePos().x() - items[0].first()->scenePos().x();
            for(auto i = 0; i < countRows; i++)
            {
                auto newX = items[i].last()->scenePos().x() + shift;
                auto newY = items[i].last()->scenePos().y();
                auto newId = items[i].last()->getId() + (items[i][1]->getId() - items[i][0]->getId());
                auto newCoords = toCoords(newX, newY);
                if(!checkId(newId) || !checkInputMark(newX,newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
        }
        else if(key == Qt::Key_Left)
        {
            shift = items[0][1]->scenePos().x() - items[0][0]->scenePos().x();
            for(auto i = 0; i < countRows; i++)
            {
                auto newX = items[i][0]->scenePos().x() - shift;
                auto newY = items[i].last()->scenePos().y();
                auto newId = items[i][0]->getId() - (items[i][1]->getId() - items[i][0]->getId());
                if(!checkId(newId) || !checkInputMark(newX,newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                auto newCoords = toCoords(newX, newY);
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
        }
        else if(key == Qt::Key_Up)
        {
            shift = items[0][1]->scenePos().y() - items[0][0]->scenePos().y();
            for(auto i = 0; i < countRows; i++)
            {
                auto newX = items[i][0]->scenePos().x();
                auto newY = items[i].first()->scenePos().y() - shift;
                auto newId = items[i].first()->getId() + (items[i][0]->getId() - items[i][1]->getId());
                if(!checkId(newId) || !checkInputMark(newX,newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                auto newCoords = toCoords(newX, newY);
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
        }
        else if(key == Qt::Key_Down)
        {
            shift = items[0][1]->scenePos().y() - items[0][0]->scenePos().y();
            for(auto i = 0; i < countRows; i++)
            {
                auto newX = items[i][0]->scenePos().x();
                auto newY = items[i].last()->scenePos().y() + shift;
                auto newId = items[i].last()->getId() + (items[i][1]->getId() - items[i][0]->getId());
                if(!checkId(newId) || !checkInputMark(newX,newY))
                {
                    for(auto mark : addedMarks) this->removeMark(mark);
                    return;
                }
                auto newCoords = toCoords(newX, newY);
                addedMarks.push_back(addMarkNoCheck(newCoords.first, newCoords.second, newId, 0));
            }
        }
    }
}

void Scene::moveToMark(double x, double y)
{
    auto selectedItems = this->selectedItems();
    if(selectedItems.empty())
    {
        showError("No items selected\nSelect at least one object");
    }

    x *= GRID_SIZE;
    y *= -GRID_SIZE;
    QList<QGraphicsItem*> movedItems;
    for(auto item : selectedItems) item->hide();
    for(auto item : selectedItems)
    {
        item->moveBy(x,y);
        movedItems.push_back(item);
        if(!checkInputMark(item->scenePos().x(), item->scenePos().y()))
        {
            for(auto item_ : movedItems)
            {
                item_->moveBy(-x,-y);
                for(auto item : selectedItems) item->show();
            }
            return;
        }
    }
    for(auto item : selectedItems) item->show();
}

void Scene::rotateMark()
{
    auto selectedItems = this->selectedItems();
    if (!selectedItems.empty())
    {
        for(auto item : selectedItems)
        {
            Mark* markItem = qgraphicsitem_cast<Mark*>(item);
            markItem->getAngular() == 270  ? markItem->setAngular(0) : markItem->setAngular(markItem->getAngular() + 90);
            markUpdated(markItem->getId(), markItem->getAngular());

            emit setScrollHandDrag();
        }
    }
    else
    {
        showError("No items selected");
    }
}

void Scene::narrowingScene(QGraphicsItem* item)
{
    auto left = this->sceneRect().left();
    auto right = this->sceneRect().right();
    auto top = this->sceneRect().top();
    auto bottom = this->sceneRect().bottom();

    auto x = item->pos().x();
    auto y = item->pos().y();

    qreal newLeft = 0;
    qreal newTop = 0;
    qreal newRight = 0;
    qreal newBottom = 0;

    if (x < 0 && this->items(x, top, left, bottom, Qt::IntersectsItemShape, Qt::AscendingOrder).empty()) {
        newLeft = left - (left - x);
    }
    if (y < 0 && this->items(left, y, right, top, Qt::IntersectsItemShape, Qt::AscendingOrder).empty()) {
        newTop = top - (top - y);
    }
    if (x > 0 && this->items(x, top, right, bottom, Qt::IntersectsItemShape, Qt::AscendingOrder).empty()) {
        newRight = right - (right - x);
    }
    if (y > 0 && this->items(left, y, right, bottom, Qt::IntersectsItemShape, Qt::AscendingOrder).empty()) {
        newBottom = bottom - (bottom - y);
    }

    if(newLeft > (-GRID_SIZE * SCENE_X_COEF)) newLeft =-GRID_SIZE * SCENE_X_COEF;
    if(newTop > (-GRID_SIZE * SCENE_Y_COEF)) newTop = -GRID_SIZE * SCENE_Y_COEF;
    if(newRight < (GRID_SIZE * SCENE_WIDTH_COEF)) newRight = GRID_SIZE * SCENE_WIDTH_COEF;
    if(newBottom < (GRID_SIZE * SCENE_HEIGHT_COEF)) newBottom = GRID_SIZE * SCENE_HEIGHT_COEF;

    this->setSceneRect(newLeft, newTop, newRight, newBottom);
    this->invalidate();
}

void Scene::checkSceneSize(double x, double y)
{
    auto left = this->sceneRect().left();
    auto right = this->sceneRect().right();
    auto top = this->sceneRect().top();
    auto bottom = this->sceneRect().bottom();

    if (x < left) {
        left = x - (int)x % GRID_SIZE - EXPANSION_COEF * GRID_SIZE;
    }
    if (y < top) {
        top = y - (int)y % GRID_SIZE - EXPANSION_COEF * GRID_SIZE;
    }
    if (x > right) {
        right = x + (int)x % GRID_SIZE + EXPANSION_COEF * GRID_SIZE;
    }
    if (y > bottom) {
        bottom = y + (int)y % GRID_SIZE + EXPANSION_COEF * GRID_SIZE;
    }

    this->setSceneRect(left, top, right - left, bottom - top);
    this->invalidate();
}

bool Scene::checkInputMark(qreal x, qreal y)
{
    auto collisingItems = this->items(x , y, 5, -5, Qt::IntersectsItemBoundingRect, Qt::AscendingOrder);
    for(auto i = 0; i < collisingItems.count(); i++)
    {
        if(!qgraphicsitem_cast<Mark*>(collisingItems[i]))
        {
            collisingItems.remove(i);
        }
    }

    if(!collisingItems.empty())
    {
        auto [newX, newY] = toCoords(x,y);
        QString errorText = "The new mark matches the old mark by coordinates: \nX: " + QString::number(newX) +
                            "\nY: " + QString::number(newY);
        showError(errorText);
        return false;
    }

    return true;
}

bool Scene::checkId(int id)
{
    auto allItems = this->items();

    for(auto item : allItems)
    {
        if(Mark* markItem = qgraphicsitem_cast<Mark*>(item))
        {
            if(markItem->getId() == id)
            {
                auto coords = toCoords(markItem->scenePos().x(), markItem->scenePos().y());
                QString errorText = "The item id matches the item id by coordinates:\nX: " + QString::number(coords.first) + "\nY: " + QString::number(coords.second);
                showError(errorText);
                return false;
            }
        }
    }
    return true;
}

void Scene::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Control)
    {
        emit setRubberBandDrag();
    }

    if (event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_A)
    {
        for (QGraphicsItem* item : this->items())
        {
            item->setSelected(true);
        }
    }

    if(event->key() == Qt::Key_Right)
    {
        //duplicateRightSideMark();
        duplicate(event->key());
        return;
    }
    else if(event->key() == Qt::Key_Left)
    {
        //duplicateLeftSideMark();
        duplicate(event->key());
        return;
    }
    else if(event->key() == Qt::Key_Up)
    {
        //emit keyPressEvent_(event);
        duplicate(event->key());
        return;
    }
    else if(event->key() == Qt::Key_Down)
    {
        //emit keyPressEvent_(event);
        duplicate(event->key());
        return;
    }
    QGraphicsScene::keyPressEvent(event);
}

void Scene::keyReleaseEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Control && !event->isAutoRepeat())
    {
        emit setScrollHandDrag();
    }

    QGraphicsScene::keyReleaseEvent(event);
}

void Scene::loadTable(QString filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        showError("Error opening file");
        return;
    }
    QTextStream in(&file);
    QString myString;

    myString = in.readLine(100);

    auto allItems = this->items();

    for(auto item : allItems)
    {
        if(Mark* markItem = qgraphicsitem_cast<Mark*>(item))
        {
            removeMark(markItem);
        }
    }

    while(!in.atEnd())
    {
        myString = in.readLine(100);
        auto list = myString.split(',');
        /*if(list.capacity() == 4)
        {
            showError("Invalid file1");
            return;
        }
        if(!list[1].toDouble() || !list[2].toDouble() || !list[0].toInt() || !list[3].toInt())
        {
            showError("Invalid file2");
            return;
        }*/
        addMark(list[1].toDouble(), list[2].toDouble(), list[0].toInt(), list[3].toInt());
    }
}

void Scene::saveInFile(QString filePath)
{
    QFile file(filePath);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        showError("Error opening file");
        return;
    }

    QTextStream out(&file);
    out << "id," << " x," << " y," << " theta" << "\n";

    auto items = this->items();

    QVector<Mark*> marks;
    for(auto item : items)
    {
        if(Mark* markItem = qgraphicsitem_cast<Mark*>(item))
        {
            marks.push_back(markItem);
        }
    }

    std::sort(marks.begin(), marks.end(), [](Mark* a, Mark* b) ->
              bool{ return a->getId() < b->getId(); });

    for(auto markItem : marks)
    {
        auto [x,y] = toCoords(markItem->scenePos().x(), markItem->scenePos().y());
        out << markItem->getId() << ',' <<  x << ',' << y << ',' << markItem->getAngular() << '\n';
    }

    file.close();
}

void Scene::showError(QString errorText)
{
    QMessageBox::warning(parentWidget, "Error", errorText);
    emit setScrollHandDrag();
}
