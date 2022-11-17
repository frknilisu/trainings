#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student
{
public:
    explicit Student(std::string name);
    Student(const Student& student);
    ~Student();
    std::string getName() const;
    void addGrade(double grade);
    double averageGrade() const;
    static bool compare(const Student&, const Student&);
    static int getNumberOfStudents();
private:
    std::string _name;
    std::vector<double> _grades;
    static int _numberOfStudents;
};

#endif // STUDENT_H
