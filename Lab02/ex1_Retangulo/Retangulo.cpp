#include <iostream>
#include "Retangulo.h"


using namespace std;

Retangulo::Retangulo()
{
	alt = 1;
	larg = 1;
	cout<<"Construindo um objeto padrão..."<<"\n";
}

Retangulo::Retangulo(int altura = 1, int largura = 1)
{
	alt = altura;
	larg = largura;
	
	cout<<"Construindo um objeto personalizado..."<<"\n";
}
void Retangulo::imprime()
{
	cout<<"Altura: "<<alt<<" Largura: "<<larg<<"\n";
}

//socorro

int Retangulo::leitura()
{	int larg,alt;

		cout<<"Digite o tamanho: "<<"\n";
		cin>>larg;
		cout<<"Digite a largura: "<<"\n";
		cin>>alt;
		setAlt(alt);
		setLarg(larg);
		return getAlt(),getLarg();
}





int Retangulo::area()
{
	return alt * larg;
}
int Retangulo::perimetro()
{
	return ((alt*2)+(larg*2));
}

int Retangulo::getAlt()
{
	return alt;
}
int Retangulo::getLarg()
{
	return larg;
}
void Retangulo::setAlt(int altu)
{
	if(altu>=1 && altu<=20)
	{
		alt=altu;
	}
}
void Retangulo::setLarg(int largu)
{
	if(largu>=1 && largu<=20)
	{
		larg = largu;
	}
}




void Retangulo::desenha()
{
 //tabela
 int i,j;
    cout << "Digite o caractere da borda: ";
    	char borda;
    	cin >> borda;	    
    cout << "Digite o caractere de preenchimento: ";
    	char dentro;
    	cin >> dentro;
	cout << "Deseja preencher? (Y/N): ";
		char opc;
		cin >> opc;
		
    for(int x=0; x<larg; x++)
        cout << borda;
    cout << "\n";
    for(i=0;i<alt-2;i++)
    {
        cout << borda;
		if(opc =='y'or opc == 'Y')
		{
			for(int x = 0; x<larg-2; x++)
			{
				cout << dentro;
             	j++;
        	}
        }
        else
        {
	        for(int x = 0; x<larg-2; x++)
			{
				cout << " ";
	            j++;
	        }	
		}
        cout << borda << "\n";
    }


    for(int x=0; x<larg; x++)
        cout << borda;	
}
