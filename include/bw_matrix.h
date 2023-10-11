#ifndef BW_MATRIX_H
#define BW_MATRIX_H

#include "matrix.h"

class BWMatrix : public Matrix {
public:
    BWMatrix(int rows, int cols);
    BWMatrix(const BWMatrix& mat);

    BWMatrix operator+(int val) const;
    BWMatrix operator-(int val) const;
    BWMatrix operator*(int val) const;

    BWMatrix add(int val) const;
    BWMatrix multiply(int val) const;
    BWMatrix subtract(int val) const;
    
    BWMatrix invert() const;
    cv::Mat toOpenCV() const override;
};

#endif 