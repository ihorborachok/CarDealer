#ifndef BUS_H
#define BUS_H

#include<string>
#include<iostream>
#include"Vehicle.h"
using namespace std;

class Bus : public Vehicle
{
public:
	void Write()
	{
		cout << "This is a bus" << endl;
	}
};

#endif // !BUS_H