#include <iostream>
#include "Cfracao.h"
using namespace std;

int main()
{
	/* 
		CFracao p1,p2;
		cout << "Digite a fracao A: "<<"\n";
		cin>> p1;
		cout << "Digite a fracao B: "<<"\n";
		cin>> p2;
	*/
	
	
	
	CFracao p1(6,3);
	CFracao p2(6,3);
	cout<< "Numerador " <<p1.getNumerador() << " e denominador " << p1.getDenominador()<<"\n";
	
	cout << " + " << p1 + p2<< "\n";
	cout << " - " << p1 - p2<< "\n";
	cout << " * " << p1 * p2<< "\n";
	cout << " / " << p1 / p2<< "\n";
	
	if(p1<p2) cout<<"A e menor que B" << "\n";
	if(p1>p2) cout<<"A e maior que B" << "\n";
	if(p1<=p2) cout<<"A e menor eou igual a B" << "\n";
	if(p1>=p2) cout<<"A e maior ou igual que B" << "\n";
	if(p1==p2) cout<<"A e igual a B" << "\n";
	if(p1!=p2) cout<<"A e diferente de B" << "\n";
}
