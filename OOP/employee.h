#pragma once
#include <iostream>
#include <string>
#include "employee.h"
#include "abstract.h"
using namespace std;


class Employee: AbstractEmployee {
public:
	Employee(string name, string company, int age);
	void introduceSelf();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void setCompany(string company);
	string getCompany();
	virtual void askForPromotion() {
		if (_age > 30) {
			cout << getName() << " got promoted!" << endl;
		}
		else {
			cout << getName() << " was not promoted." << endl;
		}
	}
private:
	string _name;
	string _company;
	int _age;
};

