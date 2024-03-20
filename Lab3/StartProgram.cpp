#include "StartProgram.h"

StartProgram::StartProgram() 
{
	data = reading.readFile();
}

void StartProgram::menu()
{
	char answer = '0';

	do
	{
		while (true)
		{
			system("cls");
			std::cout << "================== File Management ===================\n";
			std::cout << "Choose option:\n[1] - Print all the words from the read file;\n[2] - Invert the string in file;\n[3] - Count numbers in file;\n[4] - Remove all words beginning with vowels;\n[5] - Write data to file;\n[0] - Exit;\nInput: ";
			std::cin >> answer;
			std::cin.ignore();
			if (answer == '1' || answer == '2' || answer == '3' || answer == '4' || answer == '5' || answer == '0')
				break;
		}
		switch (answer)
		{
		case '1':
			printDataElements();
			break;
		case '2':
			invertData();
			break;
		case '3':
			numbersCount();
			break;
		case '4':
			removeVowelsWords();
			break;
		case '5':
			writeData();
			break;
		}
	} while (answer != '0');
}

void StartProgram::printDataElements()
{
	system("cls");
	std::cout << "Data in file: ";
	for (const std::string e : data) {
		std::cout << e << std::endl;
	}
	system("pause");
}

void StartProgram::invertData()
{
	system("cls");
	std::vector<std::string> tmp = data;
	for (std::string& line : tmp)
	{
		std::reverse(line.begin(), line.end());
	}
	std::reverse(tmp.begin(), tmp.end());
	try {                                           
		std::ofstream file("file_output.txt", std::ios::out);
		if (!file) {
			throw std::runtime_error("Output file failed to open.");
		}

		std::cout << "Inverted data: ";
		for (const std::string line : tmp)
		{
			std::cout << line << std::endl;
		}

		std::ostream_iterator<std::string> output_iterator(file, "\n");
		std::copy(tmp.begin(), tmp.end(), output_iterator);

		file.close();
		std::cout << "\nFinished writing to file." << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	system("pause");
}

void StartProgram::numbersCount()
{
	system("cls");
	int numCount = 0;
	for (const std::string line : data)
	{
		for (const char symbol : line)
		{
			if (isdigit(symbol))
				++numCount;
		}
	}
	try {
		std::ofstream file("file_output.txt", std::ios::out);
		if (!file) {
			throw std::runtime_error("Output file failed to open.");
		}

		std::cout << "Count of the numbers in file: " << numCount << std::endl << std::endl;

		file << numCount;

		file.close();
		std::cout << "Finished writing to file." << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	system("pause");
}

void StartProgram::removeVowelsWords()
{
	system("cls");
	std::vector<std::string> toRemove = data;
	std::vector<std::string> result;
	std::unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

	for (const std::string& line : toRemove)
	{
		std::string word;
		std::string resultLine;

		std::istringstream iss(line);
		while (iss >> word)
		{
			if (!vowels.count(std::tolower(word[0])))
			{
				resultLine += word + " ";
			}
		}

		result.push_back(resultLine);
	}

	try 
	{
		std::ofstream file("file_output.txt", std::ios::out);
		if (!file) {
			throw std::runtime_error("Output file failed to open.");
		}

		std::cout << "After remove: ";
		for (const std::string& line : result)
		{
			std::cout << line << std::endl;
		}

		std::ostream_iterator<std::string> output_iterator(file, "\n");
		std::copy(result.begin(), result.end(), output_iterator);

		file.close();
		std::cout << "\nFinished writing to file." << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	system("pause");
}

void StartProgram::writeData()
{
	system("cls");
	try
	{
		std::ofstream file("file_output.txt", std::ios::out);
		if (!file) {
			throw std::runtime_error("Output file failed to open.");
		}

		std::ostream_iterator<std::string> output_iterator(file, "\n");
		std::copy(data.begin(), data.end(), output_iterator);

		file.close();
		std::cout << "Finished writing to file." << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	system("pause");
}