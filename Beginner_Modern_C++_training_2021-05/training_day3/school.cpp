#include <iostream>

#include "school.h"

std::map<std::string, Courses> mapStringToCourses =
{
    { "Modern C++", Courses::Modern_CPP },
    { "OO Design", Courses::OO_Design },
    { "Scrum", Courses::Scrum },
};

std::map<Courses, std::string> mapCoursesToString =
{
    { Courses::Modern_CPP, "Modern C++" },
    { Courses::OO_Design, "OO Design" },
    { Courses::Scrum, "Scrum" },
};

School::School()
{
    std::cout << "School object is created." << std::endl;
}

School::School(const School& sc)
{
    for(const Student* s: sc.getStudents())
    {
        this->_students.push_back(s);
    }
    std::cout << "School object is copied." << std::endl;
}

School::~School()
{
    for(const Student* const s: this->_students)
    {
        delete s;
    }
    std::cout << "School object is destructed." << std::endl;
}

Student* School::createStudent(const std::string& name)
{
    Student* s = new Student(name);
    this->_students.push_back(s);
    return s;
}

void School::addStudentToCourse(Student* s, Courses c)
{
    std::cout << "Student " << s->getName() << " added to the course" << std::endl;
    this->_courseMap[c].push_back(s);
}

void School::printStudentsInCourse(Courses c) const
{
    std::cout << "List of the names of the Students in this course: " << std::endl;
    for(const Student* s: this->_courseMap.at(c))
    {
        std::cout << s->getName() << std::endl;
    }
}

void School::printAllStudents() const
{
    std::cout << "List of the names of all Students in the School: " << std::endl;
    for(const Student* s: this->_students)
    {
        std::cout << s->getName() << std::endl;
    }
}

std::vector<const Student*> School::getStudents() const
{
    return this->_students;
}
