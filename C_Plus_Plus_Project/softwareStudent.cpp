#include "softwareStudent.h"
#include "student.h"
#include "degree.h"

class SoftwareStudent : public Student {
private:

public:
	SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~SoftwareStudent();
	Degree getDegreeProgram();
};

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
	Student::setDegree(Degree::SOFTWARE);
}

SoftwareStudent::~SoftwareStudent() {}

Degree SoftwareStudent::getDegreeProgram() {
	return Student::getDegree();
}