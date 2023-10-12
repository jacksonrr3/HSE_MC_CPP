#include "matrix.h"

Matrix::Matrix(const Matrix& mat)
    : m_rows(mat.m_rows)
    , m_cols(mat.m_cols)
    , m_channels(mat.m_channels)
    , m_data(mat.m_data)
{}

Matrix::Matrix(int num_rows, int num_cols, int channels) 
    : m_rows(num_rows)
    , m_cols(num_cols)
    , m_channels(std::max(channels, static_cast<int>(1)))
    , m_data(num_rows * num_cols * m_channels)
{}

void Matrix::add(Matrix& res, int val) const
{
    for (size_t i = 0; i < m_data.size(); ++i) {
        res.m_data[i] = m_data[i] + val;
    }
}

void Matrix::multiply(Matrix& res, int val) const
{
    for (size_t i = 0; i < m_data.size(); ++i) {
        res.m_data[i] = m_data[i] * val;
    }
}

void Matrix::subtract(Matrix& res, int val) const
{
    for (size_t i = 0; i < m_data.size(); ++i) {
        res.m_data[i] = m_data[i] - val;
    }
}
