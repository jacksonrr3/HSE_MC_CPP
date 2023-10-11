#include "matrix.h"

#include <iomanip>
#include <iostream>

Matrix::Matrix()
    : m_rows(0), m_cols(0) {
}

Matrix::Matrix(int num_rows, int num_cols)
    : m_rows(num_rows), m_cols(num_cols), m_data(num_rows* num_cols) {
}

Matrix::Matrix(const Matrix& mat)
    : m_rows(mat.m_rows), m_cols(mat.m_cols), m_data(mat.m_data) {
}

Matrix Matrix::add(int val) const {
    Matrix res(m_rows, m_cols);
    for (size_t i = 0; i < m_data.size(); ++i) {
        res.m_data[i] = m_data[i] + val;
    }

    return res;
}

Matrix Matrix::multiply(int val) const {
    Matrix res(m_rows, m_cols);
    for (size_t i = 0; i < m_data.size(); ++i) {
        res.m_data[i] = m_data[i] * val;
    }

    return res;
}

Matrix Matrix::subtract(int val) const {
    Matrix res(m_rows, m_cols);
    for (size_t i = 0; i < m_data.size(); ++i) {
        res.m_data[i] = m_data[i] - val;
    }

    return res;
}

Matrix& Matrix::operator=(const Matrix& mat) {
    if (this != &mat) {
        m_rows = mat.m_rows;
        m_cols = mat.m_cols;
        m_data.assign(mat.m_data.begin(), mat.m_data.end());
    }

    return *this;
}
