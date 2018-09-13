#include "securityStudent.h"
#include "student.h"
#include "degree.h"

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
	Student::setDegree(Degree::SECURITY);
}

SecurityStudent::~SecurityStudent() {}

Degree SecurityStudent::getDegreeProgram() {
	return Degree::SECURITY;
}