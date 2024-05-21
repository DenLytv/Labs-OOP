#include "Truck.h"

Truck::Truck() : carryingCapacity(0), cargoVolume(0), distance(0), transportationCost(0) {
	speed = 0;
	model = "\0";
}

Truck::Truck(int speed, std::string model, int carryingCapacity, int cargoVolume, int distance, double transportationCost) {
	setSpeed(speed);
	setModel(model);
	setCarryingCapacity(carryingCapacity);
	setCargoVolume(cargoVolume);
	setDistance(distance);
	setTransportationCost(transportationCost);
}

void Truck::setCarryingCapacity(int carryingCapacity) {
	if (carryingCapacity < 8 || carryingCapacity > 44) {
		std::cerr << "Error!!! Your carrying capacity value is invalid. Value is set to default." << std::endl;
		this->carryingCapacity = 0;
		return;
	}
	this->carryingCapacity = carryingCapacity;
}

void Truck::setCargoVolume(int cargoVolume) {
	if (carryingCapacity == 0) {
		std::cerr << "Error!!! Enter valid carrying capacity value. Value is set to default." << std::endl;
		this->cargoVolume = 0;
		return;
	}
	else if (cargoVolume < 1 || cargoVolume > carryingCapacity) {
		std::cerr << "Error!!! Your cargo volume value is invalid. Value is set to default." << std::endl;
		this->cargoVolume = 0;
		return;
	}
	this->cargoVolume = cargoVolume;
}

void Truck::setDistance(int distance) {
	if (distance < 10 || distance > 25000) {
		std::cerr << "Error!!! Your distance value is invalid. Value is set to default." << std::endl;
		this->distance = 0;
		return;
	}
	this->distance = distance;
}

void Truck::setTransportationCost(double transportationCost) {
	if (transportationCost < 10 || transportationCost > 5000) {
		std::cerr << "Error!!! Your transportation cost is invalid. Value is set to default." << std::endl;
		this->transportationCost = 0.0;
		return;
	}
	this->transportationCost = transportationCost;
}

int Truck::getCarryingCapacity() const {
	return carryingCapacity;
}

int Truck::getCargoVolume() const {
	return cargoVolume;
}

int Truck::getDistance() const {
	return distance;
}

double Truck::getTransportationCost() const {
	return transportationCost;
}

double Truck::transportationRevenue() const {
	if (transportationCost == 0.0 || distance == 0 || cargoVolume == 0)
		std::cerr << "Error!!! One or more of the properties is invalid." << std::endl;
	return transportationCost/10 * distance * cargoVolume;
}

void Truck::inputData() {
	std::string model = "\0";
	std::cout << "Enter model: ";
	getline(std::cin, model);
	setModel(model);
	int tmp = inputHelper1("speed");
	setSpeed(tmp);
	tmp = inputHelper1("carrying capacity");
	setCarryingCapacity(tmp);
	tmp = inputHelper1("cargo volume");
	setCargoVolume(tmp);
	tmp = inputHelper1("distance");
	setDistance(tmp);
	double transportationCost = inputHelper2("transportation cost");
	setTransportationCost(transportationCost);
	std::cin.ignore();
}

int Truck::inputHelper1(std::string label) {
	int tmp;
	while (true) {
		std::cout << "Enter " << label << ": ";
		std::cin >> tmp;
		if (std::cin.fail()) {
			std::cerr << "Invalid input. Please enter a valid number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	return tmp;
}

double Truck::inputHelper2(std::string label) {
	double tmp;
	while (true) {
		std::cout << "Enter " << label << ": ";
		std::cin >> tmp;
		if (std::cin.fail()) {
			std::cerr << "Invalid input. Please enter a valid number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	return tmp;
}

void Truck::print() const {
	Car::print();
	std::cout << "Carrying capacity: " << carryingCapacity << std::endl;
	std::cout << "Cargo volume: " << cargoVolume << std::endl;
	std::cout << "Distance: " << distance << std::endl;
	std::cout << "Transportation revenue: " << transportationRevenue() << std::endl << std::endl;
}