#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Properties // attributes
    string name;
    string dept;
    string subject;

    // methods // member function: function inside a class

    void chnageDept(string newDept)
    {
        dept = newDept;
    }
    // setter function: private valu set from outside
    void setSalary(double s)
    {
        salary = s;
    }
    // getter function: private value get from outside
    double getSalary()
    {
        return salary;
    }
};
class Student
{
    string name;
    int roll;
    int age;
};

class Acount
{
private:
    double balance;
    string password;

public:
    string accointId;
    string userNme;
};

int main()
{
    Teacher t1;
    t1.name = "Rabeya";
    t1.subject = "C++";
    t1.dept = "CSE";

    cout << t1.name << endl;

    return 0;
}