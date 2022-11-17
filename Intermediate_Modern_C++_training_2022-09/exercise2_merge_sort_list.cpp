
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
    cout<<"Hello World" << endl;
    
    std::vector<int> v1 = {
        30,
        88,
        90,
        16,
        14,
        63,
        77,
        8,
        28,
        33,
        8,
        48,
        100,
        79,
        24,
        78,
        58,
        26,
        46, 
        21 
    };

    std::vector<int> v2 = {
        31,
        7,
        87,
        39,
        20,
        84,
        19,
        29,
        43,
        78,
        77,
        97,
        88,
        48,
        85,
        31,
        91,
        5,
        86,
        86,
        86,
        81,
        95,
        1,
        87
    };

    set<int> s;
    s.insert(v1.begin(), v1.end());
    s.insert(v2.begin(), v2.end());
    
    for(const auto& w: s)
        cout << w << endl;

}