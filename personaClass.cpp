#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    string name;
    int age;

    Person (string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
    public:
    int StudentID;

    Student(string name, int age,int studentID) : Person(name,age) {
        this->StudentID = studentID;
    }

    void getInfo(){
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student ID: " << StudentID << endl;
    }
};

int main(){
    Student s1("Shoruv",21,7);
    s1.getInfo();
}