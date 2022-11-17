/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

std::map<std::string, int> mymap;
double v3[] = {1., 2., 3.};

int main()
{
    auto& [a, b, c] = v3;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    for(auto d: v3)
        cout << d << " ";
    cout << endl;
    a = 10.; b = 100.; c = 1000.;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    for(auto d: v3)
        cout << d << " ";
    cout << endl;
    auto [x, y, z] = v3;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
    x = 20.; y = 200.; z = 2000.;
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
    for(auto d: v3)
        cout << d << " ";
    cout << endl;
    mymap.insert({"selam", 13});
    for(const auto& [key, value]: mymap) {
        cout << key << " " << value << endl;
    }

    return 0;
}
