#pragma once
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class Teacher: public Employee {
public:
	string _subject;
	Teacher(string name, string company, int age, string subject);
	void prepareLession();
};

