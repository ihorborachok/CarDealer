#ifndef COMMAND_H
#define COMMAND_H

#include"Car.h"
#include"Bus.h"

class Command
{
	Vehicle** vehicles;
	int lastCarIndex;

	void AddVehicle(Vehicle&);
public:
	Command();
	~Command();

	void AddCar(Car&);
	void AddBus(Bus&);
	void WriteAllVehicles();
	string GetMostPopularCarMake();
};

#endif // !COMMAND_H