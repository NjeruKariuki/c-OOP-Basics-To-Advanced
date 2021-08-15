#include <iostream>
#include "Birthday.h"
#include "People.h"
#include "Employee.h"
#include "Employee.cpp"


int main(){
	Birthday birthObj(8,6,2001);
	People daniel("Daniel Kariuki", birthObj);
	Employee employeeObj(29, "Software Design", daniel);
	employeeObj.employeeStats();
}

