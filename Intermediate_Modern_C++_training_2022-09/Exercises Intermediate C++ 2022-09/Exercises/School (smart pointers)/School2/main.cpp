#include <memory>
#include "school.h"
#include "student.h"

int main()
{
    School school;

    // School school2 = school;

    auto s1 = std::make_unique<Student>("Koos");
    auto s2 = std::make_unique<Student>("Piet");
    auto s3 = std::make_unique<Student>("Fatima");

    school.addStudent(std::move(s1));
    school.addStudent(std::move(s2));
    school.addStudent(std::move(s3));

    school.printStudents();

    auto s4 = school.removeStudent("Piet");

    school.printStudents();

    return 0;
}

