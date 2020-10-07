#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string make, string model, int year, string color,
	int maxSpeed, float engineCapacity)
{
	this->make = make;
	this->model = model;
	this->year = year;
	this->color = color;
	this->maxSpeed = maxSpeed;
	this->engineCapacity = engineCapacity;
}

void Car::Write()
{
	cout << "Car info: " << make << " " << model << " " << year << endl;
}

string Car::GetMake()
{
	return make;
}
string Car::GetModel()
{
	return model;
}
int Car::GetYear()
{
	return year;
}
string Car::GetColor()
{
	return color;
}
int Car::GetMaxSpeed()
{
	return maxSpeed;
}
float Car::GetEngineCapacity()
{
	return engineCapacity;
}