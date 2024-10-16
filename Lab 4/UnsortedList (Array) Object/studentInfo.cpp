#include <bits/stdc++.h>
#include "studentInfo.h"
#include <string>
using namespace std;

studentInfo::studentInfo()
{
    ID = 0;
    Name = "";
    CGPA = 0;
}

studentInfo::studentInfo(int newID, string newName, double newCGPA)
{
    ID = newID;
    Name = newName;
    CGPA = newCGPA;
}

int studentInfo::getID()
{
    return ID;
}

string studentInfo::getName()
{
    return Name;
}

double studentInfo::getCGPA()
{
    return CGPA;
}

void studentInfo::Print()
{
    cout << "ID: " << ID << ", "
    << "Name: " << Name << ", "
    << "CGPA: " << CGPA << endl;
}

istream& operator>>(istream& in, studentInfo& obj)
{
    return in >> obj.ID >> obj.Name >> obj.CGPA;
}
