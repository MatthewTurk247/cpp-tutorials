// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "employee.h"
#include "abstract.h"
#include "developer.h"
#include "teacher.h"
using namespace std;

int main() {
    Employee john = Employee("John", "Amazon", 35);
    john.introduceSelf();
    Employee selina = Employee("Selina", "CodeBeauty", 25);
    selina.introduceSelf();
    john.askForPromotion();
    selina.askForPromotion();
    Developer donald = Developer("Donald", "Google", 40, "JavaScript");
    donald.introduceSelf();
    donald.fixBug();

    Teacher cynthia = Teacher("Cynthia", "Stanford University", 33, "Computer Science");
    cynthia.introduceSelf();
    cynthia.askForPromotion();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
