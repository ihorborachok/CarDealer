#include "Car.h"
#include "Dealer.h"
#include "CarDealer.h"
#include "Command.h"
#include<iostream>
using namespace std;

void showMenu()
{
	Command cmd;

	cout << "Car Dealer Application" << endl;

	Car c;
	int maxLen = 50;
	char* make = new char[maxLen],
		* model = new char[maxLen];

	while(true)
	{
		cout << "1. Show cars." << endl;
		cout << "2. Add new car" << endl;
		cout << "3. Get most popular make" << endl;
		cout << "4. Add dealer" << endl;
		cout << "5. Add car to dealer";
		cout << "6. Add bus";
		cout << "0 - Exit" << endl;

		char userInput;
		cin >> userInput;
		
		bool isExit = false;
		Bus b;

		switch (userInput)
		{
		case '1':
			cmd.WriteAllVehicles();
			break;
		case '2':
			cout << "Enter ca info:" << endl;
			cout << "Make:" << endl;
			cin >> make;
			cout << "Model:" << endl;
			cin >> model;
			c = Car(make, model);

			try
			{
				cmd.AddCar(c);
			}
			catch (const char* err)
			{
				cout << err << endl;
			}
			break;
		case '3':
			cout << "Most popular car is " << cmd.GetMostPopularCarMake() << endl;
			break;
		case '6':
			cmd.AddBus(b);
			break;
		case '0':
			isExit = true;
			break;
		default:
			break;
		}
		
		if (isExit)
			break;

		cout << endl << endl;
	}
	delete[]make;
	delete[]model;
}

int main()
{
	showMenu();
	return 0;
}