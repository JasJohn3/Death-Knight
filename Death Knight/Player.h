#ifndef PLAYER_H
#define PLAYER_H

#endif // !PLAYER_H

#pragma once

#include"Character.h"

class Player :public Character
{
private:
	int currency;
public:
	Player();
	Player(string n);
	~Player();

	int GetCurrency();
	void AddCurrency(int Amount);
	void UseCurrency(int Amount);
};