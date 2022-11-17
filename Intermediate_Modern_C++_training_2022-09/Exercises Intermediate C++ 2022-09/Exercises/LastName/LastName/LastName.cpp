#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person
{
    string firstName;
    string lastName;
};

int main(int argc, char* argv[])
{
    vector<Person> people = {
        { "Jan", "Pelleboer"  },
        { "Piet", "Paulusma"  },
        { "Helga", "Van Leur" }
    };

    sort(people.begin(), people.end(), [](const Person& l, const Person& r)
        { return l.lastName < r.lastName; });

    for (const auto& p : people)
    {
        cout << p.firstName << " " << p.lastName << endl;
    }

    auto helga = std::find_if(people.begin(), people.end(),
        [](const Person& p) { return p.lastName == "Van Leur"; });

    if (helga != people.end())
    {
        cout << helga->firstName << endl;
    }

    return 0;
}
