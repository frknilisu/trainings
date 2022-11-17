#include "shape.h"

#include <iostream>

using namespace std;

Shape::Shape()
{
    cout << "Shape object is constructed." << endl;
}

Shape::~Shape()
{
    cout << "Shape object is destructed." << endl;
}
