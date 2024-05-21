#pragma once
#include <iostream>
#include <exception>
#include <cmath>
#include <string>

class Clock
{
public:
	Clock();
	Clock(int hours, int minutes, int seconds);
	void setHours(int hours);
	void setMinutes(int minutes);
	void setSeconds(int seconds);
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;
	void printTime() const;
private:
	int hours;
	int minutes;
	int seconds;
};