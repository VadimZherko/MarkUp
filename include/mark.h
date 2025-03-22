#ifndef MARK_H
#define MARK_H

#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>

class Mark : public QGraphicsPixmapItem
{
public:
    Mark(double, double, int, int);
    int getAngular();
    void setId();
    int getId();

    void setAngular(int);

private:
    int angular;
    double x;
    double y;
    int id;
    QGraphicsTextItem* textItem;
};

#endif // MARK_H
