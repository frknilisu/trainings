
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <fstream>
using namespace std;


int main()
{
    unordered_map<string, int> freq_table;
    std::ifstream file("test.txt");
    string word;
    while(file >> word)
        freq_table[word]++;

    std::vector<std::pair<string, int>> elems(freq_table.begin(), freq_table.end());
    sort(elems.begin(), elems.end(), [](auto a, auto b){ return a.second > b.second; });

    for(const auto& [word, count]: elems)
        cout << word << "\t" << count << endl;

    return 0;
}