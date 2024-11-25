#include<SFML/Graphics.hpp>
using namespace sf;
#include<iostream>
using namespace std;

// jeu de deplacement: PROJET

// Fenetre
RenderWindow window(VideoMode(800, 600), "Fenêtre shoot em up SFML ");

// creation du carre shooter

RectangleShape square(vector2f(40.f, 40.f))
square.setFillColor(Color Orange)
square.setPosition(Vector2f(400.f, 200.f))



// déplacement

void deplacement()
{
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		// x -= 2
	}

	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		// x += 2
	}

	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		// y -= 2
	}

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		// y += 2
	}
}


int main()
{
	return 0;
}

// création des ennemis + destructeur : descendent ( si ligne soous laquelle mort auto ou deux modes?) ou immobile

// collisions ( verif de boum )

/* if (collision)
   {
		
   }
*/
