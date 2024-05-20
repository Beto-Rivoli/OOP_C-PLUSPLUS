#include <iostream>
#include <cmath>
#include "poligono.h"

using namespace std;

poligono::poligono(int n, int b)
{
	this->n=n;
	this->b=b;
}
void poligono::setLados(int la)
{
	if(la>=3)
	{
		n=la;
	}
	
}

void poligono::setComp(int comp)
{
	if(comp>0)
	{
		b=comp;
	}
}

float poligono::getLados()
{
	return n;
	
}

float poligono::getComp()
{
	return b;
}


float  poligono::area ()
{
	return ((n*(b*b)*0.25) * (cos(3.1415/n)/sin(3.1415/n)));	
}

float poligono::perimetro()
{
	return n*b;	
}

string poligono::nome()
	{
		    switch(n)
		{
			case 3: 
				return "Triangulo";
			case 4: 
				return "Quadrado";
	
			case 5: 
				return "Pentagono";

			case 6: 
				return "Hexagono";

			case 7:
				return "Heptagono";

			case 8: 
				return "Octogono";

			case 9: 
				return "Eneagono";

			case 10:
				return "Decagono";

		}
	}




