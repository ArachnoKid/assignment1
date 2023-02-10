#pragma once
#include<string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

using namespace std;

class GameObject
{
protected:
	string s_imagelocation;
	sf::Vector2f sf_position;
	string s_name;
public: 
	GameObject();
	~GameObject();
	sf::Vector2f GameObjectGetPosition();
	void GameobjectSetPosition(sf::Vector2f);
	string GameObjectGetName();
	void GameObjectSetName(string);
	virtual void draw();
};

