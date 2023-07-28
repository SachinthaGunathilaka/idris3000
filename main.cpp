#include <iostream>
#include "roster.h"

using namespace std;

int main() {
    cout << "+---------------------------------------------------------------+" << endl;
    cout << "| Course Title: SCRIPTING AND PROGRAMMING - APPLICATIONS — C867 |" << endl;
    cout << "| Programming Language: C++                                     |" << endl;
    cout << "| WGU student ID: 011294017                                     |" << endl;
    cout << "| Name: Idris Mohamed                                           |" << endl;
    cout << "+---------------------------------------------------------------+\n" << endl;




    Roster classRoster;
    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("011294017", "Idris", "Mohamed", "imoha65@wgu.edu", 23, 4, 3, 6, SOFTWARE);

    classRoster.printAll();
    classRoster.printInvalidEmails();

    for (Student *student: classRoster.classRosterArray) {
        classRoster.printAverageDaysInCourse(student->getStudentId());
    }
    cout << endl;


    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}
