#include <iostream>
#include <numeric>

#include "student.h"

int Student::_numberOfStudents = 0;

Student::Student(std::string name)
    : _name(name)
{
    std::cout << "Student " << this->_name << " is created." << std::endl;
    ++Student::_numberOfStudents;
}

Student::Student(const Student& s)
{
    this->_name = s.getName();
}

Student::~Student()
{
    std::cout << "Student " << this->_name << " is destroyed." << std::endl;
    --Student::_numberOfStudents;
}

std::string Student::getName() const
{
    return this->_name;
}

void Student::addGrade(double grade)
{
    this->_grades.push_back(grade);
}

double Student::averageGrade() const
{
    if(this->_grades.empty())
        return 0.0;

    double avg = accumulate(this->_grades.begin(), this->_grades.end(), 0.0) / this->_grades.size();
    return avg;
}

bool Student::compare(const Student& s1, const Student& s2)
{
    return s1.averageGrade() > s2.averageGrade();
}

int Student::getNumberOfStudents()
{
    return Student::_numberOfStudents;
}
