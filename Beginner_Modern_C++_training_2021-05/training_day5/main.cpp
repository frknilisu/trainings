#include <iostream>
#include <string>
#include <vector>
#include <array>

#include "shape.h"
#include "circle.h"

using namespace std;

class Square : public Shape
{
public:
    explicit Square(int size) : Shape(), m_size(size) {
        cout << "Square object is constructed." << endl;
    }
    ~Square() {
        cout << "Square object is destructed." << endl;
    }
    double area() const {
        return m_size*m_size;
    }
private:
    int m_size;
};

class Factory
{
public:
    Factory() {
        cout << "Factory object is constructed." << endl;
    }
    ~Factory() {
        cout << "Factory object is destructed." << endl;
    }
    static Shape* createShape(const string input) {
        Shape* s = nullptr;
        if (input == "Square") {
            s = new Square(3);
        } else if (input == "Circle") {
            s = new Circle(3);
        } else {
            cout << "Undefined Shape" << endl;
        }
        return s;
    }
};

int main()
{
    /*
    cout << "What do you want to create?" << endl;
    vector<Shape*> shapes;
    while(true)
    {
        string input;
        cin >> input;
        Shape* s = Factory::createShape(input);
        cout << "Area: " << s->area() << endl;
        shapes.push_back(s);
    }

    for(const Shape* const s: shapes)
    {
        delete s;
    }
    */



    return 0;
}
