#include "Command.h"
#include <iostream>
#include <fstream>
using namespace std;

Command::Command()
{
	vehicles = new Vehicle*[100];
	lastCarIndex = -1;

	ifstream fin("Car.txt");

	int maxLen = 50;
	char* make = new char[maxLen],
		* model = new char[maxLen],
		* year = new char[maxLen],
		* color = new char[maxLen],
		* maxSpeed = new char[maxLen],
		* engineCapacity = new char[maxLen];

	char delim = ',';
	while (!fin.eof()) //while(fin) while(fin.get())...
	{
		fin.get(make, maxLen, delim);
		fin.get(); //read delim
		fin.get(model, maxLen, delim);
		fin.get();
		fin.get(year, maxLen, delim);
		fin.get();
		fin.get(color, maxLen, delim);
		fin.get();
		fin.get(maxSpeed, maxLen, delim);
		fin.get();
		fin.getline(engineCapacity, maxLen);

		Car *car = new Car(make, model, atoi(year), color, atoi(maxSpeed), atof(engineCapacity));
		AddCar(*car);
	}

	fin.close();

	delete[] make;
	delete[] model;
	delete[] year;
	delete[] color;
	delete[] maxSpeed;
	delete[] engineCapacity;
}

Command::~Command()
{
	/*ofstream fout("Car.txt");

	for (int i = 0; i <= lastCarIndex; i++)
	{
		fout << cars[i].GetMake() << ","
			<< cars[i].GetModel() << ","
			<< cars[i].GetYear() << ","
			<< cars[i].GetColor() << ","
			<< cars[i].GetMaxSpeed() << ","
			<< cars[i].GetEngineCapacity();

		if (i < lastCarIndex)
			fout << endl;
	}

	fout.close();

	delete[] cars;*/
	delete[] vehicles;
}

void Command::AddCar(Car& car)
{
	AddVehicle(car);
}

void Command::AddBus(Bus& bus)
{
	AddVehicle(bus);
}


void Command::AddVehicle(Vehicle& vehicle)
{
	if (lastCarIndex >= 100)
	{
		throw "no memory for cars!!!";
	}

	vehicles[++lastCarIndex] = &vehicle;
}


void Command::WriteAllVehicles()
{
	cout << "Vehicles:" << endl;
	for (int i = 0; i <= lastCarIndex; i++)
	{
		vehicles[i]->Write();
	}
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