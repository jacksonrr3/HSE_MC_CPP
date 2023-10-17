#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(const Point start, const int w, const int h, const BWColor& color) : Shape(color) {
        fillPoints(start, w, h);
    }
    
    Rectangle(const Point start, const int w, const int h, const RGBColor& color) : Shape(color) {
        fillPoints(start, w, h);
    }

private:
    void fillPoints(const Point start, const int w, const int h) {
        for (int y = start.y; y < start.y + h; y++) {
            for (int x = start.x; x < start.x + w; x++) {
                m_points.push_back(Point(x, y));
            }
        }
    }
};


#endif
