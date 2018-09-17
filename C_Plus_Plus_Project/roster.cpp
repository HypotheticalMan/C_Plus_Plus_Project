#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"
#include <iostream>
#include <sstream>
#include <map>
using namespace std;

Roster::Roster() {
	this->classRosterArray = new Student[NUMBER_OF_STUDENTS];
}

Roster::~Roster() {
	classRosterArray = NULL;
}

//array is called Student *classRosterArray[]
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree){
	int days[3];
	days[0] = daysInCourse1;
	days[1] = daysInCourse2;
	days[2] = daysInCourse3;
	
	if (degree == Degree::NETWORK) {
		NetworkStudent student = NetworkStudent(studentID, firstName, lastName, emailAddress, age, days);
		this->classRosterArray[index] = student;
	}
	else if (degree == Degree::SECURITY) {
		SecurityStudent student = SecurityStudent(studentID, firstName, lastName, emailAddress, age, days);
		this->classRosterArray[index] = student;
	}
	else {
		SoftwareStudent student = SoftwareStudent(studentID, firstName, lastName, emailAddress, age, days);
		this->classRosterArray[index] = student;
	}

	index++;

}

void Roster::remove(string studentID){

	Student tempArray[NUMBER_OF_STUDENTS];
	int j = 0;
	bool isFound = false;

	for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
		if (classRosterArray[i].getStudentID() != studentID){
			tempArray[j++] = classRosterArray[i];
		}
		if (classRosterArray[i].getStudentID() == studentID) {
			isFound = true;
			cout << "Student with Student ID " << studentID << " was removed from Class Roster!" << endl;
		}
	}
	
	if (!isFound) {
		cout << "Student with Student ID " << studentID << " was not found!" << endl;
	}

	classRosterArray = tempArray;
	index = j + 1;
}

void Roster::printAll(){
	cout << "All students in Class Roster:" << endl;
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		cout << i + 1;
		classRosterArray[i].Print();
	}

	return;
}

void Roster::printAverageDaysInCourse(string studentID){
	
	int* daysArray = {NULL};
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		if (classRosterArray[i].getStudentID() == studentID) {
			daysArray = classRosterArray[i].getAverageDaysInCourse();
		}
	}

	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		total += daysArray[i];
	}

	cout << studentID << ": " << total / 3 << endl;

	return;
}

void Roster::printInvalidEmails(){

	string invalidEmails = "";
	char at = '@';
	char dot = '.';
	char space = ' ';

	for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
		
		string emailToTest = classRosterArray[i].getEmailAddress();

		if (!(emailToTest.find(at) != string::npos && emailToTest.find(dot) != string::npos && emailToTest.find(space) == string::npos)) {
			invalidEmails.append(emailToTest + "; ");
		}

	}
	
	cout << "Invalid emails:" << endl;
	cout << invalidEmails << endl << endl;

	return;
}

void Roster::printByDegreeProgram(Degree degree){
	
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

	cout << "Students by Degree Program " << value << ":" << endl;

	int listNumber = 1;
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		if (classRosterArray[i].getDegreeProgram() == degree) {
			cout << listNumber++ << "\t";
			classRosterArray[i].Print();
		}
	}

	cout << endl;

	return;
}

Student* Roster::getClassRosterArray()
{
	return classRosterArray;
}

//input data = const string studentData
int main() {

	string courseTitle = "Course Title: C867 - Scripting & Programming Applications";
	string programmingLanguage = "Programming Language Used: C++";
	string myStudentID = "Student ID: 000805788";
	string myName = "Student Name: Joshua Fairbourn";


	cout << courseTitle <<endl;
	cout << programmingLanguage << endl;
	cout << myStudentID << endl;
	cout << myName << endl << endl;

	Roster classRoster = Roster();

	for (int i = 0; i < classRoster.NUMBER_OF_STUDENTS; i++)
	{
		string inputLine = classRoster.studentData[i];
		string* values = new string[9];
		string value = "";
		int index = 0;
		Degree degree;

		for (int j = 0; j < inputLine.length(); j++) {
			if (j == inputLine.length() - 1) {
				value += inputLine[j];
				values[index++] = value;
				value = "";
			}

			if (inputLine[j] == ',') {
				values[index++] = value;
				value = "";
			}
			else {
				value += inputLine[j];
			}
		}

		string studentID = values[0];
		string firstName = values[1];
		string lastName = values [2];
		string emailAddress = values[3];
		int age = stoi(values[4]);
		int daysInCourse1 = stoi(values[5]);
		int daysInCourse2 = stoi(values[6]);
		int daysInCourse3 = stoi(values[7]);

		string enumValue = values[8];

		if (enumValue == "SECURITY") {
			degree = Degree::SECURITY;
		}

		if (enumValue == "NETWORK") {
			degree = Degree::NETWORK;
		
		}
		if (enumValue == "SOFTWARE") {
			degree = Degree::SOFTWARE;
		}


		classRoster.add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
		values = nullptr;
	}

	classRoster.printAll();

	cout << endl;

	classRoster.printInvalidEmails();
	
	Student *students = classRoster.getClassRosterArray();

	cout << "Average Days in Course by Student ID:" << endl;
	for (int i = 0; i < Roster::NUMBER_OF_STUDENTS; i++)
	{
		Student student = students[i];
		classRoster.printAverageDaysInCourse(student.getStudentID());
	}

	cout << endl;

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.remove("A3");


	classRoster.~Roster();

	return 0;

};