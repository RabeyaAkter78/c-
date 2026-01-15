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
    Student(string name, int age, int rollNo) : Person(name, age)
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

class Shape
{
public:
    string color;
    Shape()
    {
        cout << "shape constructor" << endl;
    }
    void getColor()
    {
        cout << "Color:" << color << endl;
    }
};

class Circle : public Shape
{
public:
    float redius;
    Circle(string color, float radius) : Shape()
    {
        this->color = color;
        this->redius = radius;
    }
    void getArea()
    {
        cout << "Area:" << 3.14 * redius * redius << endl;
    }
};

int main()
{
    // Student s1;
    // s1.name = "Rabeya";
    // s1.age = 20;
    // s1.rollno = 1;
    // s1.getInfo();
    // cout
    //     << "hello" << endl;
    // Shape s1;
    // s1.color = "blue";
    // s1.getColor();

    Circle c1("red", 5);
    c1.redius = 5;
    c1.getArea();

    return 0;
}