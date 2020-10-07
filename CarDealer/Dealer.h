#ifndef DEALER_H
#define DEALER_H

#include<string>
using namespace std;

class Dealer
{
	string name;
	string address;

public:
	Dealer(string = "", string = "Lviv");
	void Write();
};

#endif // !DEALER_H