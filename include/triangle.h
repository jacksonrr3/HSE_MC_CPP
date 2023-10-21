#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <math.h>
#include <algorithm>
#include <array>
#include "shape.h"


class Triangle : public Shape {

public:
    Triangle(const Point v_1, const Point v_2, const Point v_3, const BWColor& color);
    Triangle(const Point v_1, const Point v_2, const Point v_3, const RGBColor& color);

private:
    float getTriangleSquare(const Point v_1, const Point v_2, const Point v_3);
    void fillPoints(const Point v_1, const Point v_2, const Point v_3);
};

#endif