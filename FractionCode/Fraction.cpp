/*Implimantation of the class object*/


#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(int num, int den)// default constructer implementation
{
	setFraction(num, den);
}

Fraction Fraction:: operator+(Fraction Fr)
{
	int num = nRator*Fr.dRator + Fr.nRator*dRator;
	int den= Fr.dRator*dRator;

	Fraction D(num, den);
	return  D; //return object for cascading

}


Fraction Fraction::operator*(Fraction Fr)
{
	int num = nRator*Fr.nRator;
	int den = dRator*Fr.dRator;

	Fraction D(num, den);
	return  D;//return object for cascading
}

Fraction Fraction::operator-(Fraction Fr)
{
	int num = nRator*Fr.dRator - Fr.nRator*dRator;
	int den = Fr.dRator*dRator;

	
	Fraction D(num, den);
	return  D;//return object for cascading
}

Fraction Fraction::operator/(Fraction Fr)
{
	int num = nRator*Fr.dRator;
	int den = dRator*Fr.nRator;

	Fraction D(num, den);
	return  D; //return object for cascading

}

void Fraction::setFraction(int numerator, int denominator)
{
	nRator = numerator;
	dRator = denominator;
}

void Fraction::getFraction()
{
	print(nRator, dRator); 
}


void Fraction :: print(int numerator, int denominator) //prints the fraction
{
	if (abs(numerator)>= denominator)
	{
		cout << numerator / denominator << " and " << numerator%denominator << "/" << denominator << endl; //prints mixed fraction if numerator>=1
	}

	else
	{
		cout << numerator << "/" << denominator << endl;
	}
	
}