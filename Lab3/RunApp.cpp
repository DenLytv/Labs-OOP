#include "RunApp.h"

RunApp::RunApp()
{
	complexNumbers = { {1,2}, {3,4}, {-1, -6}, {5, 10}, {4, 19} };
}

void RunApp::menu()
{
	char answer = '0';

	do
	{
		while (true)
		{
			system("cls");
			std::cout << "================== Complex Numbers ===================\n";
			std::cout << "Choose option:\n[1] - Sum of complex numbers;\n[2] - Multiply complex numbers;\n[3] - Difference of complex numbers;\n[4] - Fraction of complex numbers;\n[5] - Compare complex numbers;\n[6] - Asign complex number;\n[0] - Exit;\nInput: ";
			std::cin >> answer;
			std::cin.ignore();
			if (answer == '1' || answer == '2' || answer == '3' || answer == '4' || answer == '5' || answer == '6' || answer == '0')
				break;
		}
		switch (answer)
		{
		case '1':
			addComplexNums();
			break;
		case '2':
			multiComplexNums();
			break;
		case '3':
			subtractComplexNums();
			break;
		case '4':
			divideComplexNums();
			break;
		case '5':
			compareComplexNums();
			break;
		case '6':
			assignComplexNum();
			break;
		}
	} while (answer != '0');
}

void RunApp::printAllComplexNums()
{
	std::cout << "-------------- Complex Numbers --------------" << std::endl;
	for (size_t i = 0; i < complexNumbers.size(); i++) {
		std::cout << i + 1 << ")";
		printComplexNum(complexNumbers[i]);
	}
}

int RunApp::getComplexId(std::string text)
{
	int k = 0;
	while (true)
	{
		std::cout << "Choose " << text << "(from 1 to " << complexNumbers.size() << "): ";
		std::cin >> k;
		if (std::cin.fail()) {
			std::cerr << "Invalid input. Please enter a valid number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		}
		else if (k > complexNumbers.size() || k <= 0) {
			std::cout << "Wrong vector number, try again." << std::endl;
		}
		else
			break;
	}
	return k;
}

double RunApp::getNumbers(char label)
{
	double num;
	while (true)
	{
		std::cout << "Enter " << label << ": ";
		std::cin >> num;
		if (std::cin.fail()) {
			std::cerr << "Invalid input. Please enter a valid number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	return num;
}

void RunApp::printComplexNum(ComplexNumber complexNumber)
{
	std::cout << complexNumber.getA() << " ";
	if (complexNumber.getB() < 0)
		std::cout << "- " << abs(complexNumber.getB()) << complexNumber.getI();
	else if (complexNumber.getB() > 0)
		std::cout << "+ " << complexNumber.getB() << complexNumber.getI();
	std::cout << std::endl;
}

void RunApp::multiComplexNums()
{
	system("cls");
	std::cout << "===================== Multiplication =====================" << std::endl;
	printAllComplexNums();
	int k = getComplexId();
	std::cout << "\nEnter values for a and b numbers: " << std::endl;
	double a = getNumbers('a');
	double b = getNumbers('b');
	
	ComplexNumber multiplier(a, b);
	ComplexNumber newNumber = complexNumbers[k - 1] * multiplier;
	std::cout << "\nThe result is: ";
	printComplexNum(newNumber);
	system("pause");
}

void RunApp::subtractComplexNums()
{
	system("cls");
	std::cout << "===================== Substraction =====================" << std::endl;
	printAllComplexNums();
	int k = getComplexId();
	std::cout << "\nEnter values for a and b numbers: " << std::endl;
	double a = getNumbers('a');
	double b = getNumbers('b');

	ComplexNumber substractor(a, b);
	ComplexNumber newNumber = complexNumbers[k - 1] - substractor;
	std::cout << "\nThe result is: ";
	printComplexNum(newNumber);
	system("pause");
}

void RunApp::addComplexNums()
{
	system("cls");
	std::cout << "===================== Sum =====================" << std::endl;
	printAllComplexNums();
	int k = getComplexId();
	std::cout << "\nEnter values for a and b numbers: " << std::endl;
	double a = getNumbers('a');
	double b = getNumbers('b');

	ComplexNumber application(a, b);
	ComplexNumber newNumber = complexNumbers[k - 1] + application;
	std::cout << "\nThe result is: ";
	printComplexNum(newNumber);
	system("pause");
}

void RunApp::divideComplexNums()
{
	system("cls");
	std::cout << "===================== Dividion =====================" << std::endl;
	printAllComplexNums();
	int k = getComplexId();
	std::cout << "\nEnter values for a and b numbers: " << std::endl;
	double a = getNumbers('a');
	double b = getNumbers('b');

	ComplexNumber divider(a, b);
	ComplexNumber newNumber = complexNumbers[k - 1] / divider;
	std::cout << "\nThe result is: ";
	printComplexNum(newNumber);
	system("pause");
}

void RunApp::compareComplexNums()
{
	system("cls");
	std::cout << "===================== Comparison =====================" << std::endl;
	printAllComplexNums();
	int k = getComplexId("first complex number ");
	int j = getComplexId("second complex number ");
	if (complexNumbers[k - 1] == complexNumbers[j - 1]) {
		std::cout << "\nComplex number " << k << " is equal to the " << j << "." << std::endl;
	}
	else {
		std::cout << "\nComplex number " << k << " isn`t equal to the " << j << "." << std::endl;
	}
	system("pause");
}

void RunApp::assignComplexNum()
{
	system("cls");
	std::cout << "===================== Assignment =====================" << std::endl;
	printAllComplexNums();
	std::cout << std::endl;
	int k = getComplexId("complex number to which you want to assign ");
	int j = getComplexId("complex number whose parameters you want to take ");
	complexNumbers[k - 1] = complexNumbers[j - 1];
	std::cout << "\nThe result is: ";
	printComplexNum(complexNumbers[k - 1]);
	printAllComplexNums();
	system("pause");
}