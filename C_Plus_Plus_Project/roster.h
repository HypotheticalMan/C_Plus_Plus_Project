#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"
#include "degree.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

class Roster
{
public:
	Roster();
	~Roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(Degree degree);
	static const int NUMBER_OF_STUDENTS = 5;
	const string studentData[NUMBER_OF_STUDENTS] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Joshua,Fairbourn,jfairbo@my.wgu.edu,26,30,30,30,SOFTWARE"
	};
	Student* getClassRosterArray();

private:
	
	Student *classRosterArray;
	int index = 0;
};

#endif