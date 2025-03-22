#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QComboBox>
#include <QFileDialog>

class Dialog : public QDialog
{
    Q_OBJECT
public:
    Dialog();

private:
    QString styleSheet;

    QDialog addMarkDialog;
    QDialog duplicateMarkDialog;
    QDialog moveToMarkDialog;
    QFileDialog saveMarkInFileDialog;
    QFileDialog loadMarkFromFileDialog;

    void createAddMarkDialog();
    void createDuplicateMarkDialog();
    void createMoveToMarkDialog();

    bool checkInput(QString, QString);
    bool checkInput(QString, QString, QString);

signals:
    void dataReady(double x, double y, int id, int angular);
    void dataDuplicateReady(double y, int id);
    void dataMoveToReady(double x, double y);
    void saveFilePath(QString);
    void loadFilePath(QString);

    void setScrollHandDrag();

public slots:
    void showAddMarkDialog();
    QPair<qreal, int> showDuplicateMarkDialog();
    void showMoveToMarkDialog();
    void showSaveMarkInFileDialog();
    void showLoadMarkFromFileDialog();
};

#endif // DIALOG_H
