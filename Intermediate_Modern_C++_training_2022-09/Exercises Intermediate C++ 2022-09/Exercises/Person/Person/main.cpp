#include <iostream>
#include <memory>
#include <string>

struct Person
{
    std::string m_firstName;
    std::string m_lastName;

    Person(const std::string& firstName, const std::string& lastName) : m_firstName(firstName), m_lastName(lastName) {}

    Person(const Person& p) = delete;

    ~Person() { std::cout << m_firstName << " " << m_lastName << " is saying goodbye." << std::endl; }
};

auto create_person()
{
    return std::make_unique<Person>("Jan", "Jansen");
}

void test()
{
    std::shared_ptr<Person> p = create_person();

    throw std::exception();
}

int main()
{
    try
    {
        test();
    }
    catch (std::exception& e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }
    
    std::cout << "We are still in main() !" << std::endl;

    return 0;
}
