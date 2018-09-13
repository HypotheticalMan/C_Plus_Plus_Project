#include "student.h"
#include "degree.h"
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

class SoftwareStudent : public Student
{
private:
    
public:
    SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
    ~SoftwareStudent();
	Degree getDegreeProgram();
};
#endif