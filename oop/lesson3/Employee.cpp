#include <iostream>
#include "Employee.h"
#include "People.h"
#include <string>

//member composition --> a class containing objects of another class

Employee::Employee(int tagx, std::string dept, People po)
	: employeeTag(tagx),
	employeeDepartment(dept),
	employeePersonalDetails(po)
{
}

void Employee::employeeStats()
{
	std::cout<<"Employee Tag No: "<<employeeTag<< "\nDepartment: "<< employeeDepartment<<std::endl;
	std::cout<<"\nPersonal Details of the Employee:\n\n";
	employeePersonalDetails.printInfo();

}

