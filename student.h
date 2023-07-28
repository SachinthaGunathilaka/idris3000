#include "degree.h"
#include<iostream>
#include<string>

using namespace std;
class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int *daysInCourse;
    DegreeProgram degreeProgram;

public:

    Student(const string &studentId, const string &firstName, const string &lastName, const string &emailAddress,
            int age, int *daysInCourse, DegreeProgram degreeProgram);

    const string &getStudentId() const;

    const string &getFirstName() const;

    const string &getLastName() const;

    const string &getEmailAddress() const;

    int getAge() const;

    const int *getDaysInCourse() const;

    DegreeProgram getDegreeProgram() const;

    void setStudentId(const string &studentId);

    void setFirstName(const string &firstName);

    void setLastName(const string &lastName);

    void setEmailAddress(const string &emailAddress);

    void setAge(int age);

    void setDegreeProgram(DegreeProgram degreeProgram);

    void print();
};