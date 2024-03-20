#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <exception>
#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_set>

class ReadFile
{
public:
	ReadFile();
	std::vector<std::string> readFile();

private:
	std::vector<std::string> tokens;
};