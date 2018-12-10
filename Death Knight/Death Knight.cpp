// Death Knight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Player.h"

int main()
{
	string character_name;
	cout << "Please Enter a Name for your Character: " << flush;
	cin >> character_name;

	
	Player p = Player(character_name);

	cout << "Your Character Name is " << p.GetName() << endl;
	cout << "Your Health is " << p.GetHealth() << endl;
	cout << "You Have " << p.GetCurrency() << " Blood Magic too spend." << endl;
	p.UseCurrency(25);
	cout << "Blood Magic: " << p.GetCurrency() << endl;
	p.AddCurrency(100);
	cout << "Blood Magic: " << p.GetCurrency() << endl;
	system("pause");
	return 0;
}

