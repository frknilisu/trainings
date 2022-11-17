#include "matrix.h"

Matrix::Matrix(int rows, int cols)
    : m_rows(rows), m_cols(cols)
{
    cout << "Matrix Default Construction is called." << endl;
}

Matrix::Matrix(const vector<vector<double>>& v)
    : m_rows(v.size()), m_cols(v[0].size()), m_elements(v)
{
    cout << "Matrix Construction with vector<vector<double>> is called." << endl;
}

Matrix::~Matrix()
{
    cout << "Matrix Destruction is called." << endl;
}

Matrix::Matrix(const Matrix& source)
{
    cout << "Matrix Copy Construction is called." << endl;
    *this = source;
}

Matrix& Matrix::operator=(const Matrix& source)
{
    cout << "Operator= overloading with Matrix is called." << endl;
    if(this == &source)
        return *this;
    m_elements.clear();
    m_rows = source.m_rows;
    m_cols = source.m_cols;
    m_elements = source.m_elements;
    return *this;
}

Matrix& Matrix::operator=(const vector<vector<double>>& v)
{
    cout << "Operator= overloading with vector<vector<double>> is called." << endl;
    if(v.size() != m_rows) {
        cerr << "Error: Sizes are not valid" << endl;
        throw "Exception";
    } else {
        for(const vector<double>& row: v) {
            if(row.size() != m_cols) {
                cerr << "Error: Sizes are not valid" << endl;
                throw "Exception";
            }
        }
    }
    m_elements.clear();
    m_elements = v;
    return *this;
}

Matrix Matrix::operator+(const Matrix& rhs) const
{
    cout << "Operator+ overloading with Matrix is called." << endl;
    if(this->m_rows == rhs.m_rows && this->m_cols == rhs.m_cols) {
        Matrix sum(m_rows, m_cols);
        for(int i=0; i<m_rows; i++)
        {
            vector<double> v;
            for(int j=0; j<m_cols; j++)
            {
                v.push_back(this->m_elements[i][j] + rhs.m_elements[i][j]);
            }
            sum.m_elements.push_back(v);
        }
        return sum;
    } else {
        cerr << "Sizes are not equal" << endl;
        return Matrix(0, 0);
    }
}

Matrix Matrix::operator*(int factor) const
{
    cout << "Operator* overloading with int is called." << endl;
    Matrix mult(m_rows, m_cols);
    for(int i=0; i<m_rows; i++)
    {
        vector<double> v;
        for(int j=0; j<m_cols; j++)
        {
            v.push_back(factor * this->m_elements[i][j]);
        }
        mult.m_elements.push_back(v);
    }
    return mult;
}

Matrix operator*(int factor, const Matrix& m)
{
    cout << "Operator* overloading with factor and Matrix is called." << endl;
    return m * factor;
}

std::ostream& operator<<(std::ostream& os, const Matrix& m)
{
    cout << "Operator<< overloading with Matrix is called." << endl;
    for(const vector<double>& row: m.m_elements)
    {
        for(const double& e: row)
        {
            os << e << " ";
        }
        os << endl;
    }
    os << endl;
    return os;
}
