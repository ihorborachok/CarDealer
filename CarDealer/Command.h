#ifndef COMMAND_H
#define COMMAND_H

#include"Car.h"
#include"Bus.h"
#include"CarRepository.h"

class Command
{
	CarRepository carRepository = CarRepository(true);
public:
	Command();
	~Command();

	void AddCar(Car&);
	void AddBus(Bus&);
	void WriteAllVehicles();
	string GetMostPopularCarMake();
};

#endif // !COMMAND_H