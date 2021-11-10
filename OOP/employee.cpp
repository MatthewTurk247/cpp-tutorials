#include <string>
#include <iostream>
#include "employee.h"
using namespace std;

Employee::Employee(string name, string company, int age) {
	_name = name;
	_company = company;
	_age = age;
}

void Employee::introduceSelf() {
	cout << "My name is " << _name << ", and I am a " << _age << "-year-old working at " << _company << "." << endl;
}

void Employee::setName(string name) {
	_name = name;
}

string Employee::getName() {
	return _name;
}

void Employee::setAge(int age) {
	_age = age;
}

int Employee::getAge() {
	return _age;
}

void Employee::setCompany(string company) {
	_company = company;
}

string Employee::getCompany() {
	return _company;
}