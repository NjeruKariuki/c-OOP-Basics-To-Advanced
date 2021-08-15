#include <iostream>
#include "Chief.h"
#include "Chief.cpp"

using namespace std;


int main(){
	Chief my_obj;
	my_obj.helloUser("Danielle");
	//you can access object methods using pointers
	const Chief *my_obj_pointer;
	my_obj_pointer->helloUser("Marcus");
}
