#ifndef FACTORY_H
#define FACTORY_H

#include <string>
#include <vector>

#include "shape.h"

using namespace std;

class Factory
{
public:
    Factory();
    ~Factory();
    static Shape* createShape(const string input);
    static void printOptions();
private:
    static vector<string> _opts;
};

#endif // FACTORY_H
