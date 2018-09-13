#include "student.h"
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
	int averageDaysInCourse[];

public:
    Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse);
    ~Student();
	void setDegree(Degree degree);
	Degree getDegree();
	virtual Degree getDegreeProgram();
	virtual void Print();
};

Student::Student(Degree degree, string studentID, string firstName, string lastName, string emailAddress, int age, int averageDaysInCourse) {
}

Student::~Student() {
}

//Do for all other variables.
void Student::setDegree(Degree degree)
{
}

Degree Student::getDegree()
{
	return this->degree;
}

Degree Student::getDegreeProgram()
{
}

//just "cout" the data.
void Student::Print()
{
}
