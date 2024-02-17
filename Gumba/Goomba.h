#pragma once
#include <SFML/Graphics.hpp>
#include "Globals.h"


class Goomba
{
public:
	void draw(sf::RenderWindow& t_window);
	void setup(sf::Vector2f t_location);
	Direrction m_heading; // direction of walking
	void setBoundry(float t_value, bool t_isLeft);
	void move();
	void update();
	void checkBoundry();
private:
	sf::Vector2f m_location; // location of Goomba
	
	sf::Sprite m_sprite; // sprite
	float m_leftBoundry{ -1.0f}; // left barrier
	float m_rightBoundry{-1.0f}; // right barrier
};

