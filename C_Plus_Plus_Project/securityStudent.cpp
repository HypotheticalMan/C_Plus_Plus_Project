#include "securityStudent.h"
#include "student.h"
#include "degree.h"

class securityStudent : public Student {
private:

public:
	securityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~securityStudent();
	Degree getDegreeProgram();
};

securityStudent::securityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
	Student::setDegree(Degree::SECURITY);
}

securityStudent::~securityStudent() {}

Degree securityStudent::getDegreeProgram() {
	return Student::getDegree();
}