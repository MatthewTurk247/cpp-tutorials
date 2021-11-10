#pragma once
#include "employee.h"

class Developer: public Employee {
public:
	Developer(string name, string company, int age, string favoriteProgrammingLanguage);
	void fixBug();
protected:
	string _favoriteProgrammingLanguage;
};

