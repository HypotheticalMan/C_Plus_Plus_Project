#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#include "student.h"
#include "degree.h"

class securityStudent : public Student
{
private:

public:
	securityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~securityStudent();
	Degree getDegreeProgram();
};
#endif