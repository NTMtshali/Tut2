/*Testing out of the Fraction object*/

#include <iostream>
#include "Fraction.h"

using namespace std;

int main(void)
{
	Fraction A; //initialized by the default constructer
	Fraction B(2, 8) ;
	Fraction C(15, 10);

	/*printing out of the declared objects*/
	A.getFraction();
	B.getFraction();
	C.getFraction();

	cout << "\n" << endl;

	/*basic BODMAS*/
	(A + B).getFraction();	//A+B returns an object Fraction
	(C*A).getFraction();	//C*A returns an object Fraction
	(C / A).getFraction();	//C/A returns an object Fraction
	(C - A).getFraction();	//C-A returns an object Fraction

	cout << "\n" << endl;

	/*advance BODMAS*/
	/*The normal operator precedence is kept*/
	(A + B + C).getFraction(); //A+B returns a Fraction object which is then added to C
	(C*B / A).getFraction();	//C*B returns a Fraction object which is then divided by A
	((A - C) / B).getFraction();	//A-C returns a Fraction object which is the divided by B

	return 0;
}