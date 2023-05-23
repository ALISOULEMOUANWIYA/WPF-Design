#include <iostream>
#include "Employee.h" // Employee class definition 
using namespace std;

unsigned int Employee::count{0}; // cannot include keyword static

unsigned int Employee::getCount() { return count; }

Employee::Employee(const string& first, const string& last)
   : firstName{first}, lastName{last} {
   ++count; // increment static count of employees
   cout << "Employee constructor for " << firstName
      << ' ' << lastName << " called." << endl;
}

Employee::~Employee() {
   cout << "~Employee() called for " << firstName
      << ' ' << lastName << endl;
   --count; // decrement static count of employees
}

string Employee::getFirstName() const { return firstName; }

string Employee::getLastName() const { return lastName; }

