/*Testing out of the Fraction object*/

#include <iostream>
#include "Fraction.h"

using namespace std;
void READmixed( Fraction &Fr)// object argument is passed by reference
{
	int qout, num, den;
	cout << "enter a mixed fraction as qoutient, numerator and denominator:" << "\n";
	cin >> qout;
	cin >> num;
	cin >> den;
	Fr.setFraction((den*qout + num), den); //sets the passed object
}

int main(void)
{
	Fraction A; //initialized by the default constructer
	READmixed(A);
	Fraction B ;
	READmixed(B);
	Fraction C;
	READmixed(C);
	Fraction H(7, 0);	//denominator is set to zero

	/*printing out of the declared objects*/
	A.getFraction();
	B.getFraction();
	C.getFraction();
	H.getFraction();

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