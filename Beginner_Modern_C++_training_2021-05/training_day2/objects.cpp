#include <iostream>
#include "student.h"

int main(int argc, char *argv[])
{
    Student s1("abdullah furkan");
    std::cout << s1.getName() << std::endl;
    std::cout << "Average Grade: " << s1.averageGrade() << std::endl;
    s1.addGrade(78.2);
    std::cout << "Average Grade: " << s1.averageGrade() << std::endl;
    s1.addGrade(61.47);
    std::cout << "Average Grade: " << s1.averageGrade() << std::endl;
    return 0;
}
