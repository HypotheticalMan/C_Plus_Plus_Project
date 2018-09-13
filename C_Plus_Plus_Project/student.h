#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
	Degree degree;
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int averageDaysInCourse[];

public:
	Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~Student();
	void setDegree(Degree degree);
	Degree getDegree();
	virtual Degree getDegreeProgram();
	virtual void Print();
};

#endif