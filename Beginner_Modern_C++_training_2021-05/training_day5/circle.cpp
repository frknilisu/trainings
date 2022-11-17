#include "circle.h"

#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle(int radius)
    : Shape(), m_radius(radius)
{
    cout << "Circle object is constructed." << endl;
}

Circle::~Circle()
{
    cout << "Circle object is destructed." << endl;
}

double Circle::area() const
{
    return M_PI*pow(m_radius, 2);
}
