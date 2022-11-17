#include "course.h"
#include "school.h"
#include "student.h"

int main()
{
    School school;

    Student *s1 = school.addStudent("Koos");
    Student *s2 = school.addStudent("Piet");
    Student *s3 = school.addStudent("Fatima");

    Course *c1 = school.addCourse("Modern C++");
    Course *c2 = school.addCourse("OO Design");
    Course *c3 = school.addCourse("Scrum");

    c1->addStudent(s1);
    c1->addStudent(s2);

    c2->addStudent(s2);
    c2->addStudent(s3);

    c3->addStudent(s3);
    c3->addStudent(s1);

    school.printStudentsForCourse("Modern C++");
    school.printStudentsForCourse("OO Design");
    school.printStudentsForCourse("Scrum");

    return 0;
}

