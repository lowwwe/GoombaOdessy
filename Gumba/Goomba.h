#pragma once
#include <SFML/Graphics.hpp>
#include "Globals.h"


class Goomba
{
public:
	void draw(sf::RenderWindow& t_window);
	void setup(sf::Vector2f t_location);

private:
	sf::Vector2f m_location; // location of Goomba
	Direrction m_heading; // direction of walking
	sf::Sprite m_sprite; // sprite
	float leftBoundry; // left barrier
	float rightBoundry; // right barrier
};

