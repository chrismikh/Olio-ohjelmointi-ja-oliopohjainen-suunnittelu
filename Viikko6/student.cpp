#include "student.h"

Student::Student(string n, int a)
{
    Name = n;
    Age = a;
}

void Student::setAge(int newAge)
{
    Age = newAge;
}

void Student::setName(string newName)
{
    Name = newName;
}

string Student::getName() const
{
    return Name;
}

int Student::getAge() const
{
    return Age;
}

void Student::printStudentInfo() const
{
    cout << "Name: " << Name << " , " << "Age: " << Age << endl;
}
