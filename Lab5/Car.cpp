#include "Car.h"

Car::Car() : speed(0), model("\0") {}

Car::Car(int speed, std::string model) {
	setSpeed(speed);
	setModel(model);
}

void Car::setSpeed(int speed)
{
	if (speed < 105 || speed > 447) {
		std::cerr << "Error!!! Your speed value is invalid. Speed is set to default." << std::endl;
		this->speed = 0;
		return;
	}
	this->speed = speed;
}

void Car::setModel(std::string model) {
	if (model.empty() || isspace(model[0]) || ispunct(model[0]) || isdigit(model[0])) {
		std::cerr << "Error!!! Your model is invalid. Model name is set to default." << std::endl;
		this->model = "\0";
		return;
	}
	this->model = model;
}

int Car::getSpeed() const {
	return speed;
}

std::string Car::getModel() const {
	return model;
}

void Car::print() const {
	std::cout << "Model: " << model << std::endl;
	std::cout << "Speed: " << speed << std::endl;
}