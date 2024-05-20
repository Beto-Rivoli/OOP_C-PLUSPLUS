#include "Polinomio.h"
int main(void)
{
	Polinomio a(3),b(3),c,d;
	//inserindo valores
	cin >> a >> b;
	cout<< a;
	cout<<b;
	if(a==b)
	{
		cout<<"igual\n";
	}else
	{
		cout<<"nao igual\n";
	}
	
	if(a>=b)
	{
		cout<<"maior igual\n";
	}else
	{
		cout<<"nao é maior igual\n";
	}
	if(a<=b)
	{
		cout<<"menor igual\n";
	}else
	{
		cout<<"nao menor igual\n";
	}
	if(a<b)
	{
		cout<<"menor\n";
	}else
	{
		cout<<"nao menor\n";
	}
	if(a>b)
	{
		cout<<"maior\n";
	}else
	{
		cout<<"nao maior\n";
	}
	if(a!=b)
	{
		cout<<"diferentes\n";
	}else
	{
		cout<<"nao diferentes\n";
	}
	//soma
	c = a+b;
	cout << c;
	
	//sub
	d = b-a;
	cout << d;
}
