#ifndef STUDENT_H
#define STUDENT_H
#include "degree.h"
#include <string>
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
	Student();
	Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int* averageDaysInCourse);
	~Student();

	//Setters & Getters
	virtual Degree getDegreeProgram();
	void setDegree(Degree degree);
	void setStudentID(string studentID);
	string getStudentID();
	void setFirstName(string firstName);
	string getFirstName();
	void setLastName(string lastName);
	string getLastName();
	void setEmailAddress(string emailAddress);
	string getEmailAddress();
	void setAge(int age);
	int getAge();
	void setAverageDaysInCourse(int averageDaysInCourse[]);
	int* getAverageDaysInCourse();

	//Member Functions
	virtual void Print();
};
#endif