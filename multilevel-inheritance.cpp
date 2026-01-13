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
    int rollno;
};

class gradStudent : public Student
{
public:
    string researchArea;
};

int main()
{
    gradStudent s1;
    s1.name = "Rabeya";
    s1.researchArea = "C++";

    cout << s1.name << endl;
    cout << s1.researchArea << endl;
    return 0;
}