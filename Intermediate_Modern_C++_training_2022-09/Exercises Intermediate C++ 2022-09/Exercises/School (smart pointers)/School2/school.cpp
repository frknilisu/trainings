#include "school.h"
#include <iostream>

void School::addStudent(std::unique_ptr<Student> s)
{
    m_students.push_back(std::move(s));
}

void School::printStudents() const
{
    for (size_t pos = 0; pos < m_students.size(); pos++)
    {
        std::cout << m_students[pos]->name() << std::endl;
    }
}

std::unique_ptr<Student> School::removeStudent(const std::string &name)
{
    std::unique_ptr<Student> result;

    for (size_t pos = 0; pos < m_students.size(); pos++)
    {
        if (m_students[pos]->name() == name)
        {
            result = std::move(m_students[pos]);
            m_students.erase(m_students.begin() + static_cast<size_t>(pos));
            break;
        }
    }

    return result;
}
