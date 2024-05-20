#include <iostream>
#include "Polinomio.h"


Polinomio Polinomio::operator+(Polinomio pol)
{	//cria um objeto pra determianr o tamanho do polinomio (novo)
	//verifica qual entre os dois é maior
	Polinomio temp(max(pol.n, n)-1);
	
	int i;
	//Realiza a soma entra A e B
	for(i = 0; i < min(pol.n, n); i++)
		temp[i] = pol.valores[i] + valores[i];
	//Verifica qual dos polinomios é maior e insere o restante 
	if(pol.n > n)
		for(int j = i; j < pol.n; j++)
			temp[j] = pol.valores[j];
	else
		for(int j = i; j < n; j++)
			temp[j] = valores[j];
	return temp;	
}

Polinomio Polinomio::operator-(Polinomio pol)
{	//cria um objeto pra determianr o tamanho do polinomio (novo)
	//verifica qual entre os dois é maior
	Polinomio temp(max(pol.n, n)-1);
	
	int i;
	//Realiza a subtraçãp entra A e B
	for(i = 0; i < min(pol.n, n); i++)
		temp[i] = valores[i] - pol.valores[i];
	//Verifica qual dos polinomios é maior e insere o restante 
	if(pol.n > n)
		for(int j = i; j < pol.n; j++)
			temp[j] = - pol.valores[j];
	else
		for(int j = i; j < n; j++)
			temp[j] = valores[j];
	return temp;	
}
Polinomio Polinomio::operator=(const Polinomio& pol)
{
	//limpando o ponteiroantigo
	delete [] valores;
	n = pol.n;
	//criando um novo vetor de valores
	valores = new double[n];
	for(int i =0; i < n; i++)
	{	//copaindo os valores da operção para o novo vetor
		valores[i] = pol.valores[i];
	}
	//retornando o vetor ptr
	return *this;
}

	bool Polinomio::operator < (Polinomio numero)
	{
		if(numero.n<n )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool Polinomio::operator >(Polinomio numero)
	{
			if(numero.n>n)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool Polinomio::operator == (Polinomio numero)
	{
	 	if(n == numero.n)
		{	
			if(valores[n-1] == numero[numero.n-1])
			{ 
				return true;
			}else
			{
				return false;
			}
			
		}
		else
		{
			return false;
		}
	}
	
	bool Polinomio::operator <= (Polinomio numero)
	{
			if(numero.n<=n)
		{
			if(valores[n-1] <= numero[numero.n-1])
			{ 
				return true;
			}else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		
	}
	bool Polinomio::operator >= (Polinomio numero)
	{
			if(numero.n>=n)
		{
			if(valores[n-1] >= numero[numero.n-1])
			{ 
				return true;
			}else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		
	}
	bool Polinomio::operator != (Polinomio numero)
	{
			if(numero.n!=n)
		{
			return true;
		}
		else
		{
			if(valores[n-1] != numero[numero.n-1])
			{ 
				return true;
			}else
			{
				return false;
			}
		}
	}





istream& operator >> (istream& input, Polinomio& pol)
{
	cout << "Polinomio: C0 + C1x1 + C2x2 + ... + Cnxn = 0" << endl;
	for(int i = 0; i < pol.n; i++)
	{
		cout << "Digite o valor de C" << i << ": ";
		input >> pol[i];
	}
	return input;
}
ostream& operator << (ostream& output, Polinomio& pol)
{
	for(int i = 0; i < pol.n; i++){
		if(i != pol.n-1) output << pol[i] << "x^" << i << " + ";
		else output << pol[i] << "x^" << i << " = 0\n";
	}
return output;
}

