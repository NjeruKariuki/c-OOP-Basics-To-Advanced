#ifndef EMPLOYEE_H
#define EMPLOYEE_H	
#include "People.h"
#include "People.cpp"
#include <string>


class Employee
{
	public:
		Employee(int tagx, std::string dept, People po);
		void employeeStats();
	private:
		int employeeTag;
		std::string employeeDepartment;
		People employeePersonalDetails;
};

#endif //EMPLOYEE_H
