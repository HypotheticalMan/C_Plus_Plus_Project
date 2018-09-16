#include "securityStudent.h"
#include "student.h"
#include "degree.h"

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* averageDaysInCourse) {
	Student::setDegree(Degree::SECURITY);
	Student::setAverageDaysInCourse(averageDaysInCourse);
	Student::setFirstName(firstName);
	Student::setLastName(lastName);
	Student::setEmailAddress(emailAddress);
	Student::setAge(age);
	Student::setStudentID(studentID);
}

SecurityStudent::~SecurityStudent() {}

Degree SecurityStudent::getDegreeProgram() {
	return Degree::SECURITY;
}