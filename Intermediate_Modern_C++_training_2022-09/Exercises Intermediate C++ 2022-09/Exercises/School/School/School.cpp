#include "school.h"
#include "course.h"
#include "student.h"

#include <iostream>
#include <map>

School::~School()
{
    for (Student *s : m_students)
    {
        delete s;
    }

    for (Course *c : m_courses)
    {
        delete c;
    }
}

Student* School::addStudent(const std::string &name)
{
    Student *s = new Student(name);
    m_students.push_back(s);
    return s;
}

Course* School::addCourse(const std::string &name)
{
    Course *c = new Course(name);
    m_courses.push_back(c);
    return c;
}

void School::printStudentsForCourse(const std::string &course) const
{
    auto it = std::find_if(m_courses.begin(), m_courses.end(), [course](const Course* c) { return c->name() == course; });
    if (it != m_courses.end())
    {
        std::cout << "==== Students for " << course << " course:" << std::endl;
        (*it)->printStudents();
    }
}
