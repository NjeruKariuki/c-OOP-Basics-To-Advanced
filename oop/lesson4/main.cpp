#include <iostream>


class Cohred
{
	public:
		Cohred()
		{
			numberOfLecs = 0;
		}

	private:
		int numberOfLecs;

	friend void massCom(Cohred &massComObj);
};

void massCom(Cohred &massComObj)
	{
		massComObj.numberOfLecs = 15;
		std::cout<<massComObj.numberOfLecs;
	}


int main()
{
	Cohred mcObj;
	massCom(mcObj);
}
