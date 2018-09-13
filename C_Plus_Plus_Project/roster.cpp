#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"
#include <iostream>
using namespace std;

Roster::Roster() {

}

Roster::~Roster() {

}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree){

}

void Roster::remove(string studentID){

}

void Roster::printAll(){

}

void Roster::printAverageDaysInCourse(string studentID){

}

void Roster::printInvalidEmails(){

	string invalidEmails = "";
	char at = '@';
	char dot = '.';
	char space = ' ';

	//for (int i = 0; i < /*array size*/; i++) {
	//	
	//	string emailToTest = /*array*/.at(i).emailAddress;

	//	if (!(emailToTest.find(at) != string::npos && emailToTest.find(dot) != string::npos && emailToTest.find(space) == string::npos)) {

	//		invalidEmails.append(emailToTest);

	//	}

	//}

	cout << invalidEmails << endl;

}

void Roster::printByDegreeProgram(Degree degree){

}

int main() {

	return 0;

};