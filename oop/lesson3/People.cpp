#include <iostream>
#include "People.h"
#include "Birthday.h"
#include <string>

//member composition --> a class containing objects of another class

People::People(std::string x, Birthday bo): name(x), dateOfBirth(bo) //member initialization syntax
{
}

void People::printInfo()
{
	std::cout<<"Name:   "<<name<<"\n";
	std::cout<<"Date of Birth: "; 
	dateOfBirth.printDate();
}

