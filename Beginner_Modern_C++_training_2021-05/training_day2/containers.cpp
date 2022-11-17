#include <iostream>
#include <vector>
#include <set>

int main(int argc, char *argv[])
{
    std::cout << "========    Exercise 1    ========"<<std::endl;
    std::vector<std::string> names = {"Emre", "Furkan", "Baris", "Abdullah", "Dogan", "Emre", "Burak"};
    for(std::vector<std::string>::iterator it = names.end(); it != names.begin();) {
        --it;
        std::cout << *it << std::endl;
    }
    std::cout << "-------" <<std::endl;
    std::set<std::string> s(names.begin(), names.end());
    for(std::set<std::string>::iterator it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << "========    Exercise 2    ========"<<std::endl;
    std::vector<int> v1 = {5, 7, 8, 4, 6, 49, 36};
    std::vector<int> v2 = {3, -1, 9, 0, 13, 25, 41, 4, 8, 11};
    std::vector<int> v3;
    v3.reserve(v1.size() + v2.size());
    v3.insert(v3.end(), v1.begin(), v1.end());
    v3.insert(v3.end(), v2.begin(), v2.end());
    std::set<int> merged(v3.begin(), v3.end());
    for(const int& i: merged) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
