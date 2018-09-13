#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"
#include <iostream>
using namespace std;

const int NUMBER_OF_STUDENTS = 5;
const string studentData[NUMBER_OF_STUDENTS] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99@yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Joshua,Fairbourn,jfairbo@my.wgu.edu,26,30,30,30,SOFTWARE"
};

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