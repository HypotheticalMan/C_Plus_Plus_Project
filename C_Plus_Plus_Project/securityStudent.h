#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#include "student.h"
#include "degree.h"

class SecurityStudent : public Student
{
private:

public:
	SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~SecurityStudent();
	Degree getDegreeProgram();
};
#endif