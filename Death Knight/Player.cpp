#include"pch.h"
#include"Player.h"
//Final Assignment requirement(6)
Player::Player() : Character()
{
	this->currency = 50;
}
Player::Player(string n) : Character(n)
{
	this->currency = 50;
}

Player::~Player()
{

}

//Player Currency

int Player::GetCurrency()
{
	return this->currency;
}
void Player::AddCurrency(int Amount)
{
	this->currency += Amount;
}
void Player::UseCurrency(int Amount)
{
	this->currency -= Amount;
}