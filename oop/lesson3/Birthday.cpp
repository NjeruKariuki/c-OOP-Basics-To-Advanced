#include <iostream>
#include "Birthday.h"

Birthday::Birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Birthday::printDate()
{
	std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;
}

