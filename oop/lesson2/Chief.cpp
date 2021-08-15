#include <iostream>
#include "Chief.h"

//NOTES
//
//member - any variable in a class
//eg. int data, float data, etc
//member initialization done in class file
//using member initiatialization syntax --> like a list of members
//eg: ClassName::Constructor( int a, const int b ) :var_name(a), var_name2(b) { //body of constr }
//NB:: ARGS IN CONSTR PASSED T0 VAR IN MEMBER INIT, MEMBERS INITIALIZED BEFORE CONSTR CLASS, NO ; SINCE IT'S NOT A STATEMENT


Chief::Chief(int a, int b)
: preCalculus(a),
numberTheory(b) //member initialization syntax
{
}

void Chief::printSomething()
{
	std::cout<<"A is : "<<preCalculus<<" and the constant B is: "<<numberTheory<<std::endl;
}

