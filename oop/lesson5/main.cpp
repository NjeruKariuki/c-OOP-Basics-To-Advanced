#include <iostream>

//this keyword 
/*
 * this keyword stores the memory location of the current object
 * it can call variables in the obj by dereferencing 
 * EXAMPLES:
 * var h
 * we can cout:
 * h
 * this->h
 * (*this).h
 *
 * */

class Cohred
{
	public:
		Cohred()
		{
			numberOfLecs = 15;
		}
		void printNumberOfLecs()
		{
			std::cout<<numberOfLecs<<std::endl;
			std::cout<<"this-> "<<this->numberOfLecs<<std::endl;
			std::cout<<"(*this).numberOfLecs "<<(*this).numberOfLecs<<std::endl;
			std::cout<<"memory position of the current object-->" <<this<<std::endl;
		}

	private:
		int numberOfLecs;

};

int main()
{
	Cohred my_obj;
	my_obj.printNumberOfLecs();
}
