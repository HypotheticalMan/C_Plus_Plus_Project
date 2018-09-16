#include "networkStudent.h"
#include "student.h"
#include "degree.h"

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* averageDaysInCourse) {
	Student::setDegree(Degree::NETWORK);
	Student::setAverageDaysInCourse(averageDaysInCourse);
	Student::setFirstName(firstName);
	Student::setLastName(lastName);
	Student::setEmailAddress(emailAddress);
	Student::setAge(age);
	Student::setStudentID(studentID);
}

NetworkStudent::~NetworkStudent() {}

Degree NetworkStudent::getDegreeProgram() {
	return Degree::NETWORK;
}