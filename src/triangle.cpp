#include "triangle.h"


Triangle::Triangle(const Point v_1, const Point v_2, const Point v_3, const BWColor& color) : Shape(color) {
    fillPoints(v_1, v_2, v_3);
}

Triangle::Triangle(const Point v_1, const Point v_2, const Point v_3, const RGBColor& color) : Shape(color) {
    fillPoints(v_1, v_2, v_3);
}

float Triangle::getTriangleSquare(const Point v_1, const Point v_2, const Point v_3) {
    return (std::abs(v_1.x * (v_2.y - v_3.y) + v_2.x * (v_3.y - v_1.y) + v_3.x * (v_1.y - v_2.y))) / 2;
}

void Triangle::fillPoints(const Point v_1, const Point v_2, const Point v_3) {
    std::array<int, 3> a_x = { v_1.x, v_2.x, v_3.x };
    std::array<int, 3> a_y = { v_1.y, v_2.y, v_3.y };

    auto mm_x = std::minmax_element(a_x.begin(), a_x.end());
    auto mm_y = std::minmax_element(a_y.begin(), a_y.end());

    float s = getTriangleSquare(v_1, v_2, v_3);
    for (int y = *mm_y.first; y <= *mm_y.second; y++) {
        for (int x = *mm_x.first; x < *mm_x.second; x++) {
            auto p = Point(x, y);
            auto s_abp = getTriangleSquare(v_1, v_2, p);
            auto s_bcp = getTriangleSquare(v_2, v_3, p);
            auto s_cap = getTriangleSquare(v_3, v_1, p);
            if ((s_abp + s_bcp + s_cap) <= s) {
                m_points.push_back(Point(x, y));
            }

        }
    }
}
