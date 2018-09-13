#include "student.h"
#include "degree.h"
#include <string>
#include <array>
using namespace std;

class Student {
private:
	Degree degree;
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int averageDaysInCourse[3];

public:
	//Constructor & Destructor
	Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~Student();
	//Setters & Getters
	virtual Degree getDegreeProgram();
	void setDegree(Degree degree);
	Degree getDegree();
	void setStudentID(string studentID);
	string getStudentID();
	void setFirstName(string firstName);
	string getFirstName();
	void setEmailAddress(string emailAddress);
	string getEmailAddress();
	void setAge(int age);
	int getAge();
	void setAverageDaysInCourse(int averageDaysInCourse[]);
	int getAverageDaysInCourse();
	//Member Functions
	virtual void Print();
};

Student::Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
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
}

void Student::setDegree(Degree degree) {
	this->degree = degree;
}

Degree Student::getDegree() {
	return this->degree;
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

void Student::setAverageDaysInCourse(int averageDaysInCourse[]) {
	this->averageDaysInCourse[] = averageDaysInCourse;
}

int Student::getAverageDaysInCourse() {
	return this->averageDaysInCourse;
}

//just "cout" the data.
void Student::Print() {
}
