#include "CarDealer.h"
#include <iostream>
using namespace std;

CarDealer::CarDealer(Dealer& dealer, Car& car, int price)
{
	this->dealer = dealer;
	this->car = car;
	this->price = price;
}

void CarDealer::Write()
{
	cout << "Car in dealer with price " << price << ":" << endl;
	dealer.Write();
	car.Write();
}