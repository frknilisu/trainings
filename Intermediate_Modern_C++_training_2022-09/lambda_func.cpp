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
using namespace std;

enum class Alert { red, yellow, none };
enum class TrafficLightState { red, orange, green };

struct Person {
    std::string firstName;
    std::string lastName;
    Person(std::string fn, std::string ln) : firstName(fn), lastName(ln) {};
};

std::vector<Person> v;

static void add_person(std::string fn, std::string ln) {
    v.push_back(Person(fn, ln));
}

int main()
{
    cout<<"Hello World" << endl;
    
    add_person("Maarten", "Westerveld");
    add_person("Antonios", "Apergis");
    add_person("Laurens", "Sneujink");
    add_person("Herman", "Derakhshanno");
    add_person("Mauro", "Brenna");
    add_person("Ralph", "Hornecker");
    add_person("Arbaab", "Hussain");
    add_person("Kasper", "Haak");
    add_person("Joao", "Duarte");
    add_person("Abdullah", "Ilisu");
    add_person("Boris", "Blokland");
    add_person("Foke", "Ovink");
    add_person("Frank", "Steeneveld");
    add_person("Aleksandar", "Todorovic");
    add_person("Keerthana", "GSR");
    add_person("Roeland", "Tetteroo");
    add_person("Prosper", "Munatsi");
    add_person("Luca", "Macchiusi");
    add_person("Koos", "Munneke");
    add_person("Krystyna", "Oliinyk");
    add_person("Jacko", "Dirks");
    add_person("Corentin", "Massol");
    add_person("Erhan", "Meral");
    add_person("Erik", "Vlasblom");
    add_person("Martijn", "Kerklaan"); 
    add_person("Ruud", "Bos");
    add_person("Sjoerd", "Bruijn");
    
    std::sort(v.begin(), v.end(), [](const Person& a, const Person& b) {
       return a.lastName < b.lastName.c_str();
    });
    
    for(auto p: v) {
        cout << p.firstName << " " << p.lastName << endl;
    }
    
    std::string my_lastname = "Ilisu";
    auto it = std::find_if(v.begin(), v.end(), [my_lastname](const Person& p){ return p.lastName == my_lastname; });
    if(it != v.end()) {
        std::cout << "My person is " << it->firstName << endl;
    }
    

    return 0;
}
