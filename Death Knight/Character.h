#ifndef CHARACTER_H
#define CHARACTER_H

#endif // !CHARACTER_H

#pragma once

//Basic Declaration of a Character Class

#include"Entity.h"


class Character: public Entity
{
protected:
	int health;

public:
	Character();
	Character(string n);
	~Character();

	int GetHealth();
	void Damage(int amount);
};