#ifndef SURFACE_H
#define SURFACE_H

#include <QGraphicsRectItem>
class QPoint;

class Surface : public QGraphicsRectItem
{
public:
    Surface(int xpos, int ypos, QGraphicsItem *parent = 0);
    Surface(int xpos, int ypos, int width, int height, QGraphicsItem *parent = 0);
    ~Surface();
    void setPos(int, int);
    QPoint getPos();
    void setColor(QString brushColor);
};

#endif // SURFACE_H
