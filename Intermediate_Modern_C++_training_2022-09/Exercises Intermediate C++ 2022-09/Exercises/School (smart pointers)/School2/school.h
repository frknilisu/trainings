#ifndef SCHOOL_H
#define SCHOOL_H

#include <memory>
#include <vector>
#include "student.h"

class School
{
public:
    void addStudent(std::unique_ptr<Student> s);
    std::unique_ptr<Student> removeStudent(const std::string &name);
    void printStudents() const;
private:
    std::vector<std::unique_ptr<Student>> m_students;
};

#endif // SCHOOL_H
