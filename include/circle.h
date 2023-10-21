#ifndef CIRCLE_H
#define CIRCLE_H

#include <math.h>
#include "shape.h"

class Circle : public Shape {
public:
    Circle(const Point centre, const int r, const BWColor& color);

    Circle(const Point centre, const int r, const RGBColor& color);

private:
    void fillPoints(const Point centre, const int r);
};

#endif
