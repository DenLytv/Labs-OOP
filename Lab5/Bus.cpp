#include "Bus.h"

Bus::Bus() : passengersCount(0), ticketPrice(0) {
	speed = 0;
	model = "\0";
}

Bus::Bus(int speed, std::string model, int passengersCount, double ticketPrice) {
	setSpeed(speed);
	setModel(model);
	setPassengersCount(passengersCount);
	setTicketPrice(ticketPrice);
}

void Bus::setPassengersCount(int passengersCount) {
	if (passengersCount < 1 || passengersCount > 100) {
		std::cerr << "Error!!! Your passengers count is invalid. Value is set to default." << std::endl;
		this->passengersCount = 0;
		return;
	}
	this->passengersCount = passengersCount;
}

void Bus::setTicketPrice(double ticketPrice) {
	if (ticketPrice < 0.5 || ticketPrice > 5000) {
		std::cerr << "Error!!! Your ticket price is invalid. Value is set to default." << std::endl;
		this->ticketPrice = 0;
		return;
	}
	this->ticketPrice = ticketPrice;
}

int Bus::getPassengersCount() const {
	return passengersCount;
}

double Bus::getTicketPrice() const {
	return ticketPrice;
}

double Bus::transportationRevenue() const {
	if (ticketPrice == 0.0 || passengersCount == 0)
		std::cerr << "Error!!! One or more of the properties is invalid." << std::endl;
	return ticketPrice * passengersCount;
}

void Bus::inputData() {
	std::string model = "\0";
	std::cout << "Enter model: ";
	getline(std::cin, model);
	setModel(model);
	int tmp = inputHelper1("speed");
	setSpeed(tmp);
	tmp = inputHelper1("passengers count");
	setPassengersCount(tmp);
	double ticketPrice = inputHelper2("ticket price");
	setTicketPrice(ticketPrice);
	std::cin.ignore();
}

int Bus::inputHelper1(std::string label) {
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

double Bus::inputHelper2(std::string label) {
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

void Bus::print() const {
	Car::print();
	std::cout << "Passengers count: " << passengersCount << std::endl;
	std::cout << "Ticket price: " << ticketPrice << std::endl;
	std::cout << "Transportation revenue: " << transportationRevenue() << std::endl << std::endl;
}

void Bus::discount() {
	if (ticketPrice == 0.0) {
		std::cerr << "Error!!! Enter valid ticket price." << std::endl;
		return;
	}
	ticketPrice = ticketPrice - ticketPrice * 0.05;
}