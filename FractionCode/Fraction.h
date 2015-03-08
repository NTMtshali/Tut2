/*Interface of the class object Fraction*/
/*Prototype decleration*/

#ifndef Fraction_H
#define Fraction_H

#include <iostream>
#include <cmath>
using namespace std;

class Fraction
{
	private:
		int nRator;//numerator
		int dRator; //denominator

    public:
		
		Fraction(int=1, int=2); //default constructor

		/* All the overloaded operaters return a fraction to allow for cascaded calculations*/

		Fraction operator+(Fraction Fr);//overloaded addition sign.
		Fraction operator*(Fraction Fr);//overloaded multiplication sign
		Fraction operator-(Fraction Fr);//overloaded subtraction sign
		Fraction operator/(Fraction Fr);//overloaded division sign
		void print(int numerator, int denominator);//prints out the fraction
		void setFraction(int numerator, int denominator); 
		void getFraction();
	
};

#endif