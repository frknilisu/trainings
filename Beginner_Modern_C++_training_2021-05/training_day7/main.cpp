#include <iostream>

#include "mystack.h"
#include <vector>
#include <string>
#include <memory>

using namespace std;

class Student {
public:
    explicit Student(string name) : m_name(name) {
        cout << "Student " << m_name << " is created" << endl;
    }
    ~Student() {
        cout << "Student " << m_name << " is deleted" << endl;
    }
    string getName() const { return m_name; }
private:
    string m_name;
};

class School {
public:
    School() { cout << "School is created" << endl; }
    ~School() { cout << "School is deleted" << endl; }
    void addStudent(string name) {
        cout << "Student " << name << " is added to the school by name" << endl;
        m_students.push_back(std::unique_ptr<Student>(new Student(name)));
    }
    void addStudentPtr(std::unique_ptr<Student> student) {
        cout << "Student " << student->getName() << " is added to the school by ptr" << endl;
        m_students.push_back(std::move(student));
    }
    void removeStudent(string name) {
        cout << "Student " << name << " is removed from the school by name" << endl;
        for(vector<std::unique_ptr<Student>>::iterator it = m_students.begin(); it != m_students.end(); it++) {
            if((*it)->getName() == name) {
                m_students.erase(it);
            }
        }
    }
private:
    vector<std::unique_ptr<Student>> m_students;
};

int main()
{

    MyStack<int> s_int;
    MyStack<vector<int>*> s_vectorp;
    cout << "isEmpty: " << s_int.isEmpty() << endl;
    try {
        vector<int>* v1 = new vector<int> {1, 2, 8, 6};
        vector<int>* v2 = new vector<int> {1, -2};
        s_vectorp.push(v1);
        s_vectorp.push(v2);
        auto vp = s_vectorp.pop();
        for(const int& i: *vp) {
            cout << i << " ";
        }
        cout << endl;
        s_int.push(3);
        s_int.push(8);
        s_int.push(5);
        cout << s_int.pop() << endl;
        cout << "isEmpty: " << s_int.isEmpty() << endl;
        while(!s_int.isEmpty()) {
            cout << s_int.pop() << endl;
        }
        cout << "isEmpty: " << s_int.isEmpty() << endl;
        cout << s_int.pop() << endl;
    } catch (EmptyStackException& e) {
        cout << e.what() << endl;
    } catch (std::exception& e) {
        cout << e.what() << endl;
    }


    School school;

    school.addStudent("Furkan");
    school.addStudent("Ali");

    std::unique_ptr<Student> st1(new Student("Abdullah"));
    school.addStudentPtr(std::move(st1));

    school.removeStudent("Ali");

    return 0;
}
