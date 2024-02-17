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

void Goomba::setBoundry(float t_value, bool t_isLeft)
{
	if (t_isLeft && (t_value < m_rightBoundry || m_rightBoundry == -1.0f))
	{
		m_leftBoundry = t_value;
	}
	if (!t_isLeft && t_value > m_leftBoundry)
	{
		m_rightBoundry = t_value;
	}
}

void Goomba::move()
{
	if (m_heading == Direrction::Right)
	{
		m_location.x += 1.2f;

	}
	if (m_heading == Direrction::Left)
	{
		m_location.x -= 1.2f;
	}

}

void Goomba::update()
{
	move();
	checkBoundry();
	m_sprite.setPosition(m_location);
}

void Goomba::checkBoundry()
{
	if (m_heading == Direrction::Right && m_location.x > m_rightBoundry)
	{
		m_heading = Direrction::Left;
	}
	if (m_heading == Direrction::Left && m_location.x < m_leftBoundry)
	{
		m_heading = Direrction::Right;
	}
}
