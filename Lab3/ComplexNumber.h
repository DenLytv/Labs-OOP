#pragma once
#include <iostream>
#include <cmath>
#include <vector>

class ComplexNumber
{
public:
	ComplexNumber();
	ComplexNumber(double a, double b);

	double getA();
	double getB();
	char getI() const;
	void setA(double a);
	void setB(double b);

	ComplexNumber operator= (const ComplexNumber comp);
	ComplexNumber operator+ (const ComplexNumber& comp);
	ComplexNumber operator- (const ComplexNumber& comp);
	ComplexNumber operator* (const ComplexNumber& comp);
	ComplexNumber operator/ (const ComplexNumber& comp);
	bool operator== (const ComplexNumber& comp);

private:
	double a;
	double b;
	const char i = 'i';
};