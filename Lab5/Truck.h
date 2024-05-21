#pragma once
#include "Car.h"

class Truck : public Car {
public:
	Truck();
	Truck(int speed, std::string model, int carryingCapacity, int cargoVolume, int distance, double transportationCost);
	void setCarryingCapacity(int carryingCapacity);
	void setCargoVolume(int cargoVolume);
	void setDistance(int distance);
	void setTransportationCost(double transportationCost);
	int getCarryingCapacity() const;
	int getCargoVolume() const;
	int getDistance() const;
	double getTransportationCost() const;
	double transportationRevenue() const;
	void inputData() override;
	void print() const override;
private:
	double inputHelper2(std::string label);
	int inputHelper1(std::string label);
	int carryingCapacity;
	int cargoVolume;
	int distance;
	double transportationCost;
};