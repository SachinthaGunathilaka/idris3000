#include <iostream>
#include <sstream>
#include <iomanip>
#include "roster.h"

Roster::Roster() {
    this->studentIndex = 0;
}

Roster::~Roster() {
    for (int i = 0; i < this->studentIndex; i++) {
        delete this->classRosterArray[i];
    }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
                 int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int *daysInCourse = new int[3]{daysInCourse1, daysInCourse2, daysInCourse3};
    auto *new_std = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
    this->classRosterArray[studentIndex++] = new_std;

}

void Roster::remove(string studentID) {
    bool is_find = false;
    for (int i = 0; i < studentIndex; i++) {
        if (this->classRosterArray[i]->getStudentId() == studentID) {
            is_find = true;
            delete this->classRosterArray[i];
            for (int j = i; j < studentIndex - 1; j++) {
                this->classRosterArray[j] = this->classRosterArray[j + 1];
            }
            studentIndex--;
            cout << "Student with ID " << studentID << " removed successfully.\n" << endl;

            break;
        }
    }
    if (!is_find) {
        cout << "Error: Student ID " << studentID << " does not found.\n" << endl;
    }
}

void Roster::printAll() {
    for (int i = 0; i < studentIndex; i++) {
        this->classRosterArray[i]->print();
    }

    cout << endl;
}

void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < studentIndex; i++) {
        if (this->classRosterArray[i]->getStudentId() == studentID) {
            double average_days =
                    (this->classRosterArray[i]->getDaysInCourse()[0] + this->classRosterArray[i]->getDaysInCourse()[1] +
                     this->classRosterArray[i]->getDaysInCourse()[2]) / 3.0;
            cout << "Average number days in course for student " << studentID << ": " << fixed << setprecision(2)
                 << average_days << endl;
        }
    }

}

void Roster::printInvalidEmails() {
    cout << "\nInvalid Emails" << endl;
    cout << "--------------" << endl;
    for (int i = 0; i < studentIndex; i++) {
        string email = this->classRosterArray[i]->getEmailAddress();

        bool is_invalid_email =
                email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos;
        if (is_invalid_email) {
            cout << email << endl;
        }
    }

    cout << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    cout << "Student information for a degree program ";
    if (degreeProgram == SECURITY)
        cout << "Security";

    else if (degreeProgram == NETWORK)
        cout << "Network";

    else
        cout << "Software";

    cout << "\n-------------------------------------------------" << endl;


    for (int i = 0; i <= studentIndex; i++) {
        if (this->classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            this->classRosterArray[i]->print();
        }
    }

    cout << endl;
}
