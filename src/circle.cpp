#include "circle.h"

Circle::Circle(const Point centre, const int r, const BWColor& color) : Shape(color) {
    fillPoints(centre, r);
}

Circle::Circle(const Point centre, const int r, const RGBColor& color) : Shape(color) {
    fillPoints(centre, r);
}

void Circle::fillPoints(const Point centre, const int r) {
    auto start_x = centre.x - r;
    auto end_x = centre.x + r;
    auto start_y = centre.y - r;
    auto end_y = centre.y + r;
    for (int y = start_y; y <= end_y; y++) {
        for (int x = start_x; x < end_x; x++) {
            if ((std::pow(x - centre.x, 2) + std::pow(y - centre.y, 2)) <= std::pow(r, 2)) {
                m_points.push_back(Point(x, y));
            }
        }
    }
}
