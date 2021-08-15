#include <iostream>

/*
 * OPERATOR OVERLOADING IN CLASSES
 *
 * this enables using arithmetic (like +/-*)  to work on objects directly without accessing the members.
 *
 * you work on objects directly by creating operator overloading methods.
 * These methods should work on the members of the objects created
 * after all operations, you should return the new objects(with operations complete)
 *
 * */

class Cyndy
{
	public:
		int num;
	
		Cyndy()
		{
		}

		Cyndy(int x)
		{
			num = x;
		}

		Cyndy operator+(Cyndy aco)
		{
			Cyndy brandNew;
			brandNew.num = num + aco.num;
			return(brandNew);
		}

		Cyndy operator-(Cyndy aco)
		{
			Cyndy brandNew;
			brandNew.num = num - aco.num;
			return (brandNew);
		}

		Cyndy operator*(Cyndy aco)
		{
			Cyndy brandNew;
			brandNew.num = num * aco.num;
			return (brandNew);
		}
};

int main()
{
	Cyndy my_obj(39);
	Cyndy my_obj2(35);
	Cyndy my_obj3;
	my_obj3 = my_obj2 * my_obj;
	std::cout<<my_obj3.num<<std::endl;
}
