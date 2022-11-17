#include <iostream>

#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include <cerrno>
#include <exception> // <-- requires this

using namespace std;

struct Person {
    Person(string fn, string ln) {
        firstName = fn;
        lastName = ln;
    }
    string firstName;
    string lastName;
};

int main()
{
    vector<Person> v = {
        Person("Furkan", "Ilisu"), Person("Baris", "Gokce"), Person("Emre", "Bulut")
    };
    sort(
        v.begin(),
        v.end(),
        [](const Person& p1, const Person& p2) {
            return p1.lastName < p2.lastName;
        }
    );
    for(const Person& p: v) {
        cout << p.firstName << " " << p.lastName << endl;
    }

    map<string, int> wordCounts;
    ifstream file;
    file.open("../day8/test.txt", ifstream::in);
    string word;
    if (file.is_open()) {
        cout << "file opened" << endl;
        while (file.good()) {
            file >> word;
            wordCounts[word] = wordCounts.find(word) == wordCounts.end() ? 1 : wordCounts.at(word) + 1;
        }
        file.close();
    } else {
        cerr << "Error: " << errno << endl;
    }
    for(const auto& p: wordCounts) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}
