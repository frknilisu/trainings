
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <fstream>
using namespace std;

class Student {
    public:
        explicit Student(const string& name) : m_name(name) {};
        string name() const { return m_name; };
    private:
        string m_name;
};

class Course {
    public:
        explicit Course(const string& name) : m_name(name) {};
        void addStudent(Student* student) { m_students.push_back(student); };
        void printStudents() const {
            for(const auto& s: this->m_students) {
                cout << s->name() << endl;
            }
        };
    private:
        string m_name;
        vector<Student*> m_students;
};

class School {
    public:
        ~School() {
            for(const auto& s: m_students) { delete s; }
            for(const auto& [n, c]: m_courses) { delete c; }
        };

        Student* addStudent(const string& name) {
            Student* s = new Student(name);
            m_students.push_back(s);
            return s;
        };

        Course* addCourse(const string& name) {
            Course* c = new Course(name);
            m_courses.insert({name, c});
            return c;
        };

        void printStudentsForCourse(const string& course) const {
            Course* c = this->m_courses.at(course);
            c->printStudents();
        }
    private:
        vector<Student*> m_students;
        map<string, Course*> m_courses;
};


int main()
{
    School* school = new School();

    Student* s1 = school->addStudent("s1");
    Student* s2 = school->addStudent("s2");
    Student* s3 = school->addStudent("s3");

    Course* cpp = school->addCourse("C++");
    Course* oop = school->addCourse("OOP");
    Course* scrum = school->addCourse("Scrum");

    cpp->addStudent(s1);
    cpp->addStudent(s3);

    oop->addStudent(s1);
    oop->addStudent(s2);
    oop->addStudent(s3);

    scrum->addStudent(s2);
    scrum->addStudent(s3);

    school->printStudentsForCourse("C++");
    school->printStudentsForCourse("OOP");
    school->printStudentsForCourse("Scrum");

    return 0;
}