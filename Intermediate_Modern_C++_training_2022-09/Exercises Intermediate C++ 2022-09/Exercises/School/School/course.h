#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

class Student;

class Course
{
public:
    explicit Course(const std::string &name) : m_name(name) {}
    std::string name() const { return m_name; }
    void addStudent(Student *s);
    void printStudents() const;
private:
    std::string m_name;
    std::vector<Student*> m_students;
};

#endif // COURSE_H
