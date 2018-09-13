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

private:
	int *classRosterArray[NUMBER_OF_STUDENTS];
	const string studentData[NUMBER_OF_STUDENTS];
};

#endif