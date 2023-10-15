#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include "color.h"
#include "bw_color.h"
#include "rgb_color.h"

struct Point
{
    int x;
    int y;
};

class Shape
{
    virtual ~Shape() { delete m_color; }
    std::vector<Point> getPoints() const { return m_points; }
    const Color* getColor() const { return m_color; }
protected:
    Shape(const BWColor& color) { m_color = new BWColor(color); }
    Shape(const RGBColor& color) { m_color = new RGBColor(color); }

    std::vector<Point> m_points;
    Color* m_color;
};

#endif