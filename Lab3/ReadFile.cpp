#include "ReadFile.h"

ReadFile::ReadFile() {}

std::vector<std::string> ReadFile::readFile()
{
	try {
		std::string read;     
		std::ifstream file("file_input.txt", std::ios::app);
		if (!file) {
			throw std::runtime_error("File failed to open.");
		}
		while (getline(file, read)) {
			std::stringstream ss(read);
			while (getline(ss, read)) {
				tokens.push_back(read);
			}
		}
		file.close();
		std::cout << "File successfully opened and closed." << std::endl;
		return tokens;
	}
	catch (const std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}
}