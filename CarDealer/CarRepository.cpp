#include "CarRepository.h"
#include <fstream>
using namespace std;

CarRepository::CarRepository(bool sync) : Repository(sync)
{
	ReadFromStorage();
}

CarRepository::~CarRepository()
{

}

bool CarRepository::Add(Car& car)
{
	return Repository::Add(&car);
}

void CarRepository::ReadFromStorage()
{
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

		Car* car = new Car(make, model, atoi(year), color, atoi(maxSpeed), atof(engineCapacity));
		Add(*car);
	}

	fin.close();

	delete[] make;
	delete[] model;
	delete[] year;
	delete[] color;
	delete[] maxSpeed;
	delete[] engineCapacity;
}

void CarRepository::WriteToStorage()
{
	ofstream fout("Car.txt");

	for (int i = 0; i <= current; i++)
	{
		Car* car = (Car*)data[i];

		fout << car->GetMake() << ","
			<< car->GetModel() << ","
			<< car->GetYear() << ","
			<< car->GetColor() << ","
			<< car->GetMaxSpeed() << ","
			<< car->GetEngineCapacity();

		if (i < current)
			fout << endl;
	}

	fout.close();
}