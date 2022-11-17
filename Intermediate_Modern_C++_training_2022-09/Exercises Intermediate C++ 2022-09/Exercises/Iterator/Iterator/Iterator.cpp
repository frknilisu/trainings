// Iterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std::literals;

int main()
{
    std::vector names = { "Arie"s, "Bas"s, "Charles"s, "Daniel"s };

    for (auto it = names.rbegin(); it != names.rend(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::set names_set(names.begin(), names.end());

    for (const auto& name : names_set)
    {
        std::cout << name << std::endl;
    }
}

