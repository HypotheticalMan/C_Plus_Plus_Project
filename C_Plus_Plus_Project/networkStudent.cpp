#include "networkStudent.h"
#include "student.h"
#include "degree.h"

class NetworkStudent : public Student {
private:

public:
	NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
	~NetworkStudent();
	Degree getDegreeProgram();
};

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
	Student::setDegree(Degree::NETWORK);
	return;
}

NetworkStudent::~NetworkStudent() {}

Degree NetworkStudent::getDegreeProgram() {
	return Student::getDegree();
}