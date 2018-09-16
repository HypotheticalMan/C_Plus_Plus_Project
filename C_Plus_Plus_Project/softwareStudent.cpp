#include "softwareStudent.h"
#include "student.h"
#include "degree.h"


SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int* averageDaysInCourse) {
	Student::setDegree(Degree::SOFTWARE);
	Student::setAverageDaysInCourse(averageDaysInCourse);
	Student::setFirstName(firstName);
	Student::setLastName(lastName);
	Student::setEmailAddress(emailAddress);
	Student::setAge(age);
	Student::setStudentID(studentID);
}

SoftwareStudent::~SoftwareStudent() {}

Degree SoftwareStudent::getDegreeProgram() {
	return Degree::SOFTWARE;
}