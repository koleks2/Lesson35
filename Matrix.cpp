#include "Matrix.h"
Matrix::Matrix(int r, int c) : rows(r), cols(c) {
    data = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            data[i][j] = rand() % 100;
        }
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < rows; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

std::ostream& operator<<(std::ostream& os, const Matrix& m) {
    os << m.rows << " " << m.cols << "\n";
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            os << m.data[i][j] << " ";
        }
        os << "\n";
    }
    return os;
}

std::istream& operator>>(std::istream& is, Matrix& m) {
    is >> m.rows >> m.cols;

    m.data = new int* [m.rows];
    for (int i = 0; i < m.rows; ++i) {
        m.data[i] = new int[m.cols];
        for (int j = 0; j < m.cols; ++j) {
            is >> m.data[i][j];
        }
    }
    return is;
}