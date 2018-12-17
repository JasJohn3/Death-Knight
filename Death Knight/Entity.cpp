#include"pch.h"
#include"Entity.h"
//Final Assignment requirement(5)
//Final Assignment requirement(6)
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