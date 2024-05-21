#include <iostream>
#include "Frustrum.h"

double inputParams(std::string label);

int main() {
	double r1 = inputParams("first radius"),
		r2 = inputParams("second radius"),
		t = inputParams("twisting");
	double S = findArea(r1, r2, t);
	std::cout << "The square of the frustrum is: " << S << std::endl;

	return 0;
}

double inputParams(std::string label)
{
	double param;
	while (true) {
		std::cin.clear();
		std::cout << "Please enter the " << label << " of trustrum (> 0): ";
		std::cin >> param;
		if (std::cin.fail()) {
			std::cerr << "Invalid input. Your number is too big or it's not a number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		}
		else if (param <= 0)
		{
			std::cerr << "Invalid input. Your param is <=0." << std::endl;
		}
		else
			break;
	}
	return param;
}
