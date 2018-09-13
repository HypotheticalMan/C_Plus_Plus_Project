#include "student.h"
#include "networkStudent.h"
#include "degree.h"
using namespace std;

class NetworkStudent : public Student {
private:
    
public:
    NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
    ~NetworkStudent();

};

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
	Student::setDegree(Degree::NETWORK);
}

NetworkStudent::~NetworkStudent() {}

NetworkStudent::getDegreeProgram() {
	return Student::getDegree();
}