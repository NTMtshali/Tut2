/*Testing out of the Fraction object*/

#include <iostream>
#include "Fraction.h"

using namespace std;


int main(void)
{
	Fraction A; //initialized by the default constructer
	cout << "Enter a fraction in the form a/b:"<<"\n";
	cin >> A;

	Fraction B ;
	cout << "Enter a fraction in the form a/b:" << "\n";
	cin >> B;

	Fraction C;
	cout << "Enter a fraction in the form a/b:" << "\n";
	cin >> C;

	Fraction H(7, 0);	//denominator is set to zero
	cout << "\n";

	/*printing out of the declared objects*/
	cout << A;
	cout << B;
	cout << C;
	cout << H;

	cout << "\n" << endl;

	/*basic BODMAS*/
	cout << (A + B);	//A+B returns an object Fraction
	cout << (C*A);	//C*A returns an object Fraction
	cout << (C / A);	//C/A returns an object Fraction
	cout << (C - A);	//C-A returns an object Fraction

	cout << "\n" << endl;

	/*advance BODMAS*/
	/*The normal operator precedence is kept*/
	cout << (A + B + C); //A+B returns a Fraction object which is then added to C
	cout << (C*B / A);	//C*B returns a Fraction object which is then divided by A
	cout << ((A - C) / B);	//A-C returns a Fraction object which is the divided by B

	return 0;
}