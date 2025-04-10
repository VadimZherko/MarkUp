#include "../include/mainwindow.h"
#include "../ui/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    dialogWidget(new Dialog),
    scene(new Scene),
    markTable(new MarkTable),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/new/prefix1/axis.png");
    ui->image->setPixmap(pix);
    ui->image->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->image->resize(pix.size());

    QIcon Icons(":/new/prefix1/rotateMarkIcon.png");
    ui->rotateMarkButton->setIcon(Icons);
    ui->moveToMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/moveToMarkIcon.png"));
    ui->duplicateDownMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/duplicateDownMarkIcon.png"));
    ui->duplicateUpMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/duplicateUpMarkIcon.png"));
    ui->duplicateRightMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/duplicateRightMarkIcon.png"));
    ui->duplicateLeftMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/duplicateLeftMarkIcon.png"));
    ui->addMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/addMarkIcon.png"));
    ui->removeMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/deleteMarkIcon.png"));
    ui->loadMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/loadMarkIcon.png"));
    ui->saveMarkButton->setIcon(Icons.fromTheme(":/new/prefix1/saveMarkIcon.png"));

    int windowWidth = this->width();
    int windowHeight = this->height();

    markTable->resize(MARKTABLE_SIZE, windowHeight);
    markTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    markTable->move(windowWidth - MARKTABLE_SIZE, 0);
    markTable->setParent(this);

    scene->setParent(this);

    QObject::connect(ui->loadMarkButton, SIGNAL(clicked()), this->dialogWidget, SLOT(showLoadMarkFromFileDialog()));
    QObject::connect(ui->saveMarkButton, SIGNAL(clicked()), this->dialogWidget, SLOT(showSaveMarkInFileDialog()));

    QObject::connect(ui->addMarkButton, SIGNAL(clicked()), this->dialogWidget, SLOT(showAddMarkDialog()));
    QObject::connect(ui->moveToMarkButton, SIGNAL(clicked()), this->dialogWidget, SLOT(showMoveToMarkDialog()));
    QObject::connect(ui->rotateMarkButton, SIGNAL(clicked()), this->scene, SLOT(rotateMark()));
    QObject::connect(ui->removeMarkButton, SIGNAL(clicked()), this->scene, SLOT(removeMark()));

    QObject::connect(ui->duplicateRightMarkButton, &QPushButton::clicked, this->scene,
                     [this]() { this->scene->duplicate(Qt::Key_Right); });
    QObject::connect(ui->duplicateLeftMarkButton, &QPushButton::clicked, this->scene,
                     [this](){this->scene->duplicate(Qt::Key_Left); });
    QObject::connect(ui->duplicateDownMarkButton, &QPushButton::clicked, this->scene,
                     [this](){this->scene->duplicate(Qt::Key_Down); });
    QObject::connect(ui->duplicateUpMarkButton, &QPushButton::clicked, this->scene,
                     [this](){this->scene->duplicate(Qt::Key_Up); });

    QObject::connect(dialogWidget, &Dialog::dataReady, this->scene, &Scene::addMark);
    QObject::connect(scene, &Scene::keyPressEvent_, this, &MainWindow::keyPressEvent);
    QObject::connect(dialogWidget, &Dialog::dataMoveToReady, this->scene, &Scene::moveToMark);

    QObject::connect(scene, &Scene::setRubberBandDrag, this->ui->workArea,
                     [this]() { this->ui->workArea->setDragMode(QGraphicsView::RubberBandDrag); });
    QObject::connect(scene, &Scene::setScrollHandDrag, this->ui->workArea,
                     [this]() { this->ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag); });
    QObject::connect(dialogWidget, &Dialog::setScrollHandDrag, this->ui->workArea,
                     [this]() {this->ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag);});

    QObject::connect(scene, &Scene::markAdded, this->markTable, &MarkTable::addRow);
    QObject::connect(scene, &Scene::markUpdated, this->markTable, &MarkTable::updateRow);
    QObject::connect(scene, &Scene::markCoordsUpdated, this->markTable, &MarkTable::updateCoordsRow);
    QObject::connect(scene, &Scene::markRemoved, this->markTable, &MarkTable::removeRow);

    QObject::connect(dialogWidget, &Dialog::saveFilePath, this->scene, &Scene::saveInFile);
    QObject::connect(dialogWidget, &Dialog::loadFilePath, this->scene, &Scene::loadTable);

    QObject::connect(markTable, &MarkTable::doubleClicked, this, &MainWindow::toMark);

    ui->workArea->setScene(scene);
    ui->workArea->centerOn(-GRID_SIZE * SCENE_X_COEF, GRID_SIZE * SCENE_HEIGHT_COEF);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);

    int windowWidth = this->width();
    int windowHeight = this->height();

    int tableWidth = markTable->width();

    markTable->move(windowWidth - tableWidth, 0);
    markTable->resize(MARKTABLE_SIZE, windowHeight);
    ui->workArea->resize(windowWidth - tableWidth, windowHeight);
    ui->image->move(20, windowHeight - 100);
}

void MainWindow::keyPressEvent(QKeyEvent* event)
{
    if(event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_N)
    {
        dialogWidget->showAddMarkDialog();
        ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag);
    }
    else if(event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_X)
    {
        dialogWidget->showMoveToMarkDialog();
        ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag);
    }
    else if(event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_S)
    {
        dialogWidget->showSaveMarkInFileDialog();
        ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag);
    }
    else if(event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_L)
    {
        dialogWidget->showLoadMarkFromFileDialog();
        ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag);
    }
    else if(event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_ParenRight)
    {
        scene->rotateMark();
        ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag);
    }
    else if(event->key() == Qt::Key_Delete)
    {
        scene->removeMark();
        ui->workArea->setDragMode(QGraphicsView::ScrollHandDrag);
    }
    else if(event->key() == Qt::Key_9)
    {
        for(int i = 1; i != 5; i++)
        {
            scene->addMark(i,1,i + 10,0);
        }
    }
    else if(event->key() == Qt::Key_8)
    {
        for(int i = 1; i != 5; i++)
        {
            scene->addMark(i,2,i,0);
        }
    }
    else if(event->key() == Qt::Key_0)
    {
        scene->duplicate(event->key());
    }
}

void MainWindow::toMark(const QModelIndex& index)
{
    auto coords = markTable->getCoords(index.row());
    ui->workArea->centerOn(coords.first, coords.second);
}


