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
square.setPosition(Vector2f(400.f, 200.f)) // x et y a definir avant ?



// déplacement

void deplacement()
{
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		//  square.setPosition(j-2, i)
	}

	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		//  square.setPosition(x+2, y)
	}

	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		//   square.setPosition(x, y-2)
	}

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		// square.setPosition(x, y+2)
	}
}

int main()
{
	// faire spawn des astéroides aleatoirement 
	bool exit = false;

	while (!exit)
	{
		RectangleShape square(vector2f(40.f, 40.f))
		square.setFillColor(Color Black)
		square.setPosition(Vector2f(x aleatoire, y aleatoire)

			// square mouvement et vitesse
	}

	return 0;
}

// création des ennemis + destructeur : descendent ( si ligne soous laquelle mort auto ou deux modes?) ou immobile

// collisions ( verif de boum )

/* if (collision)
   {
		
   }
*/
