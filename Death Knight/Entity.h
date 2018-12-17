#ifndef ENTITY_H
#define ENTITY_H

#endif // !ENTITY_H
//Final Assignment requirement(5)
#pragma once
//This is a Master Entity Handler for new objects created in the game
#include<string>
using namespace std;
class Entity
{
protected:
	string name;
public:
	Entity();
	Entity(string n);
	string GetName();
	void SetName(string n);
	~Entity();
};
