#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
	set_bud();
	set_seed();
	set_leaf();
	set_stem();
	set_ground();
	set_sun();
	sf::Clock clock = this->clock;
}

void Cvijet::set_bud()
{

	sf::CircleShape circle(70.f, 32);
	circle.setFillColor(sf::Color(222, 138, 93));
	circle.setPosition(100.f, 80.f);
	circle.setOutlineColor(sf::Color(255, 255, 0));
	circle.setOutlineThickness(10.f);
	this->bud = circle;
}

void Cvijet::set_seed()
{

	sf::CircleShape seed(20.f, 9);
	seed.setFillColor(sf::Color(46, 30, 15));
	seed.setPosition(150.f, 130.f);
	this->seed = seed;
}

void Cvijet::set_leaf()
{

	sf::CircleShape triangle(40, 4);
	triangle.setFillColor(sf::Color(15, 245, 5));
	triangle.setPosition(165.f, 230.f);
	triangle.scale(sf::Vector2f(1.15, 0.5));
	triangle.rotate(48.f);
	this->leaf[0] = triangle;

	sf::CircleShape triangleP(40, 4);
	triangleP.setFillColor(sf::Color(15, 245, 5));
	triangleP.setPosition(190.f, 290.f);
	triangleP.scale(sf::Vector2f(1.25, 0.5));
	triangleP.rotate(-45.f);
	this->leaf[1] = triangleP;
}

void Cvijet::set_stem()
{

	sf::Vector2f v(14.f, 330.f);
	sf::RectangleShape stem;
	stem.setFillColor(sf::Color(9, 255, 5));
	stem.setSize(v);
	stem.setRotation(-18.f);
	stem.setPosition(180.f, 228.f);
	this->stem = stem;
}

void Cvijet::set_ground()
{

	sf::Vector2f l(800.f, 200.f);
	sf::Texture gro;
	sf::RectangleShape ground;
	ground.setFillColor(sf::Color(73, 32, 0));
	ground.setSize(l);
	ground.setPosition(0.f, 500.f);
	this->ground = ground;

}

void Cvijet::set_sun()
{

	sf::Clock clock;
	sf::CircleShape sun(65.f, 125);
	sun.setFillColor(sf::Color(252, 212, 64));
	sun.setPosition(600.f, 20.f);
	this->sun = sun;
}

void Cvijet::draw(sf::RenderWindow* window)
{
	window->draw(this->bud);
	window->draw(this->stem);
	window->draw(this->seed);
	window->draw(this->ground);
	window->draw(this->leaf[0]);
	window->draw(this->leaf[1]);
	window->draw(this->sun);

}

void Cvijet::Animate(sf::Clock& clock)
{
	cout << clock.getElapsedTime().asSeconds() << endl;


	if (clock.getElapsedTime().asSeconds() < 1)
	{

		sun.setFillColor(sf::Color(252, 212, 64));
		ground.setFillColor(sf::Color(73, 32, 0));
		sun.setRadius(70);

	}

	if (clock.getElapsedTime().asSeconds() >= 1)
	{

		sun.setFillColor(sf::Color(155, 0, 0));
		ground.setFillColor(sf::Color(153, 121, 80));
		sun.setRadius(90);

	}

	if (clock.getElapsedTime().asSeconds() >= 2)
	{

		sun.setFillColor(sf::Color(55, 255, 100));
		ground.setFillColor(sf::Color::Green);
		sun.setRadius(110);

	}

	if (clock.getElapsedTime().asSeconds() >= 3)
	{




		clock.restart();
	}

}