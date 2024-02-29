#include "Course.h"
#include "Course.h"

Course::Course() {}

Course::Course(const char* courseName, const char* teacher, unsigned hours, unsigned listenersNumber)
{
	strncpy_s(name, courseName, MAX_LENGTH - 1);
	name[MAX_LENGTH - 1] = '\0';

	strncpy_s(teacherSurname, teacher, MAX_LENGTH - 1);
	teacherSurname[MAX_LENGTH - 1] = '\0';

	this->hours = hours;
	this->listenersNum = listenersNumber;
}

void Course::setName(const char* name)
{

	if (!isupper(name[0])) {
		std::cerr << "Wrong course name!!! Name set to default" << std::endl << std::endl;
		this->name[0] = '\0';
	}
	else
	{
		strncpy_s(this->name, name, MAX_LENGTH - 1);
		this->name[MAX_LENGTH - 1] = '\0';
	}
}

void Course::setTeacherSurname(const char* teacherSurname)
{
	if (!isupper(teacherSurname[0])) {
		std::cerr << "Wrong teacher surname!!! Surname set to default" << std::endl << std::endl;
		this->teacherSurname[0] = '\0';
		return;
	}
	for (size_t i = 0, l = strlen(teacherSurname); i < l; i++)
	{
		if (isspace(teacherSurname[i]) || isdigit(teacherSurname[i]) || ispunct(teacherSurname[i])) {
			std::cerr << "Wrong teacher surname!!! Surname set to default" << std::endl << std::endl;
			this->teacherSurname[0] = '\0';
			return;
		}
	}
	strncpy_s(this->teacherSurname, teacherSurname, MAX_LENGTH - 1);
	this->teacherSurname[MAX_LENGTH - 1] = '\0';
}

void Course::setHours(std::string hours)
{
	try
	{
		unsigned int result = static_cast<unsigned int>(std::stoul(hours));
		if (result > 250) {
			std::cerr << "Wrong hours number, your number is > 250. Hours number set to default." << std::endl << std::endl;
			this->hours = 0;
			return;
		}
		this->hours = result;
	}
	catch (...)
	{
		std::cerr << "Wrong hours number, your number is too big, < 0 or it's not number. Hours number set to default." << std::endl;
		this->hours = 0;
	}
}

void Course::setListenersNum(std::string listenersNum)
{
	try
	{
		unsigned int result = static_cast<unsigned int>(std::stoul(listenersNum));
		if (result > 500) {
			std::cerr << "Wrong listeners number, your number is > 500. Listeners number set to default." << std::endl << std::endl;
			this->listenersNum = 0;
			return;
		}
		this->listenersNum = result;
	}
	catch (...)
	{
		std::cerr << "Wrong listeners number, your number is too big, < 0 or it's not number. Listeners number set to default." << std::endl;
		this->listenersNum = 0;
	}
}

const char* Course::getName() const
{
	return name;
}

const char* Course::getTeacherSurname() const
{
	return teacherSurname;
}

unsigned Course::getHours() const
{
	return hours;
}

unsigned Course::getListenersNum() const
{
	return listenersNum;
}

void Course::printCourse() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Teacher's surname: " << teacherSurname << std::endl;
	std::cout << "Number of hours: " << getHours() << std::endl;
	std::cout << "Number of listeners : " << getListenersNum() << std::endl << std::endl;
}