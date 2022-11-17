#include <iostream>
#include <vector>
#include <array>
#include <algorithm> // find
#include "matrix.h"

using namespace std;

template<typename T1, typename T2>
bool cmp(const T1& t, const T2& e)
{
    return find(t.begin(), t.end(), e) != t.end();
}

int main()
{
    vector<vector<double>> v1 = {{9, 1}, {13, 11}};
    Matrix m1(2, 2);
    m1 = v1;
    cout << m1;
    vector<vector<double>> v2 = {{3, 6}, {9, 0}};
    Matrix m2(2, 2);
    m2 = v2;
    cout << m2;
    Matrix m3 = m1 + m2;
    cout << m3;

    vector<vector<double>> v4 = {{1.5, 1}, {2, -1}};
    Matrix m4(2, 2);
    m4 = v4;
    Matrix m5 = 3 * m4;
    cout << m5;
    Matrix m6 = m5;
    cout << m6;

    Matrix m7(v4);
    cout << m7;

    Matrix m8({{1, 2, 3}, {4, 5, 6}});
    cout << m8 << endl;

    vector<double> v = {3.5, 1.2, 5.0};
    array<int, 3> a = {3, 5, 8};
    cout << cmp(v, 1.2) << endl;
    cout << cmp(v, 3.0) << endl;
    cout << cmp(a, 5) << endl;
    cout << cmp(a, 2) << endl;
    return 0;
}
