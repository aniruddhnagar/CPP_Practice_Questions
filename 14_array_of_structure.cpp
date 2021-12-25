/*
    Write a program to store student records in a structure. 
    It should contain the following information:
        Student ID
        Name
        Year
        CGPA
*/

#include <bits/stdc++.h>
using namespace std;

struct student 
{
    string id;
    string name;
    string year;
    float cgpa;
};

int main()
{

    student team[]
    {
        {"1231", "Rudh", "2011", 8.1},
        {"1232", "Anju", "2012", 8.2},
        {"1233", "Umesh", "2013", 8.3},
        {"1234", "Nagar", "2014", 8.4}
    };

    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << "ID: " << team[i].id << ", Name: " << team[i].name << ", Year: " << team[i].year << ", CGPA: " << team[i].cgpa << endl;
    }

    return 0;
}