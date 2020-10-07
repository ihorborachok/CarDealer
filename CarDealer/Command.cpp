#include "Command.h"
#include <iostream>
#include <fstream>
using namespace std;

Command::Command()
{}

Command::~Command()
{}

void Command::AddCar(Car& car)
{
	carRepository.Add(car);
}

void Command::AddBus(Bus& bus)
{
	//todo
}

void Command::WriteAllVehicles()
{
	//todo
}

string Command::GetMostPopularCarMake()
{
	int maxNrMake = -1;
	string maxMake = "";

	/*for (int i = 0; i <= lastCarIndex; i++)
	{
		int nrOfMakes = 0;
		for (int j = i + 1; j <= lastCarIndex; j++)
		{
			if (cars[i].GetMake() == cars[j].GetMake())
				nrOfMakes++;
		}
		if (nrOfMakes > maxNrMake)
		{
			maxNrMake = nrOfMakes;
			maxMake = cars[i].GetMake();
		}
	}*/

	return maxMake;
}