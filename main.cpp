#include "matrix.h"
#include "rgb_matrix.h"
#include "bw_matrix.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// void GenMatrix(Matrix& mat, int min = 0, int max = 255) {
//     for (size_t r = 0; r < mat.getRows(); ++r) {
//         for (size_t c = 0; c < mat.getCols(); ++c) {
//             for (size_t ch = 0; ch < mat.getChannels(); ++ch) {
//                 mat.at(r, c, ch) = min + std::rand() % (max - min + 1);
//             }
//         }
//     }
// }

int main() {
    BWMatrix bw(2, 2);
    RGBMatrix rgb(3, 3);

    BWMatrix bw2(bw);
    RGBMatrix rgb2(rgb); 

    bw.add(10);
    bw.getRows();

    return 0;
}