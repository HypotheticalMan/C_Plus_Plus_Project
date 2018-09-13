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
	virtual Degree getDegreeProgram() const;
	void setDegree(Degree degree);
	Degree getDegree() const;
	void setStudentID(string studentID);
	string getStudentID() const;
	void setFirstName(string firstName);
	string getFirstName() const;
	void setEmailAddress(string emailAddress);
	string getEmailAddress() const;
	void setAge(int age);
	int getAge() const;
	void setAverageDaysInCourse(int averageDaysInCourse[]);
	int getAverageDaysInCourse() const;
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

Degree Student::getDegreeProgram() const {
}

void Student::setDegree(Degree degree){
	this->degree = degree;
}

Degree Student::getDegree() const {
	return this->degree;
}

void Student::setStudentID(string studentID){
	this->studentID = studentID;
}

string Student::getStudentID() const {
	return this->studentID;
}

void Student::setFirstName(string firstName){
	this->firstName = firstName;
}

string Student::getFirstName() const {
	return this->firstName;
}

void Student::setEmailAddress(string emailAddress){
	this->emailAddress = emailAddress;
}

string Student::getEmailAddress() const {
	return this->emailAddress;
}

void Student::setAge(int age){
	this->age = age;
}

int Student::getAge() const {
	return this->age;
}

void Student::setAverageDaysInCourse(int averageDaysInCourse[]){
	this->averageDaysInCourse[] = averageDaysInCourse;
}

int Student::getAverageDaysInCourse() const {
	return this->averageDaysInCourse;
}

//just "cout" the data.
void Student::Print(){
}
