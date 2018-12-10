#include"pch.h"
#include"Entity.h"

Entity::Entity()
{

}
Entity::Entity(string n)
{
	this->name = n;
}
Entity::~Entity()
{

}
string Entity::GetName()
{
	return this->name;
}
void Entity::SetName(string n)
{
	this->name == n;
}