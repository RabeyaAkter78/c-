#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << " parent constructor \n"
             << endl;
    };
};

class Student : public Person
{
public:
    int rollno;
    Student(string name, int age, int rollNo) : Person( name,  age)
    {
        cout << "child constructor \n"
             << endl;
    }
    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Roll No:" << rollno << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Rabeya";
    s1.age = 20;
    s1.rollno = 1;
    s1.getInfo();
    cout
        << "hello" << endl;
    return 0;
}