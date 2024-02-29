#pragma once
#include "Course.h"
#include <conio.h>
#include <algorithm>

class StartApp
{
public:
	StartApp();
	void menu();
private:
	void editName(int courceIndex);
	void editTeacherSurname(int courceIndex);
	void editHours(int courceIndex);
	void editListenersNum(int courceIndex);
	void addCourse();
	void editCourse();
	void deleteCourse();
	void printCourse();
	void printAllCourses();
	void sortCourses();
	void moreThanListNum();

	static const int MAX_SIZE = 10;
	Course courses[MAX_SIZE];
	int size = 0;
};