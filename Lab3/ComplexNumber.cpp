#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
	setA(0.0);
	setB(0.0);
}

ComplexNumber::ComplexNumber(double a, double b)
{
	setA(a);
	setB(b);
}

double ComplexNumber::getA()
{
	return a;
}

double ComplexNumber::getB()
{
	return b;
}

char ComplexNumber::getI() const
{
	return i;
}

void ComplexNumber::setA(double a)
{
	this->a = a;
}

void ComplexNumber::setB(double b)
{
	this->b = b;
}

ComplexNumber ComplexNumber::operator=(const ComplexNumber comp)
{
	a = comp.a;
	b = comp.b;;
	return *this;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& comp)
{
	ComplexNumber tmpComp;
	tmpComp.setA(getA() + comp.a);
	tmpComp.setB(getB() + comp.b);
	return tmpComp;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& comp)
{
	ComplexNumber tmpComp;
	tmpComp.setA(getA() - comp.a);
	tmpComp.setB(getB() - comp.b);
	return tmpComp;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& comp)
{
	ComplexNumber tmpComp;
	tmpComp.setA(getA()*comp.a - getB()*comp.b);
	tmpComp.setB(getA()*comp.b + comp.a*getB());
	return tmpComp;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& comp)
{
	ComplexNumber tmpComp;
	if (getA() == 0 && getB() == 0)
	{
		std::cerr << "Error!! You can't divide by zero. Change a or b value." << std::endl;
	}
	else
	{
		tmpComp.setA((getA() * comp.a + getB() * comp.b)/(pow(comp.a, 2) + pow(comp.b, 2)));
		tmpComp.setB((comp.a * getB() - getA() * comp.b) / (pow(comp.a, 2) + pow(comp.b, 2)));
	}
	return tmpComp;
}

bool ComplexNumber::operator==(const ComplexNumber& comp)
{
	if (getA() == comp.a && getB() == comp.b)
		return true;
	else
		return false;
}