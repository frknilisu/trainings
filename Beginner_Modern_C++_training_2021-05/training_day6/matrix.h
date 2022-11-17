#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
public:
    Matrix(int rows, int cols);
    Matrix(const vector<vector<double>>& v);
    ~Matrix();
    Matrix(const Matrix& source);
    Matrix& operator=(const Matrix& source);
    Matrix& operator=(const vector<vector<double>>& v);
    Matrix operator+(const Matrix& rhs) const;
    Matrix operator*(int factor) const;
    friend Matrix operator*(int factor, const Matrix& m);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& m);
private:
    int m_rows;
    int m_cols;
    vector<vector<double>> m_elements;
};

#endif // MATRIX_H
