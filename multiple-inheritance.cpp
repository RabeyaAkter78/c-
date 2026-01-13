#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int roll;
};

class Teacher
{
public:
    double salary;
};

class TA : public Student, public Teacher
{
public:
};

int
main()
{
    TA t1;
    t1.name = "Rabeya";
    t1.roll = 1;
    t1.salary = 25000;
    cout << t1.name << endl;
    cout << t1.roll << endl;
    cout << t1.salary << endl;
    return 0;
}