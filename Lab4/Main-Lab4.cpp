#include "Clock.h"

double triangleArea(int a, int b, int c);
int inputSide(std::string label);

int main()
{
	try {
		//Clock clock(-1, 3, 4);
		//Clock clock(10, 100, 5);
		//Clock clock(10, 12, -10);
		/*Clock clock(22, 15, 30);
		clock.printTime();*/
		int a, b, c;
		std::cout << "Enter values for triangle sides: " << std::endl;
		a = inputSide("A");
		b = inputSide("B");
		c = inputSide("C");

		std::cout << "Triangle area: " << triangleArea(a, b, c) << std::endl;
	}
	catch (const std::invalid_argument& ex) {
		std::cerr << ex.what() << std::endl;
	}
	return 0;
}

double triangleArea(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) throw std::invalid_argument("Error!!! One or more sides are <= 0.");
	else if (a >= b + c || b >= a + c || c >= b + a) throw std::invalid_argument("Error!!! Your sides values is invalid.");
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int inputSide(std::string label) {
	int side;
	while (true) {
		std::cout << label << ": ";
		std::cin >> side;
		if (std::cin.fail()) {
			std::cerr << "Invalid input. Please enter a valid number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	return side;
}