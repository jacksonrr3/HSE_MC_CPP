#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

#include <opencv2/core.hpp>

class Matrix {
public:
    inline size_t getRows() const { return m_rows; }
    inline size_t getCols() const { return m_cols; }
    inline size_t getChannels() const { return m_channels; }

    inline int& at(size_t row, size_t col, size_t channel)
    {
        return m_data[row * m_cols * m_channels + col * m_channels + channel];
    }

 
protected:
    Matrix(const Matrix& mat);
    Matrix(int num_rows, int num_cols, int channels);

    void add(Matrix& res, int val) const;
    void multiply(Matrix& res, int val) const;
    void subtract(Matrix& res, int val) const;

    size_t m_rows;
    size_t m_cols;
    size_t m_channels;
    std::vector<int> m_data;
};

#endif  // MATRIX_Hj
