#include "Goomba.h"

void Goomba::draw(sf::RenderWindow& t_window)
{
	t_window.draw(m_sprite);
}

void Goomba::setup(sf::Vector2f t_location)
{
	m_sprite.setTexture(textureAtlas);
	m_sprite.setTextureRect(sf::IntRect{ 0,0,52,54 });
	m_location = t_location;
	m_sprite.setPosition(m_location);

}
