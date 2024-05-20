#include "Ponto.h"
int main(void)
{
	Ponto  p1(10,10);
	Ponto  p2(5,5);
	
	cout<< p1<< "e" << p2<<"\n";	
	cout << (p1==p2 ? "iguais\n" : "diferentes\n");
	
	if( p1 != p2)
	{
		cout<<"São diferentes"<<"\n";
	}
	
	cout<<"Digite valores: ";
	cin>> p2;
	
	cout<<"Modulo: "<< p2<< ": "<< (int)p2<<"\n";
	
	cout<<"p1:"<< p1<<"\n";
	cout<<"++p1"<<++p1<<"\n";
	cout<<"p1++"<<p1++<<"\n";
	cout<<"p2:"<< p2<<"\n";
	cout<<"--p1"<<--p2<<"\n";
	cout<<"p1--"<<p2--<<"\n";
}
