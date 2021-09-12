#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;


class StudentInfo
{

public:
    StudentInfo();
    StudentInfo(int, string , float);
    void SetId(int);
    void SetName(string);
    void SetCgpa(float);
    int GetId();
    string GetName();
    float GetCgpa();
    void Print();
    friend bool operator==(StudentInfo & s1, StudentInfo & s2);

private:
    int id;
    string Name;
    float Cgpa;


};
friend bool operator==(StudentInfo & s1, StudentInfo & s2);

#endif // STUDENTINFO_H_INCLUDED

