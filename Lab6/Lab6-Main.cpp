#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Stack.h"

template <class Str, class Vec>
Vec readFile(Str file_name, Vec vec);
template <class Vec>
Vec removePositive(Vec vec);
template <class Vec1, class Vec2>
void sortVecs(Vec1& vec1, Vec2& vec2);
template <class Vec1, class Vec2>
void printVecs(Vec1 vec1, Vec2 vec2);


int main() {
	/*std::string fileName = "numbers.txt";
	try {
		std::vector <int> nums = readFile(fileName, nums);
		std::vector <int> negativeNums = removePositive(nums);
		sortVecs(nums, negativeNums);
		printVecs(nums, negativeNums);
	}
	catch (const std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}*/




	std::string expression = "5 3 +";
	std::cout << "Result: " << evaluatePostfixExpression<double>(expression) << std::endl;

	expression = "8 2 -";
	std::cout << "Result: " << evaluatePostfixExpression<double>(expression) << std::endl;

	expression = "3 4 *";
	std::cout << "Result: " << evaluatePostfixExpression<double>(expression) << std::endl;

	expression = "10 2 /";
	std::cout << "Result: " << evaluatePostfixExpression<double>(expression) << std::endl;

	expression = "5 0 /";
	std::cout << "Result: " << evaluatePostfixExpression<double>(expression) << std::endl;

	expression = "5 3 + 4 *";
	std::cout << "Result: " << evaluatePostfixExpression<double>(expression) << std::endl;

	expression = "a ";
	std::cout << "Result: " << evaluatePostfixExpression<double>(expression) << std::endl;

	return 0;
}


template <class Str, class Vec>
Vec readFile(Str file_name, Vec vec) {
	std::ifstream read(file_name);
	if (!read) throw std::exception("Failed to open the file!");
	int n;
	while (read >> n) vec.push_back(n);
	return vec;
}

template <class Vec>
Vec removePositive(Vec vec) {
	Vec negative = vec;
	auto pn = remove_if(negative.begin(), negative.end(), [](const int i) {return i > 0; });
	negative.erase(pn, negative.end());
	return negative;
}

template<class Vec1, class Vec2>
void sortVecs(Vec1& vec1, Vec2& vec2) {
	std::sort(vec1.begin(), vec1.end());
	std::sort(vec2.begin(), vec2.end());
}

template<class Vec1, class Vec2>
void printVecs(Vec1 vec1, Vec2 vec2) {
	std::cout << "All numbers: ";
	for (auto const& e : vec1) {
		std::cout << e << ' ';
	}
	std::cout << "\nNegative numbers: ";
	for (auto const& e : vec2) {
		std::cout << e << ' ';
	}
	std::cout << std::endl;
}