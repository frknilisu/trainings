#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
#include <vector>

class Course;
class Student;

class School
{
public:
    School() = default;
    School(const School&) = delete;
    School& operator = (const School&) = delete;
    ~School();
    Student* addStudent(const std::string &name);
    Course* addCourse(const std::string &name);
    void printStudentsForCourse(const std::string &course) const;
private:
    std::vector<Student*> m_students;
    std::vector<Course*> m_courses;
};

#endif // SCHOOL_H
