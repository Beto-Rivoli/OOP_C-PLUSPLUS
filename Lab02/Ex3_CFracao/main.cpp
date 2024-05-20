#include <iostream>
#include "CFracao.h"
using namespace std;

int main()
{
	CFracao p1(6,3);
	CFracao p2(6,3);
	cout<< "Numerador " <<p1.getNumerador() << " e denominador " << p1.getDenominador()<<"\n";
	
	CFracao p3 = p1.Somar(p2);
	p3.Print();
	cout<<"\n";
	
	p3 = p1.Subtrair(p2);
	p3.Print();
	cout<<"\n";
	
	p3 = p1.Multiplicar(p2);
	p3.Print();
	cout<<"\n";
	
	p3 = p1.Dividir(p2);
	p3.Print();
	cout<<"\n";	
	
	cout<<p1.ComoFloat();

	cout<<"\n";		
	
	if(p1.Igual(p3))
	{
		cout<<"p1: "; p1.Print(); cout<<" igual a p3\n";
	}else
	{
		cout<<"p1: "; p1.Print(); cout<<" diferente de p3 "; p3.Print(); cout<<"\n";
	}	
	
	if(p1.MaiorQue(p3))
	{
		cout<<"p1: "; p1.Print(); cout<<" maior que p3\n";
	}else
	{
		cout<<"p3: "; p3.Print(); cout<<" maior que p1\n";
	}
	
	if(p1.MenorQue(p3))
	{
		cout<<"p1: "; p1.Print(); cout<<" menor que p3\n";
	}else
	{
		cout<<"p3: "; p3.Print(); cout<<" menor que p1\n";
	}
	
	


















	
}
