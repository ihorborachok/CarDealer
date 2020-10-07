#ifndef CAR_H
#define CAR_H

#include<string>
#include"Vehicle.h"
using namespace std;

class Car : public Vehicle
{
	string make;
	string model;
	int year;
	string color;
	int maxSpeed;
	float engineCapacity;

public:
	Car(string = "", string = "", int = 2020, string = "black",
		int = 200, float = 2);

	void Write();

	//getters
	string GetMake();
	string GetModel();
	int GetYear();
	string GetColor();
	int GetMaxSpeed();
	float GetEngineCapacity();
};

#endif // !CAR_H