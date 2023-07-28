#include "student.h"

const string &Student::getStudentId() const {
    return studentID;
}

const string &Student::getFirstName() const {
    return firstName;
}

const string &Student::getLastName() const {
    return lastName;
}

const string &Student::getEmailAddress() const {
    return emailAddress;
}

int Student::getAge() const {
    return age;
}

const int *Student::getDaysInCourse() const {
    return daysInCourse;
}

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

void Student::setStudentId(const string &studentId) {
    studentID = studentId;
}

void Student::setFirstName(const string &firstName) {
    Student::firstName = firstName;
}

void Student::setLastName(const string &lastName) {
    Student::lastName = lastName;
}

void Student::setEmailAddress(const string &emailAddress) {
    Student::emailAddress = emailAddress;
}

void Student::setAge(int age) {
    Student::age = age;
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    Student::degreeProgram = degreeProgram;
}

Student::Student(const string &studentId, const string &firstName, const string &lastName, const string &emailAddress,
                 int age, int *daysInCourse, DegreeProgram degreeProgram) : studentID(studentId), firstName(firstName),
                                                                            lastName(lastName),
                                                                            emailAddress(emailAddress), age(age),
                                                                            daysInCourse(daysInCourse),
                                                                            degreeProgram(degreeProgram) {
}

void Student::print() {
    cout << studentID << " \t First Name: " << firstName << " \t Last Name: " << lastName << " \t Age: " << age
         << " \t daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}";

    cout << " Degree Program: ";
    if (degreeProgram == SECURITY)
        cout << "Security";

    else if (degreeProgram == NETWORK)
        cout << "Network";

    else
        cout << "Software";

    cout << "." << endl;
}
