#ifndef RGB_MATRIX_H
#define RGB_MATRIX_H

#include "matrix.h"
#include "bw_matrix.h"

class RGBMatrix : public Matrix {
public:
    RGBMatrix(int num_rows, int num_cols);

    RGBMatrix(const RGBMatrix& mat);
    // inline size_t getRows() const;
    // inline size_t getCols() const;
    // inline int& at(size_t row, size_t col, size_t channel);
    RGBMatrix operator+(int val) const;
    RGBMatrix operator-(int val) const;
    RGBMatrix operator*(int val) const;
    RGBMatrix add(int val) const;
    RGBMatrix multiply(int val) const;
    RGBMatrix subtract(int val) const;
    BWMatrix toBW() const;
    cv::Mat toOpenCV() const;
};

#endif
