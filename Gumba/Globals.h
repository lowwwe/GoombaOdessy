#pragma once


#include <SFML/Graphics.hpp>

enum class Direrction
{
	None,
	Left,
	Right
};

const int NO_OF_GOOMBAS = 3;
extern sf::Texture textureAtlas;  // all textures used in game
