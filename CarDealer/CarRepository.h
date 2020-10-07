#pragma once

#include "Repository.h"
#include "Car.h"

class CarRepository: public Repository
{
public:
	CarRepository(bool sync = false);
	~CarRepository();
	bool Add(Car& car);
	void ReadFromStorage();
	void WriteToStorage();
};