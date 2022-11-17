
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
    std::vector<string> names = {
        "Maarten",
        "Antonios",
        "Laurens",
        "Herman", 
        "Mauro",
        "Ralph",
        "Arbaab",
        "Kasper", 
        "Joao",
        "Abdullah",
        "Boris",
        "Foke",
        "Frank",
        "Aleksandar",
        "Keerthana",
        "Roeland",
        "Prosper",
        "Luca",
        "Koos",
        "Krystyna",
        "Jacko",
        "Corentin",
        "Erhan",
        "Erik",
        "Martijn",
        "Ruud",
        "Sjoerd"
    };

    for(auto it = names.rbegin(); it != names.rend(); ++it) {
        cout << *it << endl;
    }

    cout << "--------------------------------" << endl;

    set<string> names_set(names.begin(), names.end());

    for(const auto& name: names_set) {
        cout << name << endl;
    }

}