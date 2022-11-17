#include "course.h"
#include "student.h"
#include <iostream>

void Course::addStudent(Student *s)
{
    m_students.push_back(s);
}

void Course::printStudents() const
{
    for (size_t pos = 0; pos < m_students.size(); pos++)
    {
        std::cout << m_students[pos]->name() << std::endl;
    }
}
