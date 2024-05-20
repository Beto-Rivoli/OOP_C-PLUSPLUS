#include "Ponto.h"
#include <cmath>

Ponto::Ponto(int xx, int yy) : x{xx}, y{yy} {}
Ponto Ponto::operator+(Ponto& p) {
	int xx = x + p.x;
	int yy = y + p.y;
	return Ponto{xx, yy};
}
// operações do tipo Point + int
Ponto Ponto::operator+(int value)
{
	int xx = x + value;
	int yy = y + value;
	return Ponto{xx, yy};
}

// Função global: operações do tipo int + Point
Ponto operator+(int value, Ponto& p) 
{
	int xx = p.x + value;
	int yy = p.y + value;
	return Ponto{xx, yy};
}

ostream& operator<<(ostream& out, const Ponto& p) {
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}
istream& operator>>(istream& in, Ponto& p) {
	in >> p.x >> p.y;
	return in;
}

Ponto& Ponto::operator++()
{
	x++;
	y++;
	return *this;
}
Ponto Ponto::operator++(int valor)
{
	Ponto temp = *this;
	++(*this);
	return temp;
}
Ponto& Ponto::operator--()
{
	x--;
	y--;
	return *this;
}
Ponto Ponto::operator--(int valor)
{
	Ponto temp = *this;
	--(*this);
	return temp;
}
	
		
