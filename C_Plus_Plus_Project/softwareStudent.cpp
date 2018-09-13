#include "softwareStudent.h"
#include "student.h"
#include "degree.h"


SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
	Student::setDegree(Degree::SOFTWARE);
}

SoftwareStudent::~SoftwareStudent() {}

Degree SoftwareStudent::getDegreeProgram() {
	return Degree::SOFTWARE;
}