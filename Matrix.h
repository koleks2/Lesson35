#pragma once
#include <iostream>
#include <fstream>

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int r, int c);

    ~Matrix();

    friend std::ostream& operator<<(std::ostream& os, const Matrix& m);
    friend std::istream& operator>>(std::istream& is, Matrix& m);
};
