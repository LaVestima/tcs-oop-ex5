#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape {
public:
    Ellipse();
    void draw(QPixmap *);
};

#endif // ELLIPSE_H
