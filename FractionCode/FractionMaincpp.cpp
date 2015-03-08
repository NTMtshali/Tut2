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
	(A + B).getFraction();
	(C*A).getFraction();
	(C / A).getFraction();
	(C - A).getFraction();

	cout << "\n" << endl;

	/*advance BODMAS*/;
	(A + B + C).getFraction();
	(C*B / A).getFraction();
	((A - C) / B).getFraction();

	return 0;
}