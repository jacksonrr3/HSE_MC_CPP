#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {

public:
    Rectangle(const Point start, const int w, const int h, const BWColor& color);
    Rectangle(const Point start, const int w, const int h, const RGBColor& color);

private:
    void fillPoints(const Point start, const int w, const int h);
};


#endif
