#include "rgb_matrix.h"

RGBMatrix::RGBMatrix(const RGBMatrix& mat)
    : Matrix(mat)
{}

RGBMatrix::RGBMatrix(int rows, int cols)
    : Matrix(rows, cols, 3)
{}

RGBMatrix RGBMatrix::operator+(int val) const
{
    return add(val);
}

RGBMatrix RGBMatrix::operator-(int val) const
{
    return subtract(val);
}

RGBMatrix RGBMatrix::operator*(int val) const
{
    return multiply(val);
}

RGBMatrix RGBMatrix::add(int val) const
{
    RGBMatrix res(m_rows, m_cols);
    Matrix::add(res, val);
    return res;
}

RGBMatrix RGBMatrix::multiply(int val) const
{
    RGBMatrix res(m_rows, m_cols);
    Matrix::multiply(res, val);
    return res;
}

RGBMatrix RGBMatrix::subtract(int val) const
{
    RGBMatrix res(m_rows, m_cols);
    Matrix::subtract(res, val);
    return res;
}

BWMatrix RGBMatrix::toBW() const
{
    BWMatrix res(m_rows, m_cols);
    for (size_t r = 0; r < m_rows; ++r) {
        for (size_t c = 0; c < m_cols; ++c) {
            int gray = 0;
            for (size_t ch = 0; ch < m_channels; ++ch) {
                gray += at(r, c, ch);
            }
            res.at(r, c) = gray / m_channels;
        }
    }
    return res;
}

cv::Mat RGBMatrix::toOpenCV() const
{
    cv::Mat mat(m_rows, m_cols, CV_8UC3);
    for (size_t r = 0; r < m_rows; ++r) {
        for (size_t c = 0; c < m_cols; ++c) {
            cv::Vec3b val;
            val[0] = at(r, c, 2);
            val[1] = at(r, c, 1);
            val[2] = at(r, c, 0);
            mat.at<cv::Vec3b>(r, c) = val;
        }
    }
    return mat;
}
