#pragma once
#include <iostream>
#include <string>

class Car
{
public:
	Car();
	Car(int speed, std::string model);
	void setSpeed(int speed);
	void setModel(std::string model);
	int getSpeed() const;
	std::string getModel() const;
	virtual void print() const;
	virtual void inputData() = 0;
protected:
	int speed;
	std::string model;
};