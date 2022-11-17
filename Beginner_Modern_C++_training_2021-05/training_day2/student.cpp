#include <numeric>

#include "student.h"

Student::Student(std::string name)
    : _name(name)
{

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

    /*
    double sum = 0.0;
    for(const double& g: this->_grades) {
        sum += g;
    }
    double avg = sum / this->_grades.size();
    */
    double avg = accumulate(this->_grades.begin(), this->_grades.end(), 0.0) / this->_grades.size();
    return avg;
}
