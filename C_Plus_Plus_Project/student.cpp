#include "student.h"
#include <string>
using namespace std;

class student {
private:
    string firstName;
    string lastName;
    string emailAddress;
    int age;

public:
    student(/* args */);
    ~student();
    string studentID;
};

student::student(/* args */) {
}

student::~student() {
}
