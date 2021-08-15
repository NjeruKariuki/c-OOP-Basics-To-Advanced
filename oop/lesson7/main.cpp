#include <iostream>
#include "Daughter.h"
#include "Daughter.cpp"
#include "Mother.h"
#include "Mother.cpp"



int main()
{
	Mother mom;
	std::cout<<"Mother says:"<<std::endl;
	mom.sayName();
	Daughter winnie;
	std::cout<<"Daughter says: "<<std::endl;
	winnie.sayName();
	winnie.goToSchool();
}
