#ifndef CIRCLE_H
#define CIRCLE_H

#include <QPixmap>
#include <QPainter>

#include "ellipse.h"

class Circle : public Ellipse {
private:
    int radius;
    QPainter *painter;
public:
    Circle(QPoint);
    Circle(QPoint, int);
    void setRadius(int);
    void draw(QPixmap *);
};

#endif // CIRCLE_H
