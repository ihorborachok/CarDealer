#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
#include "Entity.h"
using namespace std;

class Vehicle : public Entity
{
public:
	virtual void Write()
	{}
};

#endif // !VEHICLE_H