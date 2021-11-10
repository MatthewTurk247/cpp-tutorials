#include <string>
#include <iostream>
#include "teacher.h"
using namespace std;

Teacher::Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
	_subject = subject;
}

void Teacher::prepareLession() {
	cout << getName() << " is preparing " << _subject << " lesson.";
}