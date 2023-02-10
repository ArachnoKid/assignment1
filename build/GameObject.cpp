#include "GameObject.h"

sf::Vector2f GameObject::GameObjectGetPosition()
{
	return GameObject::sf_position;
}

void GameObject::GameobjectSetPosition(sf::Vector2f pos)
{
	GameObject::sf_position = pos ;
}

string GameObject::GameObjectGetName()
{
	return GameObject::s_name;
}

void GameObject::GameObjectSetName(string Voldemort)
{
	GameObject::s_name = Voldemort;
}

void GameObject::draw()
{
}

