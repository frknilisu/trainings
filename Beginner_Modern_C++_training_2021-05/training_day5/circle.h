#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
    explicit Circle(int radius);
    ~Circle();
    double area() const;
private:
    int m_radius;
};

#endif // CIRCLE_H
