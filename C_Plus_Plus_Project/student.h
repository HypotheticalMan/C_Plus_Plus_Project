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
	Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~Student();
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
	virtual void Print();
};
#endif