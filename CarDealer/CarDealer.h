#ifndef CARDEALER_H
#define CARDEALER_H

#include<string>
#include"Car.h"
#include"Dealer.h"
using namespace std;

class CarDealer
{
	Dealer dealer;
	Car car;
	int price;

public:
	CarDealer(Dealer&, Car&, int);
	void Write();
};

#endif // !CARDEALER_H