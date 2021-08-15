#include <iostream>

Daughter::Daughter(){}

void Daughter::doSomething(){
	publicv = 1;
	protectedv = 2;

	std::cout<<publicv<<std::endl;
	std::cout<<protectedv<<std::endl;


}
/*
void Daughter::saySomething(){
	std::cout<<publicv<<std::endl;
	std::cout<<protectedv<<std::endl;
}
*/
