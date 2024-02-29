#include "StartApp.h"

StartApp::StartApp() {}

void StartApp::menu()
{
	char answer = '0';
	do
	{
		while (true)
		{
			system("cls");
			std::cout << "================== Courses Management ===================\n";
			std::cout << "Choose option:\n[1] - Add a new course;\n[2] - Edit a course;\n[3] - Delete a course;\n[4] - Print course by number;\n";
			std::cout << "[5] - Print all courses;\n[6] - Sort a courses by name;\n[7] - Display courses where the number of students exceeds the specified number;\n[0] - Exit;\nInput: ";
			std::cin >> answer;
			if (answer == '1' || answer == '2' || answer == '3' || answer == '4' || answer == '5' || answer == '6' || answer == '7' || answer == '0')
			{
				break;
			}
		}
		switch (answer)
		{
		case '1':
			addCourse();
			break;
		case '2':
			editCourse();
			break;
		case '3':
			deleteCourse();
			break;
		case '4':
			printCourse();
			break;
		case '5':
			printAllCourses();
			break;
		case '6':
			sortCourses();
			break;
		case '7':
			moreThanListNum();
			break;
		}
	} while (answer != '0');
}

void StartApp::addCourse()
{
	system("cls");
	std::cout << "================== Course Adding ===================\n";
	Course newCource;
	std::cout << "Currently " << size << " cource(s) in the array.\n" << std::endl;

	if (size == MAX_SIZE)
		std::cout << "The array is full, you cannot add more cources.";
	else
	{
		char* name = new char;
		char* teacherSurname = new char;
		std::string	hours, listenersNum;
		std::cout << "Please enter the cource name: ";
		std::cin >> name;
		newCource.setName(name);
		std::cout << "Please enter the teacher's surname: ";
		std::cin >> teacherSurname;
		newCource.setTeacherSurname(teacherSurname);
		std::cout << "Please enter the number of hours: ";
		std::cin.ignore();
		getline(std::cin, hours);
		newCource.setHours(hours);
		std::cout << "Please enter the number of listeners: ";
		getline(std::cin, listenersNum);
		newCource.setListenersNum(listenersNum);

		courses[size] = newCource;
		++size;
		std::cout << "\nCourse added successfully" << std::endl;
	}

	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::editCourse()
{
	system("cls");
	std::cout << "================== Course Editing ===================\n";

	if (size == 0) {
		std::cout << "Course array is empty, there is nothing to edit." << std::endl;
		std::cout << "\nPress any button to continue:\n";
		char ch = _getch();
	}
	else
	{
		int courseIndex = 0;
		std::string inputStr = "";
		std::cin.ignore();
		while (true)
		{
			try
			{
				std::cout << "Enter the number of the course you want to edit (from 1 to " << size << "): ";
				std::getline(std::cin, inputStr);
				courseIndex = std::stoi(inputStr);
				if (courseIndex > size || courseIndex == 0) {
					std::cout << "Error course number!!!Your number must be > 0 and < " << size + 1 << std::endl;
				}
				if (courseIndex < size + 1 && courseIndex > 0) {
					break;
				}
			}
			catch (const std::exception&)
			{
				std::cout << "Error number of course!!!It's not a number or it's too big" << std::endl;
			}
		}

		char answer = '0';
		do
		{
			while (true)
			{
				system("cls");
				std::cout << "================== Course Editing ===================\n";
				std::cout << "Please choose what you want to modify:\n[1] - Name;\n[2] - Teasher's surname;\n[3] - Hours;\n[4] - Number of listeners;\n[0] - Exit;\nInput: ";
				std::cin >> answer;
				if (answer == '1' || answer == '2' || answer == '3' || answer == '4' || answer == '0')
				{
					break;
				}
			}
			system("cls");
			std::cout << "================== Course Editing ===================\n";
			std::cout << "------------ Course #" << courseIndex << " ------------" << std::endl;
			courses[courseIndex - 1].printCourse();
			std::cout << std::endl;
			switch (answer)
			{
			case '1':
				editName(courseIndex);
				break;
			case '2':
				editTeacherSurname(courseIndex);
				break;
			case '3':
				editHours(courseIndex);
				break;
			case '4':
				editListenersNum(courseIndex);
				break;
			}
		} while (answer != '0');
	}
}

void StartApp::deleteCourse()
{
	system("cls");
	std::cout << "================== Course Deleting ===================\n";

	int courseIndex = 0;
	if (size == 0)
		std::cout << "Course array is empty, please add courses" << std::endl;
	else
	{
		std::string inputStr = "";
		std::cin.ignore();

		while (true)
		{
			try
			{
				std::cout << "Enter the number of the course you want to delete (from 1 to " << size << "): ";
				getline(std::cin, inputStr);
				courseIndex = std::stoi(inputStr);
				if (courseIndex > size || courseIndex == 0) {
					std::cout << "Error course number!!!Your number must be > 0 and < " << size + 1 << std::endl;
				}
				if (courseIndex < size + 1 && courseIndex > 0) {
					break;
				}
			}
			catch (const std::exception&)
			{
				std::cout << "Error number of course!!!It's not a number or it's too big" << std::endl;
			}
		}

		for (int i = courseIndex - 1; i < size; i++) {
			courses[i] = courses[i + 1];
		}
		--size;
		std::cout << "\nThe course has been removed successfully." << std::endl;
	}
	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::printCourse()
{
	system("cls");
	std::cout << "================== Course Printing ===================\n";
	int courseIndex;
	if (size == 0) {
		std::cout << "Course array is empty, please add courses" << std::endl;
	}
	else
	{
		std::string inputStr = "";
		std::cin.ignore();
		while (true)
		{
			try
			{
				std::cout << "Enter the number of the course you want to print (from 1 to " << size << "): ";
				std::getline(std::cin, inputStr);
				courseIndex = std::stoi(inputStr);
				if (courseIndex > size || courseIndex == 0) {
					std::cout << "Error course number!!!Your number must be > 0 and < " << size + 1 << std::endl;
				}
				if (courseIndex < size + 1 && courseIndex > 0) {
					break;
				}
			}
			catch (const std::exception&)
			{
				std::cout << "Error number of course!!!It's not a number or it's too big" << std::endl;
			}
		}

		std::cout << "------------ Course #" << courseIndex << "------------" << std::endl;
		courses[courseIndex - 1].printCourse();
	}
	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}


void StartApp::editName(int courceIndex) {
	std::cout << "Please enter a new name: ";
	std::cin.ignore();
	char* name = new char;
	std::cin >> name;
	courses[courceIndex - 1].setName(name);
	std::cout << "The Cource Name updated." << std::endl;
	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::editTeacherSurname(int courceIndex) {
	std::cout << "Please enter a new teacher's surname: ";
	char* teacherSurname = new char;
	std::cin >> teacherSurname;
	courses[courceIndex - 1].setTeacherSurname(teacherSurname);
	std::cout << "The Teacher's Surname updated." << std::endl;
	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::editHours(int courceIndex) {
	std::cout << "Please enter a new number of hours: ";
	std::cin.ignore();
	std::string hours = "\0";
	getline(std::cin, hours);
	courses[courceIndex - 1].setHours(hours);
	std::cout << "The Number Of Hours updated." << std::endl;
	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::editListenersNum(int courceIndex) {
	std::cout << "Please enter a new number of listeners: ";
	std::cin.ignore();
	std::string listenersNum = "\0";
	getline(std::cin, listenersNum);
	courses[courceIndex - 1].setListenersNum(listenersNum);
	std::cout << "The Number Of Listeners updated." << std::endl;
	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::printAllCourses()
{
	system("cls");
	std::cout << "===================== Courses" << " ======================" << std::endl << std::endl;
	if (size == 0)
		std::cout << "The array is empty, please add a cource first." << std::endl;
	else
	{
		for (int i = 0; i < size; i++) {
			std::cout << "------------- Course #" << i + 1 << " -------------\n";
			courses[i].printCourse();
		}
	}

	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::sortCourses()
{
	system("cls");
	std::cout << "================== Courses Sorting ===================\n";
	if (size == 0)
		std::cout << "The array is empty, there's nothing to sort." << std::endl;
	else
	{
		std::sort(courses, courses + size, [](const Course& a, const Course& b) {
			return strcmp(a.getName(), b.getName()) < 0;
			});
		std::cout << "The array has been successfully sorted. " << std::endl;
	}

	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}

void StartApp::moreThanListNum()
{
	system("cls");
	std::cout << "================== Courses Printing ===================\n";
	int listenersNum = 0;
	if (size == 0)
		std::cout << "The array is empty, there's nothing to display." << std::endl;
	else {
		std::string inputStr = "";
		std::cin.ignore();
		while (true)
		{
			try
			{
				std::cout << "Enter the listeners number: ";
				std::getline(std::cin, inputStr);
				listenersNum = std::stoi(inputStr);
				break;
			}
			catch (const std::exception&)
			{
				std::cout << "Error number of listeners!!!It's not a number or it's too big" << std::endl;
			}
		}

		for (size_t i = 0; i < size; i++)
		{
			if (courses[i].getListenersNum() > listenersNum) {
				std::cout << "------------ Course #" << i + 1 << " ------------" << std::endl;
				courses[i].printCourse();
			}
		}
	}

	std::cout << "\nPress any button to continue:\n";
	char ch = _getch();
}