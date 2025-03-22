#ifndef MARKTABLE_H
#define MARKTABLE_H

#include <QTableView>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QFile>
#include <QMessageBox>
#include <QSortFilterProxyModel>

#include "../include/mark.h"
#include "../include/config.h"

class MarkTable : public QTableView
{

    Q_OBJECT
public:
    MarkTable();

private:
    QStandardItemModel* model;
    QSortFilterProxyModel* proxyModel;

public slots:
    void addRow(int, double, double, int);
    void updateRow(int, int);
    void removeRow(int);

    void saveTable(QString);
};

#endif // MARKTABLE_H
