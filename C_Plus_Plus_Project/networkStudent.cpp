#include "networkStudent.h"
#include "student.h"
#include "degree.h"

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
	Student::setDegree(Degree::NETWORK);
}

NetworkStudent::~NetworkStudent() {}

Degree NetworkStudent::getDegreeProgram() {
	return Degree::NETWORK;
}