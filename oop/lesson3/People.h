#ifndef PEOPLE_H
#define PEOPLE_H	
#include "Birthday.h"
#include "Birthday.cpp"
#include <string>


class People
{
	public:
		People(std::string x, Birthday bo);
		void printInfo();
	private:
		std::string name;
		Birthday dateOfBirth;
};

#endif //PEOPLE_H
