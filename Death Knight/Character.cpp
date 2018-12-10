#include"pch.h"
#include"Character.h"

Character::Character()
{
	this->health = 100;
}
Character::Character(string n):Entity(n)
{
	this->health = 100;
	
}

Character::~Character()
{

}
int Character::GetHealth()
{
	return this->health;
}
void Character::Damage(int amount)
{
	this->health -= amount;
}
