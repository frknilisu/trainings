#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student
{
public:
    explicit Student(std::string name);
    std::string getName() const;
    void addGrade(double grade);
    double averageGrade() const;
private:
    std::string _name;
    std::vector<double> _grades;
};

#endif // STUDENT_H
