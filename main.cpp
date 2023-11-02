#include "matrix.h"
#include "rgb_matrix.h"
#include "bw_matrix.h"
#include "bw_color.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
#include <iostream>
#include <chrono>

using Time = std::chrono::high_resolution_clock;
using ns = std::chrono::nanoseconds;

int main() {
    int bgColor = 255;
    int capColor = 179;
    int stipeColor = 128;
    int bottomColor = 52;
    Time::time_point start;
    Time::time_point end;
    double duration;

    std::cout << "Prepare and draw mushroom." << std::endl;
    start = Time::now();
    BWMatrix bw(2000, 2000, 255);
    BWColor bwColor(capColor);
    Circle cap({ 1000, 1000 }, 700, bwColor);
    bwColor.changeColor(bgColor);
    Rectangle background({ 0, 700 }, 2000, 1000, bwColor);
    Rectangle background2({ 800, 1300 }, 400, 200, bwColor);
    bwColor.changeColor(stipeColor);
    Triangle stipe({ 1000, 350 }, { 1200, 1500 }, { 800, 1500 }, bwColor);
    bwColor.changeColor(capColor);
    Rectangle background3({ 800, 350 }, 400, 350, bwColor);
    bwColor.changeColor(bottomColor);
    Circle bottom({ 1000, 1500 }, 200, bwColor);

    bw.draw(cap);
    bw.draw(background);
    bw.draw(bottom);
    bw.draw(background2);
    bw.draw(stipe);
    bw.draw(background3);
    end = Time::now();

    bw.display();
    duration = std::chrono::duration_cast<ns>(end - start).count() * 10e-6;
    std::cout << "Execution time:" << duration << "ms\n" << std::endl;

    std::cout << "Prepare and draw color house." << std::endl;
    start = Time::now();
    RGBMatrix rgb(2000, 2000, 0);
    RGBColor rgbColor(102, 205, 255);
    Rectangle sky({ 0, 0 }, 2000, 1500, rgbColor);
    rgbColor.changeColor(0, 153, 0);
    Rectangle grass({ 0, 1500 }, 2000, 2000, rgbColor);
    rgbColor.changeColor(255, 255, 0);
    Circle sun({ 50, 50 }, 300, rgbColor);
    Triangle ray1({ 360, 50 }, { 550, 30 }, { 550, 70 }, rgbColor);
    Triangle ray2({ 270, 270 }, { 420, 360 }, { 390, 400 }, rgbColor);
    Triangle ray3({ 50, 360 }, { 30, 550 }, { 70, 550 }, rgbColor);
    rgbColor.changeColor(102, 51, 0);
    Rectangle wall({ 600, 900 }, 1000, 800, rgbColor);
    rgbColor.changeColor(0, 0, 0);
    Rectangle flue({ 1300, 550 }, 100, 200, rgbColor);
    rgbColor.changeColor(51, 0, 0);
    Triangle roof({ 560, 900 }, { 1100, 500 }, { 1640, 900 }, rgbColor);
    rgbColor.changeColor(204, 102, 0);
    Rectangle door({ 1400, 1350 }, 150, 300, rgbColor);
    rgbColor.changeColor(0, 0, 0);
    Circle knob({ 1535, 1500 }, 6, rgbColor);
    rgbColor.changeColor(102, 163, 255);
    Rectangle window1({ 700, 950 }, 300, 350, rgbColor);
    Rectangle window2({ 1200, 950 }, 300, 350, rgbColor);

    rgb.draw(sky);
    rgb.draw(grass);
    rgb.draw(sun);
    rgb.draw(ray1);
    rgb.draw(ray2);
    rgb.draw(ray3);
    rgb.draw(wall);
    rgb.draw(flue);
    rgb.draw(roof);
    rgb.draw(door);
    rgb.draw(knob);
    rgb.draw(window1);
    rgb.draw(window2);
    end = Time::now();

    rgb.display();
    duration = std::chrono::duration_cast<ns>(end - start).count() * 10e-6;
    std::cout << "Execution time:" << duration << "ms\n" << std::endl;

    std::cout << "Prepare and draw bw house." << std::endl;
    start = Time::now();
    RGBMatrix rgb_h(2000, 2000, 0);
    BWColor bwColor_h(102);
    Rectangle sky_h({ 0, 0 }, 2000, 1500, bwColor_h);
    bwColor_h.changeColor(0);
    Rectangle grass_h({ 0, 1500 }, 2000, 2000, bwColor_h);
    bwColor_h.changeColor(255);
    Circle sun_h({ 50, 50 }, 300, bwColor_h);
    Triangle ray1_h({ 360, 50 }, { 550, 30 }, { 550, 70 }, bwColor_h);
    Triangle ray2_h({ 270, 270 }, { 420, 360 }, { 390, 400 }, bwColor_h);
    Triangle ray3_h({ 50, 360 }, { 30, 550 }, { 70, 550 }, bwColor_h);
    bwColor_h.changeColor(51);
    Rectangle wall_h({ 600, 900 }, 1000, 800, bwColor_h);
    bwColor_h.changeColor(0);
    Rectangle flue_h({ 1300, 550 }, 100, 200, bwColor_h);
    bwColor_h.changeColor(51);
    Triangle roof_h({ 560, 900 }, { 1100, 500 }, { 1640, 900 }, bwColor_h);
    bwColor_h.changeColor(204);
    Rectangle door_h({ 1400, 1350 }, 150, 300, bwColor_h);
    bwColor_h.changeColor(0);
    Circle knob_h({ 1535, 1500 }, 6, bwColor_h);
    bwColor_h.changeColor(102);
    Rectangle window1_h({ 700, 950 }, 300, 350, bwColor_h);
    Rectangle window2_h({ 1200, 950 }, 300, 350, bwColor_h);

    rgb_h.draw(sky_h);
    rgb_h.draw(grass_h);
    rgb_h.draw(sun_h);
    rgb_h.draw(ray1_h);
    rgb_h.draw(ray2_h);
    rgb_h.draw(ray3_h);
    rgb_h.draw(wall_h);
    rgb_h.draw(flue_h);
    rgb_h.draw(roof_h);
    rgb_h.draw(door_h);
    rgb_h.draw(knob_h);
    rgb_h.draw(window1_h);
    rgb_h.draw(window2_h);
    end = Time::now();

    rgb_h.display();
    duration = std::chrono::duration_cast<ns>(end - start).count() * 10e-6;
    std::cout << "Execution time:" << duration << "ms\n" << std::endl;

    std::cout << "Prepare and draw car." << std::endl;
    start = Time::now();
    RGBMatrix rgb2(2000, 2000, 0);
    RGBColor rgbColor2(102, 205, 255);
    Rectangle sky2({ 0, 0 }, 2000, 1500, rgbColor2);
    rgbColor2.changeColor(0, 153, 0);
    Rectangle grass2({ 0, 1500 }, 2000, 2000, rgbColor2);
    rgbColor2.changeColor(200, 0, 0);
    Rectangle body({ 200, 1300 }, 1600, 300, rgbColor2);
    Triangle rear({ 1800, 1300 }, { 1800, 1600 }, { 1900, 1300 }, rgbColor2);
    Rectangle cab({ 800, 1100 }, 1100, 200, rgbColor2);
    Triangle front({ 800, 1100 }, { 600, 1300 }, { 800, 1300 }, rgbColor2);
    Triangle spoiler({ 1900, 1100 }, { 1600, 1100 }, { 1950, 1050 }, rgbColor2);
    rgbColor2.changeColor(0, 0, 0);
    Circle w1({ 500, 1600 }, 150, rgbColor2);
    Circle w2({ 1400, 1600 }, 150, rgbColor2);

    rgb2.draw(sky2);
    rgb2.draw(grass2);
    rgb2.draw(body);
    rgb2.draw(cab);
    rgb2.draw(rear);
    rgb2.draw(front);
    rgb2.draw(spoiler);
    rgb2.draw(w1);
    rgb2.draw(w2);
    end = Time::now();

    rgb2.display();
    duration = std::chrono::duration_cast<ns>(end - start).count() * 10e-6;
    std::cout << "Execution time:" << duration << "ms\n" << std::endl;

    return 0;
}
