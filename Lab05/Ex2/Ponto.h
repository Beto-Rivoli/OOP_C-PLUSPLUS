#ifndef PONTO_H
#define PONTO_H

#include <iostream>
#include <cmath>
using namespace std;

class Ponto
{
	private:
		int x,y;
		
		
	public:
		Ponto(int = 0, int = 0);
		~Ponto() {}
		int get_x () {return x;}
		int get_y () {return x;}	
		
		Ponto operator+(Ponto&);

		Ponto operator+(int);

		friend Ponto operator+(int, Ponto&);

		
		bool operator!()  const
		{
			if(x == 0 && y == 0) return true;
			return false;
		}
		 //pre incremento(acontece antes)
		Ponto& operator++();
		//pos acontece dps
		Ponto operator++(int);
		
		Ponto& operator--();
		
		Ponto operator--(int);
		
		explicit operator int ()
		{
			return sqrt(x*x + y*y);
		} 
		
		bool operator==(Ponto& p)
		{
			return (x == p.x && y == p.y);
		}
		
		bool operator!=(Ponto& p)
		{
			return !(*this == p);
		}
		
		friend istream& operator>>(istream& in, Ponto& p); 

		friend ostream& operator<<(ostream& out, const Ponto& p);

};
#endif
