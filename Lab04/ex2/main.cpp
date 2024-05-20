#include <iostream>
#include "Imaginario.h"
using namespace std;

int main (void)
{
	Imaginario a(4,16), b(2,4),aux;
	/*
		cout << "Digite os valores de A e B: ";
		cin >> a >> b;
		cout << "A: " << a << " // B: " << b << endl;
	*/	
	
	a.print();
	
	b.print();
	aux= a+b;
	
	cout<< "A + B: " << a+b<<"\n";
	cout<< " A - B: " << a-b<<"\n";
	cout<< " A * B: " << a*b<<"\n";
	cout<< " A / B: " << a/b<<"\n";
	
	if (a == b) cout<<"a é igual a b" << "\n";
	if (a != b) cout<<"a e diferente de b!" << "\n";
}


