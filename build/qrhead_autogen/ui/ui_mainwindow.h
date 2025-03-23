/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralwidget;
    QGraphicsView *workArea;
    QWidget *buttonsWidget;
    QGridLayout *gridLayout;
    QPushButton *duplicateRightMarkButton;
    QPushButton *saveMarkButton;
    QSpacerItem *verticalSpacer;
    QPushButton *duplicateLeftMarkButton;
    QPushButton *duplicateUpMarkButton;
    QPushButton *addMarkButton;
    QPushButton *removeMarkButton;
    QPushButton *rotateMarkButton;
    QPushButton *loadMarkButton;
    QPushButton *moveToMarkButton;
    QPushButton *duplicateDownMarkButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/markIcon_270.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolTipDuration(1);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #1e1e2e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 */\n"
"color: #ffffff; /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"selection-background-color: #ff9800;"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        workArea = new QGraphicsView(centralwidget);
        workArea->setObjectName("workArea");
        workArea->setGeometry(QRect(0, 0, 650, 600));
        workArea->setMinimumSize(QSize(650, 600));
        workArea->setMaximumSize(QSize(10000, 1000000));
        workArea->setAutoFillBackground(false);
        workArea->setStyleSheet(QString::fromUtf8("/* QGraphicsView */\n"
"QGraphicsView {\n"
"    background-color: #1e1e2e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\204\320\276\320\275 */\n"
"    border: 2px solid #3e3e5e; /* \320\242\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* \320\237\320\276\320\273\320\276\321\201\321\213 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 \320\262 QGraphicsView */\n"
"QGraphicsView QScrollBar:vertical {\n"
"    background: #2e2e3e;\n"
"    width: 15px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::handle:vertical {\n"
"    background: #555555;\n"
"    min-height: 20px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::add-line:vertical,\n"
"QGraphicsView QScrollBar::sub-line:vertical {\n"
"    background: #2e2e3e;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::add-page:vertical,\n"
"QGraphicsView QScro"
                        "llBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar:horizontal {\n"
"    background: #2e2e3e;\n"
"    height: 15px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::handle:horizontal {\n"
"    background: #555555;\n"
"    min-width: 20px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::add-line:horizontal,\n"
"QGraphicsView QScrollBar::sub-line:horizontal {\n"
"    background: #2e2e3e;\n"
"    width: 0px;\n"
"}\n"
"\n"
"QGraphicsView QScrollBar::add-page:horizontal,\n"
"QGraphicsView QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"/* \320\255\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 QGraphicsView */\n"
"QGraphicsView QWidget {\n"
"    background-color: #2e2e3e;\n"
"    border: none;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* \320\255\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320"
                        "\264\320\265\320\275\320\270\320\270 \320\270 \320\262\320\267\320\260\320\270\320\274\320\276\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\270 */\n"
"QGraphicsView QWidget:hover {\n"
"    border: 1px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QGraphicsView QWidget:focus {\n"
"    border: 1px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */\n"
"}"));
        workArea->setFrameShape(QFrame::StyledPanel);
        workArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        workArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        workArea->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        workArea->setDragMode(QGraphicsView::ScrollHandDrag);
        workArea->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
        workArea->setViewportUpdateMode(QGraphicsView::MinimalViewportUpdate);
        buttonsWidget = new QWidget(centralwidget);
        buttonsWidget->setObjectName("buttonsWidget");
        buttonsWidget->setGeometry(QRect(20, 20, 80, 250));
        buttonsWidget->setMinimumSize(QSize(60, 250));
        buttonsWidget->setMaximumSize(QSize(90, 250));
        buttonsWidget->setStyleSheet(QString::fromUtf8("background: transparent;\n"
""));
        gridLayout = new QGridLayout(buttonsWidget);
        gridLayout->setObjectName("gridLayout");
        duplicateRightMarkButton = new QPushButton(buttonsWidget);
        duplicateRightMarkButton->setObjectName("duplicateRightMarkButton");
        duplicateRightMarkButton->setMinimumSize(QSize(30, 30));
        duplicateRightMarkButton->setMaximumSize(QSize(30, 30));
        duplicateRightMarkButton->setToolTipDuration(-1);
        duplicateRightMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("go-next");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        duplicateRightMarkButton->setIcon(icon1);
        duplicateRightMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(duplicateRightMarkButton, 6, 1, 1, 1);

        saveMarkButton = new QPushButton(buttonsWidget);
        saveMarkButton->setObjectName("saveMarkButton");
        saveMarkButton->setMinimumSize(QSize(30, 30));
        saveMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("document-save");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        saveMarkButton->setIcon(icon2);
        saveMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(saveMarkButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(10, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        duplicateLeftMarkButton = new QPushButton(buttonsWidget);
        duplicateLeftMarkButton->setObjectName("duplicateLeftMarkButton");
        duplicateLeftMarkButton->setMinimumSize(QSize(30, 30));
        duplicateLeftMarkButton->setMaximumSize(QSize(30, 30));
        duplicateLeftMarkButton->setToolTipDuration(-1);
        duplicateLeftMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("go-previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        duplicateLeftMarkButton->setIcon(icon3);
        duplicateLeftMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(duplicateLeftMarkButton, 6, 0, 1, 1);

        duplicateUpMarkButton = new QPushButton(buttonsWidget);
        duplicateUpMarkButton->setObjectName("duplicateUpMarkButton");
        duplicateUpMarkButton->setMinimumSize(QSize(30, 30));
        duplicateUpMarkButton->setMaximumSize(QSize(30, 30));
        duplicateUpMarkButton->setToolTipDuration(-1);
        duplicateUpMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("go-up");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        duplicateUpMarkButton->setIcon(icon4);
        duplicateUpMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(duplicateUpMarkButton, 5, 0, 1, 1);

        addMarkButton = new QPushButton(buttonsWidget);
        addMarkButton->setObjectName("addMarkButton");
        addMarkButton->setMinimumSize(QSize(30, 30));
        addMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        addMarkButton->setIcon(icon5);
        addMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(addMarkButton, 2, 0, 1, 1);

        removeMarkButton = new QPushButton(buttonsWidget);
        removeMarkButton->setObjectName("removeMarkButton");
        removeMarkButton->setMinimumSize(QSize(30, 30));
        removeMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        removeMarkButton->setIcon(icon6);
        removeMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(removeMarkButton, 3, 0, 1, 1);

        rotateMarkButton = new QPushButton(buttonsWidget);
        rotateMarkButton->setObjectName("rotateMarkButton");
        rotateMarkButton->setMinimumSize(QSize(30, 30));
        rotateMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("go-jump");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        rotateMarkButton->setIcon(icon7);
        rotateMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(rotateMarkButton, 2, 1, 1, 1);

        loadMarkButton = new QPushButton(buttonsWidget);
        loadMarkButton->setObjectName("loadMarkButton");
        loadMarkButton->setMinimumSize(QSize(30, 30));
        loadMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        loadMarkButton->setIcon(icon8);
        loadMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(loadMarkButton, 0, 0, 1, 1);

        moveToMarkButton = new QPushButton(buttonsWidget);
        moveToMarkButton->setObjectName("moveToMarkButton");
        moveToMarkButton->setMinimumSize(QSize(30, 30));
        moveToMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("go-bottom");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        moveToMarkButton->setIcon(icon9);
        moveToMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(moveToMarkButton, 3, 1, 1, 1);

        duplicateDownMarkButton = new QPushButton(buttonsWidget);
        duplicateDownMarkButton->setObjectName("duplicateDownMarkButton");
        duplicateDownMarkButton->setMinimumSize(QSize(30, 30));
        duplicateDownMarkButton->setMaximumSize(QSize(30, 30));
        duplicateDownMarkButton->setToolTipDuration(-1);
        duplicateDownMarkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2e2e3e; /* \320\242\321\221\320\274\320\275\320\276-\321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 2px solid #3e3e5e; /* \320\221\320\276\320\273\320\265\320\265 \321\202\321\221\320\274\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff9800; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\204\320\276\320\275 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"  "
                        "  border: 2px solid #ff9800;\n"
"    color: #1e1e2e; /* \320\242\321\221\320\274\320\275\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #3e3e5e;\n"
"    border: 2px solid #3e3e5e;\n"
"    color: #7e7e8e;\n"
"}"));
        QIcon icon10;
        iconThemeName = QString::fromUtf8("go-down");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        duplicateDownMarkButton->setIcon(icon10);
        duplicateDownMarkButton->setIconSize(QSize(20, 20));

        gridLayout->addWidget(duplicateDownMarkButton, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(10, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QrHead", nullptr));
#if QT_CONFIG(statustip)
        MainWindow->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        duplicateRightMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Copy right(Right arrow)", nullptr));
#endif // QT_CONFIG(tooltip)
        duplicateRightMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        saveMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Save(Ctrl + S)", nullptr));
#endif // QT_CONFIG(tooltip)
        saveMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        duplicateLeftMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Copy left(Left arrow)", nullptr));
#endif // QT_CONFIG(tooltip)
        duplicateLeftMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        duplicateUpMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Copy up(Up arrow)", nullptr));
#endif // QT_CONFIG(tooltip)
        duplicateUpMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        addMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Add mark(Ctrl + N)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        addMarkButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        addMarkButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        addMarkButton->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        addMarkButton->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        addMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        removeMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Remove mark(Del)", nullptr));
#endif // QT_CONFIG(tooltip)
        removeMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        rotateMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Rotate mark(Ctrl + >)", nullptr));
#endif // QT_CONFIG(tooltip)
        rotateMarkButton->setText(QString());
#if QT_CONFIG(shortcut)
        rotateMarkButton->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+.", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        loadMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Load(Ctrl + L)", nullptr));
#endif // QT_CONFIG(tooltip)
        loadMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveToMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Move mark(Ctrl + X)", nullptr));
#endif // QT_CONFIG(tooltip)
        moveToMarkButton->setText(QString());
#if QT_CONFIG(tooltip)
        duplicateDownMarkButton->setToolTip(QCoreApplication::translate("MainWindow", "Copy down(Down arrow)", nullptr));
#endif // QT_CONFIG(tooltip)
        duplicateDownMarkButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
