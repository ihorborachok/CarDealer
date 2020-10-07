#include "Dealer.h"
#include <iostream>
using namespace std;

Dealer::Dealer(string name, string address)
{
	this->name = name;
	this->address = address;
}

void Dealer::Write()
{
	cout << "Dealer info: " << name << " " << address << endl;
}