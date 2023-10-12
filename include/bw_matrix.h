#ifndef BW_MATRIX_H
#define BW_MATRIX_H

#include "matrix.h"

class BWMatrix : public Matrix {
public:
    BWMatrix(int num_rows, int num_cols);
    BWMatrix(const BWMatrix& mat);
    // inline size_t getRows() const;
    // inline size_t getCols() const;
    // inline int& at(size_t row, size_t col, size_t channel);
    BWMatrix operator+(int val) const;
    BWMatrix operator-(int val) const;
    BWMatrix operator*(int val) const;
    BWMatrix add(int val) const;
    BWMatrix multiply(int val) const;
    BWMatrix subtract(int val) const;
    BWMatrix invert() const;
    cv::Mat toOpenCV() const;
};

#endif 