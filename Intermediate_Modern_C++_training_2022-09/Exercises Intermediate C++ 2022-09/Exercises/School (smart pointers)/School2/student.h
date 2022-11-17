#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
public:
    explicit Student(const std::string &name) : m_name(name) {}
    std::string name() const { return m_name; }
private:
    std::string m_name;
};

#endif // STUDENT_H
