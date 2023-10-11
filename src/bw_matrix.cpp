#include "bw_matrix.h"

BWMatrix::BWMatrix(int rows, int cols)
    : Matrix(rows, cols, 1)
{}

BWMatrix::BWMatrix(const BWMatrix& mat)
    : Matrix(mat)
{}

BWMatrix BWMatrix::add(int val) const
{
    BWMatrix res(m_rows, m_cols);
    Matrix::add(res, val);
    return res;
}

BWMatrix BWMatrix::multiply(int val) const
{
    BWMatrix res(m_rows, m_cols);
    Matrix::multiply(res, val);
    return res;
}

BWMatrix BWMatrix::subtract(int val) const
{
    BWMatrix res(m_rows, m_cols);
    Matrix::subtract(res, val);
    return res;
}

BWMatrix BWMatrix::operator+(int val) const
{
    return add(val);
}

BWMatrix BWMatrix::operator-(int val) const
{
    return subtract(val);
}

BWMatrix BWMatrix::operator*(int val) const
{
    return multiply(val);
}

BWMatrix BWMatrix::invert() const
{
    BWMatrix res = *this - 255;
    res = res * (-1);
    return res;
}

cv::Mat BWMatrix::toOpenCV() const
{
    cv::Mat mat(m_rows, m_cols, CV_8UC1);
    for (size_t r = 0; r < m_rows; ++r) {
        for (size_t c = 0; c < m_cols; ++c) {
            // mat.at<uchar>(r, c) = at(r, c);
            mat.at<uchar>(r, c) = m_data[r * m_cols * m_channels + c * m_channels];

        }
    }
    return mat;
}
