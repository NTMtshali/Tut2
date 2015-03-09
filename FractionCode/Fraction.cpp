/*Implemantation of the class object*/


#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(int num, int den)// default constructer implementation
{
	setFraction(num, den);
}
ostream &operator<<(ostream &output, const Fraction &Fr)
{
	output << Fr.nRator << "/" << Fr.dRator << endl;
}

istream &operator>>(istream &input, Fraction &Fr)
{
	
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
	return  D;//return Fraction object for cascading
}

Fraction Fraction::operator-(Fraction Fr)
{
	int num = nRator*Fr.dRator - Fr.nRator*dRator;
	int den = Fr.dRator*dRator;

	
	Fraction D(num, den);
	return  D;//return Fraction object for cascading
}

Fraction Fraction::operator/(Fraction Fr)
{
	int num = nRator*Fr.dRator;
	int den = dRator*Fr.nRator;

	Fraction D(num, den);
	return  D; //return Fraction object for cascading

}

void Fraction::setFraction(int numerator, int denominator)//sets the data members
{
	nRator = numerator;
	if (denominator==0)
		dRator = 2; // default denominator thats the same as that of the constructer
	else
	{
		dRator = denominator;
	}
}

void Fraction::getFraction()
{
	print(nRator, dRator); 
}


void Fraction :: print(int numerator, int denominator) //prints the fraction
{
	if (abs(numerator)>= denominator)
	{
		cout << numerator / denominator << " and " << numerator%denominator << "/" << denominator << endl; //prints mixed fraction if numerator>=denominator
	}

	else
	{
		cout << numerator << "/" << denominator << endl; //prints the fraction if numerator<denominator
	}
	
}