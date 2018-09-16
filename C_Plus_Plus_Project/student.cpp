#include "student.h"
#include "degree.h"
#include <string>
#include <array>
#include <iostream>
using namespace std;

Student::Student()
{
}

Student::Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int* averageDaysInCourse) {
	degree = degree;
	studentID = studentID;
	firstName = firstName;
	lastName = lastName;
	emailAddress = emailAddress;
	age = age;
	averageDaysInCourse = averageDaysInCourse;
};

Student::~Student() {
};

Degree Student::getDegreeProgram() {
	return this->degree;
}

void Student::setDegree(Degree degree) {
	this->degree = degree;
}

void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}

string Student::getStudentID() {
	return this->studentID;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

string Student::getFirstName() {
	return this->firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

string Student::getLastName() {
	return lastName;
}

void Student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

string Student::getEmailAddress() {
	return emailAddress;
}

void Student::setAge(int age) {
	this->age = age;
}

int Student::getAge() {
	return age;
}

void Student::setAverageDaysInCourse(int newDays[]) {
	averageDaysInCourse[0] = newDays[0];
	averageDaysInCourse[1] = newDays[1];
	averageDaysInCourse[2] = newDays[2];

}

int* Student::getAverageDaysInCourse() {
	return averageDaysInCourse;
}

//just "cout" the data.
void Student::Print() {
	string value = "";
	if (degree == Degree::SECURITY) {
		value = "SECURITY";
	}
	if (degree == Degree::NETWORK) {
		value = "NETWORK";
	}
	if (degree == Degree::SOFTWARE) {
		value = "SOFTWARE";
	}

	cout << "\tFirst Name: " << firstName
		<< "\tLast Name: " << lastName
		<< "\tAge: " << age
		<< "\tdaysInCourse: {" << averageDaysInCourse[0] << ", " << averageDaysInCourse[1] << ", " << averageDaysInCourse[2] << "} Degree Program: " << value << endl;
}
