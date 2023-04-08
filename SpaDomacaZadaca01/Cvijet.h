
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std;


//Prozor 800x600

class Cvijet
{
private:
	sf::CircleShape bud;
	sf::CircleShape sun;
	sf::CircleShape seed;
	sf::CircleShape leaf[2];
	sf::RectangleShape stem;
	sf::RectangleShape ground;
	sf::Clock clock;

public:

	Cvijet(sf::RenderWindow* window);

	void set_bud();
	void set_seed();
	void set_leaf();
	void set_stem();
	void set_ground();
	void set_sun();
	void Animate(sf::Clock& clock);


	void draw(sf::RenderWindow* window);
};