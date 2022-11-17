#include <iostream>
#include <set>
#include <vector>

int main()
{
    std::vector<int> v1 = { 1, 2, 3 };
    std::vector<int> v2 = { 2, 3, 4 };

    std::set<int> s;

    s.insert(v1.begin(), v1.end());
    s.insert(v2.begin(), v2.end());

    for (const auto &w : s)
    {
        std::cout << w << " ";
    }
    std::cout << std::endl;

    return 0;
}
