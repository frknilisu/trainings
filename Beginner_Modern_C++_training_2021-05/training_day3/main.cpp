#include <iostream>
#include "student.h"
#include "school.h"

int main()
{
    /*
    Student s1("Abdullah Furkan");
    std::cout << s1.getName() << std::endl;
    std::cout << "Average Grade: " << s1.averageGrade() << std::endl;
    s1.addGrade(78.2);
    std::cout << "Average Grade: " << s1.averageGrade() << std::endl;
    s1.addGrade(61.47);
    std::cout << "Average Grade: " << s1.averageGrade() << std::endl;

    std::cout << "Number of Students: " << Student::getNumberOfStudents() << std::endl;

    Student s2("Salih");
    std::cout << s2.getName() << std::endl;
    s2.addGrade(56.9);
    s2.addGrade(49.3);
    std::cout << "Average Grade: " << s2.averageGrade() << std::endl;

    std::cout << "Number of Students: " << Student::getNumberOfStudents() << std::endl;

    std::cout << "Comparison: " << Student::compare(s1, s2) << std::endl;
    */
    School school;
    Student* s1 = school.createStudent("Abdullah Furkan");
    school.addStudentToCourse(s1, Courses::Modern_CPP);

    Student* s2 = new Student("Salih");
    school.addStudentToCourse(s2, Courses::Modern_CPP);

    school.printStudentsInCourse(Courses::Modern_CPP);

    delete s2;

    return 0;
}
