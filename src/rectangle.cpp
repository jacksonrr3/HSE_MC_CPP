#include "rectangle.h"

Rectangle::Rectangle(const Point start, const int w, const int h, const BWColor& color) : Shape(color) {
    fillPoints(start, w, h);
}

Rectangle::Rectangle(const Point start, const int w, const int h, const RGBColor& color) : Shape(color) {
    fillPoints(start, w, h);
}

void Rectangle::fillPoints(const Point start, const int w, const int h) {
    for (int y = start.y; y < start.y + h; y++) {
        for (int x = start.x; x < start.x + w; x++) {
            m_points.push_back(Point(x, y));
        }
    }
}
