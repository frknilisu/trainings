#include <iostream>
#include <fstream>
#include <map>
#include <string>

int main()
{
    std::ifstream file("C:\\Users\\jobonnet\\Documents\\exercises C++ foundation course\\Frequency\\test.txt");
    std::string word;

    std::map<std::string, size_t> words;

    while (file >> word)
    {
        words[word]++;
    }

    for (const auto& [word, count] : words)
    {
        std::cout << word << "\t" << count << std::endl;
    }

    return 0;
}
