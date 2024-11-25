#include<SFML/Graphics.hpp>
using namespace sf;
#include<iostream>
using namespace std;

class Plane
{
private:
	bool type;
	int x, y;

public:
	
	Plane(int v) : x(v), y(v) {}

	~Plane()
	{
		cout << " un avion a ete detruit " << endl;
	}

	// déplacement
	void deplacement()
	{
		if (Keyboard::isKeyPressed(Keyboard::Left))
		{
			// x += 2
		}

		if (Keyboard::isKeyPressed(Keyboard::Right))
		{
			// x -= 2
		}
	}
};


int main()
{
	return 0;
}
// création des ennemis + destructeur : descendent ( si ligne soous laquelle mort auto ou deux modes?) ou immobile

// collisions ( verif de boum )
