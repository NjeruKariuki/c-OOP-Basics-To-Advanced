#include <iostream>
#include <string>


class Chief{
	public:

		Chief(){
			std::cout<<"Welcome to chief's hood\n\n\n";
		}

		void fuckingRules(){
			std::cout<<"\nHello, " + getName() + ". These are the Rules.\n"<<std::endl;
			std::cout<<"Rule 1: Be yourself.\nRule 2: Develop your hood.\nRule 3: Use commonsense.\n";
		}

		void setName(){
			std::cout<< "What is your name: " <<std::endl;
			std::cin>>name;
		}

		std::string getName(){
			return name;
		}

	private:
		std::string name;

};

int main()
{
	Chief fav_hood;
	fav_hood.setName();
	fav_hood.fuckingRules();
	//return 0;
}
