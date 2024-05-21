#include "B1.h"
#include "Truck.h"
#include "Bus.h"

int main() {
	/*D3 d3;
	d3.show();*/
	Truck truck(200, "AUDI", 20, 10, 50, 100);
	truck.print();
	truck.inputData();
	truck.print();
	Bus bus(200, "Bohdan", 50, 5);
	bus.print();
	bus.discount();
	bus.print();
	bus.inputData();
	bus.print();
}