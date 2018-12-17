#ifndef PLAYER_H
#define PLAYER_H

#endif // !PLAYER_H
//Final Assignment requirement(5)
//Final Assignment requirement(6)

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

	//Final Assignment requirement(7) Polymorphism(not implemented in game but is functional and does work.  has been tested. Player.H int GetCurrency() AddCurrency(),UseCurrency()Functions.  

	//They were originally tested in the first build.Removed because I have not implemented a currency reward in the game.

	int GetCurrency();
	void AddCurrency(int Amount);
	void UseCurrency(int Amount);
};