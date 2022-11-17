#ifndef SCHOOL_H
#define SCHOOL_H

#include <vector>
#include <map>

#include "student.h"

enum class Courses { Modern_CPP, OO_Design, Scrum };

class School
{
public:
    School();
    School(const School&);
    ~School();
    Student* createStudent(const std::string& name);
    void addStudentToCourse(Student*, Courses);
    void printStudentsInCourse(Courses) const;
    void printAllStudents() const;
    std::vector<const Student*> getStudents() const;
private:
    std::vector<const Student*> _students;
    std::map<Courses, std::vector<const Student*> > _courseMap;
};

#endif // SCHOOL_H
