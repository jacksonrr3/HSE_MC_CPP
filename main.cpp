#include "matrix.h"
#include "rgb_matrix.h"
#include "bw_matrix.h"
#include "bw_color.h"
#include "rectangle.h"
#include "circle.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <filesystem>
namespace fs = std::filesystem;

void GenMatrix(Matrix& mat, int min = 0, int max = 255) {
    for (size_t r = 0; r < mat.getRows(); ++r) {
        for (size_t c = 0; c < mat.getCols(); ++c) {
            for (size_t ch = 0; ch < mat.getChannels(); ++ch) {
                mat.at(r, c, ch) = min + std::rand() % (max - min + 1);
            }
        }
    }
}

int main() {
    int bgColor = 255;
    int capColor = 179;
    int stipeColor = 128;
    int bottomColor = 52;
    BWMatrix bw(2000, 2000, 255);
    BWColor bwColor(capColor);
    Circle cap({ 1000, 1000 }, 700, bwColor);
    bwColor.changeColor(bgColor);
    Rectangle background({ 0, 700 }, 2000, 1000, bwColor);
    Rectangle background2({ 800, 1300 }, 400, 200, bwColor);
    bwColor.changeColor(stipeColor);
    // Triangle stipe({ 1000, 350 }, { 1200, 1500 }, { 800, 1500 }, bwColor);
    bwColor.changeColor(capColor);
    Rectangle background3({ 800, 350 }, 400, 350, bwColor);
    bwColor.changeColor(bottomColor);
    Circle bottom({ 1000, 1500 }, 200, bwColor);

    bw.draw(cap);
    bw.draw(background);
    bw.draw(bottom);
    bw.draw(background2);
    // bw.draw(stipe);
    bw.draw(background3);
    bw.display();


    // auto path = fs::current_path();
    // RGBMatrix rgb;
    // BWMatrix bw;
    // bw.readImage("../../images/hse_bw.png");
    // rgb.readImage("../../images/hse_rgb.png");
    // bw.display();
    // rgb.display();

    // BWMatrix inverted = bw.invert();
    // inverted.display();
    // BWMatrix newBW = rgb.toBW();
    // newBW.display();

    return 0;
}
