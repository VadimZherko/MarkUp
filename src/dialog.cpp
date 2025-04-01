#include "../include/dialog.h"


Dialog::Dialog()
{
    styleSheet = (R"(
    QDialog {
        background-color: #1A1A2E;
        border: 2px solid #a0a0a0;
        border-radius: 10px;
    }
    QLabel {
        color: #FF6F61;
        font-size: 14px;
        padding: 5px;
    }
    QLineEdit {
        background-color: #1A1A2E;
        color: #FF6F61;
        border: 1px solid #FF6F61;
        border-radius: 5px;
        padding: 5px;
    }
    QLineEdit:focus {
        border: 1px solid #FF6F61;
    }
    QComboBox {
        background-color: #1A1A2E;
        color: #FF6F61;
        border: 1px solid #FF6F61;
        border-radius: 5px;
        padding: 5px;
    }
    QComboBox:focus {
        border: 1px solid #FF6F61;
    }
    QComboBox::drop-down {
        background-color: #1A1A2E;
        border: 1px solid #FF6F61;
        border-radius: 5px;
    }
    QComboBox QAbstractItemView {
        background-color: #1A1A2E;
        color: #FF6F61;
        border: 1px solid #FF6F61;
        border-radius: 5px;
    }
    QComboBox QAbstractItemView::item:selected {
        background-color: #FF6F61;
        color: #1A1A2E;
    }
    QComboBox::down-arrow {
        image: url(down_arrow.png);
    }
    QPushButton {
        background-color: #FF6F61;
        color: #1A1A2E;
        border: none;
        border-radius: 5px;
        padding: 10px;
        font-weight: bold;
    }
    QPushButton:hover {
        background-color: #FF6F61;
    }
    QPushButton:pressed {
        background-color: #003f6b;
    }
    QPushButton:focus {
        outline: none;
        border: 2px solid #FF6F61;
    }
    )");

    createAddMarkDialog();
    createDuplicateMarkDialog();
    createMoveToMarkDialog();
}

void Dialog::createAddMarkDialog()
{
    addMarkDialog.setWindowTitle("Add");

    QLabel* xLabel = new QLabel("X", &addMarkDialog);
    QLineEdit* xLineEdit = new QLineEdit(&addMarkDialog);
    xLineEdit->setObjectName("xLineEdit");
    xLabel->setBuddy(xLineEdit);

    QLabel* yLabel = new QLabel("Y", &addMarkDialog);
    QLineEdit* yLineEdit = new QLineEdit(&addMarkDialog);
    yLineEdit->setObjectName("yLineEdit");
    yLabel->setBuddy(yLineEdit);

    QLabel* idLabel = new QLabel("id", &addMarkDialog);
    QLineEdit* idLineEdit = new QLineEdit(&addMarkDialog);
    idLineEdit->setObjectName("idLineEdit");
    idLabel->setBuddy(idLineEdit);

    QPushButton* addButton = new QPushButton("Add mark", &addMarkDialog);

    QLabel* angularLabel = new QLabel("Angular", &addMarkDialog);
    QComboBox* angularComboBox = new QComboBox(&addMarkDialog);
    angularComboBox->addItem("0");
    angularComboBox->addItem("90");
    angularComboBox->addItem("180");
    angularComboBox->addItem("270");
    angularComboBox->setObjectName("angularComboBox");
    angularLabel->setBuddy(angularComboBox);

    QVBoxLayout* addMarkDialogLayout = new QVBoxLayout(&addMarkDialog);

    addMarkDialogLayout->addWidget(xLabel);
    addMarkDialogLayout->addWidget(xLineEdit);
    addMarkDialogLayout->addWidget(yLabel);
    addMarkDialogLayout->addWidget(yLineEdit);
    addMarkDialogLayout->addWidget(idLabel);
    addMarkDialogLayout->addWidget(idLineEdit);
    addMarkDialogLayout->addWidget(angularLabel);
    addMarkDialogLayout->addWidget(angularComboBox);
    addMarkDialogLayout->addWidget(addButton);
    this->addMarkDialog.setLayout(addMarkDialogLayout );
    addMarkDialog.setStyleSheet(styleSheet);

    connect(addButton, SIGNAL(clicked()), &addMarkDialog, SLOT(accept()));
}

void Dialog::createDuplicateMarkDialog()
{
    duplicateMarkDialog.setWindowTitle("Duplicate");

    QLabel* yLabelDup = new QLabel("Shift coord", &duplicateMarkDialog);
    QLineEdit* yLineEditDup = new QLineEdit(&duplicateMarkDialog);
    yLineEditDup->setText("0");
    yLineEditDup->setObjectName("yLineEdit");
    yLabelDup->setBuddy(yLineEditDup);

    QLabel* idLabelDup = new QLabel("Shift ID", &duplicateMarkDialog);
    QLineEdit* idLineEditDup = new QLineEdit(&duplicateMarkDialog);
    idLineEditDup->setText("1");
    idLineEditDup->setObjectName("idLineEdit");
    idLabelDup->setBuddy(yLineEditDup);

    QPushButton* addButtonDup = new QPushButton("Input",&duplicateMarkDialog);

    QVBoxLayout* duplicateMarkLayout = new QVBoxLayout(&duplicateMarkDialog);

    duplicateMarkLayout->addWidget(yLabelDup);
    duplicateMarkLayout->addWidget(yLineEditDup);
    duplicateMarkLayout->addWidget(idLabelDup);
    duplicateMarkLayout->addWidget(idLineEditDup);
    duplicateMarkLayout->addWidget(addButtonDup);
    this->duplicateMarkDialog.setLayout(duplicateMarkLayout);
    duplicateMarkDialog.setStyleSheet(styleSheet);

    connect(addButtonDup, SIGNAL(clicked()), &duplicateMarkDialog, SLOT(accept()));
}

void Dialog::createMoveToMarkDialog()
{
    moveToMarkDialog.setWindowTitle("Move");

    moveToMarkDialog.setWindowTitle("Move");

    QLabel* xLabelMove = new QLabel("Shift X", &moveToMarkDialog);
    QLineEdit* xLineEditMove = new QLineEdit(&moveToMarkDialog);
    xLineEditMove->setObjectName("xLineEdit");
    xLabelMove->setBuddy(xLineEditMove);

    QLabel* yLabelMove = new QLabel("Shift Y", &moveToMarkDialog);
    QLineEdit* yLineEditMove = new QLineEdit(&moveToMarkDialog);
    yLineEditMove->setObjectName("yLineEdit");
    yLabelMove->setBuddy(yLineEditMove);

    QPushButton* addButtonMove = new QPushButton("Move mark", &moveToMarkDialog);

    QVBoxLayout* moveToMarkLayout = new QVBoxLayout;

    moveToMarkLayout->addWidget(xLabelMove);
    moveToMarkLayout->addWidget(xLineEditMove);
    moveToMarkLayout->addWidget(yLabelMove);
    moveToMarkLayout->addWidget(yLineEditMove);
    moveToMarkLayout->addWidget(addButtonMove);
    this->moveToMarkDialog.setLayout(moveToMarkLayout);
    moveToMarkDialog.setStyleSheet(styleSheet);

    connect(addButtonMove, SIGNAL(clicked()), &moveToMarkDialog, SLOT(accept()));
}

void Dialog::showAddMarkDialog()
{
    if(addMarkDialog.exec() == QDialog::Accepted)
    {
        QLineEdit* xLineEdit = addMarkDialog.findChild<QLineEdit*>("xLineEdit");
        QLineEdit* yLineEdit = addMarkDialog.findChild<QLineEdit*>("yLineEdit");
        QLineEdit* idLineEdit = addMarkDialog.findChild<QLineEdit*>("idLineEdit");
        QComboBox* angularComboBox = addMarkDialog.findChild<QComboBox*>("angularComboBox");

        if(checkInput(xLineEdit->text(), yLineEdit->text(), idLineEdit->text()))
        {
            double x = xLineEdit->text().toDouble();
            double y = yLineEdit->text().toDouble();
            int id = idLineEdit->text().toInt();
            xLineEdit->clear();
            yLineEdit->clear();
            idLineEdit->clear();
            angularComboBox->setCurrentIndex(0);
            emit dataReady(x, y, id, angularComboBox->currentText().toInt());
        }
        else
        {
            xLineEdit->clear();
            yLineEdit->clear();
            angularComboBox->setCurrentIndex(0);
            emit setScrollHandDrag();
        }
    }
}


QPair<qreal, int> Dialog::showDuplicateMarkDialog()
{
    if(duplicateMarkDialog.exec() == QDialog::Accepted)
    {
        QLineEdit* yLineEdit = duplicateMarkDialog.findChild<QLineEdit*>("yLineEdit");
        QLineEdit* idLineEdit = duplicateMarkDialog.findChild<QLineEdit*>("idLineEdit");

        if(checkInput(yLineEdit->text(), idLineEdit->text()))
        {
            double y = yLineEdit->text().toDouble();
            int id = idLineEdit->text().toInt();
            yLineEdit->setText("0");
            idLineEdit->setText("1");
            return QPair<qreal,int>(y, id);
        }
        else
        {
            yLineEdit->setText("0");
            idLineEdit->setText("1");
            return QPair<qreal, int>(3.141592654,0);
        }
    }
    else return QPair<qreal, int>(3.141592654,0);
}

void Dialog::showMoveToMarkDialog()
{
    QLineEdit* xLineEdit = moveToMarkDialog.findChild<QLineEdit*>("xLineEdit");
    QLineEdit* yLineEdit = moveToMarkDialog.findChild<QLineEdit*>("yLineEdit");

    if(moveToMarkDialog.exec() == QDialog::Accepted)
    {
        if(checkInput(xLineEdit->text(), yLineEdit->text()))
        {
            double x = xLineEdit->text().toDouble();
            double y = yLineEdit->text().toDouble();
            xLineEdit->clear();
            yLineEdit->clear();
            emit dataMoveToReady(x, y);
        }
        else
        {
            xLineEdit->clear();
            yLineEdit->clear();
            emit setScrollHandDrag();
        }
    }
}

void Dialog::showSaveMarkInFileDialog()
{
    QString filePath = QFileDialog::getSaveFileName(nullptr, "Сохранить файл",
                                                    QDir::homePath() + "/untitled.txt",
                                                    "Text files (*.txt);;All files (*.*)");

    if(!filePath.isEmpty())
    {
        emit saveFilePath(filePath);
    }

    emit setScrollHandDrag();
}

void Dialog::showLoadMarkFromFileDialog()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Выбрать файл",
                                                    QDir::homePath(),
                                                    "Text files (*.txt);;All files (*.*)");

    if(!filePath.isEmpty())
    {
        emit loadFilePath(filePath);
    }

    emit setScrollHandDrag();
}

bool Dialog::checkInput(QString xLineText, QString yLineText)
{
    bool isDoubleX;
    bool isDoubleY;
    xLineText.toDouble(&isDoubleX);
    yLineText.toDouble(&isDoubleY);

    if(!isDoubleX)
    {
        QMessageBox::warning(this,"Error", "Invalid input: invalid character entered in X");
        return false;
    }
    if(!isDoubleY)
    {
        QMessageBox::warning(this,"Error", "Invalid input: invalid character entered in Y");
        return false;
    }

    return true;
}

bool Dialog::checkInput(QString xLineText, QString yLineText, QString idLineText)
{
    bool isDoubleX;
    bool isDoubleY;
    bool isIntId;
    xLineText.toDouble(&isDoubleX);
    yLineText.toDouble(&isDoubleY);
    idLineText.toInt(&isIntId);

    if(!isDoubleX)
    {
        QMessageBox::warning(this,"Error", "Invalid input: invalid character entered in X");
        return false;
    }
    if(!isDoubleY)
    {
        QMessageBox::warning(this,"Error", "Invalid input: invalid character entered in Y");
        return false;
    }
    if(!isIntId)
    {
        QMessageBox::warning(this,"Error", "Invalid input: invalid character entered in Id");
        return false;
    }

    return true;
}

