#include "student.h"
#include "degree.h"
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

class NetworkStudent : public Student {
private:

public:
	NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~NetworkStudent();
	Degree getDegreeProgram();
};

#endif