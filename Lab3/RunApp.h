#pragma once
#include "ComplexNumber.h"

class RunApp
{
public:
	RunApp();
	void menu();

private:
	void printAllComplexNums();
	int getComplexId(std::string text = "a complex number ");
	double getNumbers(char label);
	void printComplexNum(ComplexNumber complexNumber);

	void multiComplexNums();
	void subtractComplexNums();
	void addComplexNums();
	void divideComplexNums();

	void compareComplexNums();
	void assignComplexNum();

	
	std::vector<ComplexNumber> complexNumbers;
};

