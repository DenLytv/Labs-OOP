#pragma once
#include "ReadFile.h"

class StartProgram
{
public:
	StartProgram();

	void menu();

private:
	void printDataElements();
	void invertData();
	void numbersCount();
	void removeVowelsWords();
	void writeData();

	std::vector <std::string> data;
	ReadFile reading{};
};