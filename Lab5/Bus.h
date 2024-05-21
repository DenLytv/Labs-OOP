#pragma once
#include "Car.h"

class Bus : public Car {
public:
	Bus();
	Bus(int speed, std::string model, int passengersCount, double ticketPrice);
	void setPassengersCount(int passengersCount);
	void setTicketPrice(double ticketPrice);
	int getPassengersCount() const;
	double getTicketPrice() const;
	double transportationRevenue() const;
	void inputData() override;
	void print() const override;
	void discount();
private:
	int inputHelper1(std::string label);
	double inputHelper2(std::string label);
	int passengersCount;
	double ticketPrice;
};