
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
    public:
        explicit Student(const string& name) : m_name(name) {};
        string name() const { return m_name; };
    private:
        string m_name;
};

class School {
    public:
        void addStudent(std::unique_ptr<Student> student) {
            m_students.push_back(std::move(student));
        };

        std::unique_ptr<Student> removeStudent(const string& name) {
            std::unique_ptr<Student> temp;
            auto it = std::find_if(m_students.begin(), m_students.end(), [name](const std::unique_ptr<Student>& st){ return st->name() == name; });
            if(it != m_students.end()) {
                temp = std::move(*it);
                m_students.erase(it);
            }
            return temp;
        }

        void printStudents() const {
            for(const auto& st: m_students)
                cout << st->name() << endl;
        }
    private:
        vector<std::unique_ptr<Student>> m_students;
};

int main()
{
    School school;
    
    auto st1 = std::make_unique<Student>("Jack");
    auto st2 = std::make_unique<Student>("Piet");
    auto st3 = std::make_unique<Student>("Fatima");

    school.addStudent(std::move(st1));
    school.addStudent(std::move(st2));
    school.addStudent(std::move(st3));

    school.printStudents();

    auto st4 = school.removeStudent("Piet");

    school.printStudents();
    
    return 0;
}