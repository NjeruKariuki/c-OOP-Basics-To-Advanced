#include <iostream>
#include "Chief.h"
#include <string>

//constructor
//called automatically when object is created
//can be used to instanstiate variables for the object
//same as name of class
Chief::Chief()
{
	std::cout<<"\nI was called automatically!"<<std::endl;
}
//deconstructor
//same as construcotur but with a preceding tilde(~)
//destroys object of a class
////called automatically when program before execution ends
Chief::~Chief()
{
	std::cout<<"\nI am the deconstructor"<<std::endl;
}

void Chief::helloUser(std::string name)
{
	std::cout<<"Hello, " + name<<"i am a regular function"<<std::endl;
}

void Chief::helloUser(std::string name) const
{
	std::cout<<"Hello, " + name<<"i am a constant function"<<std::endl;
}

