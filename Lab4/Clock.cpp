#include "Clock.h"

Clock::Clock(): hours(0), minutes(0), seconds(0) {}

Clock::Clock(int hours, int minutes, int seconds) {
	setHours(hours);
	setMinutes(minutes);
	setSeconds(seconds);
}

void Clock::setHours(int hours) {
	if (hours < 0 || hours > 23) throw std::invalid_argument("Error!!! Your hours value must be from 0 to 23.");
	this->hours = hours;
}

void Clock::setMinutes(int minutes) {
	if (minutes < 0 || minutes > 59) throw std::invalid_argument("Error!!! Your minutes value must be from 0 to 59.");
	this->minutes = minutes;
}

void Clock::setSeconds(int seconds) {
	if (seconds < 0 || seconds > 59) throw std::invalid_argument("Error!!! Your seconds value must be from 0 to 59.");
	this->seconds = seconds;
}

int Clock::getHours() const {
	return hours;
}

int Clock::getMinutes() const {
	return minutes;
}

int Clock::getSeconds() const {
	return seconds;
}

void Clock::printTime() const {
	if (hours < 10) std::cout << "0";
	std::cout << hours << " : ";
	if(minutes < 10) std::cout << "0";
	std::cout << minutes << " : ";
	if(seconds < 10) std::cout << "0";
	std::cout << seconds << std::endl;
}