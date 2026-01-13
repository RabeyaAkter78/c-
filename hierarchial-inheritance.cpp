#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int roll;
};

class Teacher : public Person
{
public:
    int salary;
};

int main()
{
    Student s1;
    s1.name = "Rabeya";
    s1.age = 20;

    Teacher t1;
    t1.name = "Ali";
    t1.age = 30;
    t1.salary = 25000;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<t1.name<<endl;
    cout<<t1.age<<endl;
    cout<<t1.salary<<endl;
    return 0;
}
