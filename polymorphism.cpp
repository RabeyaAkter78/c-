#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    Student()
    {
        cout << "non parameterized constructor" << endl;
    }

    Student(string name)
    {
        cout << "parameterized constructor" << endl;
    }
};

int main()
{
    Student s1;
    return 0;
}