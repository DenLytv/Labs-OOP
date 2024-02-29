#pragma once
#include <string>
#include <iostream>

class Course
{
public:
	Course();
	Course(const char* courseName, const char* teacher, unsigned courseHours, unsigned numListeners);
	void setName(const char* name);
	void setTeacherSurname(const char* teacherSurname);
	void setHours(std::string hours);
	void setListenersNum(std::string listenersNum);
	const char* getName() const;
	const char* getTeacherSurname() const;
	unsigned getHours() const;
	unsigned getListenersNum() const;
	void printCourse() const;
private:
	static const int MAX_LENGTH = 100;
	char name[MAX_LENGTH] = { '\0' };
	char teacherSurname[MAX_LENGTH] = { '\0' };
	unsigned hours = 0;
	unsigned listenersNum = 0;
};