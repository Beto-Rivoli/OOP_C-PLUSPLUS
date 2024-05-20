#include <iostream>
#include "Retangulo.h"


using namespace std;

int main ()
{
	//Ex 5
	Retangulo vet[5],d1;
	
	
	for(int x=0; x<5;x++)
	{
		vet[x].leitura();	
	}
	
	for(int x=0;x<5; x++)
			vet[x].imprime();
	
	
/*	ex6 OBJ por ponteiro e utilização de met por indicação*/
	Retangulo *ret = new Retangulo;
	ret->leitura();
	ret->imprime();
	delete ret;	
	
		
}
