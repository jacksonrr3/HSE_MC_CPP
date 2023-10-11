#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
public:
    Matrix();
    Matrix(int num_rows, int num_cols);
    Matrix(const Matrix& mat);

    inline size_t getRows() const { return m_rows; }
    inline size_t getCols() const { return m_cols; }
    inline int& at(size_t row, size_t col) { return m_data[row * m_cols + col]; }

    Matrix add(int val) const;
    Matrix multiply(int val) const;
    Matrix subtract(int val) const;
    Matrix& operator=(const Matrix& mat);

private:
    size_t m_rows;
    size_t m_cols;
    std::vector<int> m_data;
};

#endif
