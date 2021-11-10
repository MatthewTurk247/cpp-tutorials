#include "developer.h"
#include <string>
#include <iostream>
using namespace std;

Developer::Developer(string name, string company, int age, string favoriteProgrammingLanguage) : Employee(name, company, age) {
	_favoriteProgrammingLanguage = favoriteProgrammingLanguage;
}

void Developer::fixBug() {
	cout << getName() << " fixed bug using " << _favoriteProgrammingLanguage << "." << endl;
}