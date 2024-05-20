#ifndef POLINOMIO_H
#define POLINOMIO_H
#include <iostream>
using namespace std;
class Polinomio
{
	
	private:
		double *valores;
		int n;
	public:
		Polinomio() 
		{	n = 2;
			valores = new double[n];
			valores[0] = 1;
			valores[1] = 1;
		}
		Polinomio(int g)
		{	
			n = g+1;
			valores = new double[n];
			for(int i=0;i<n;i++)
			{
				valores[i]=1;
			}
				
		}
		//copiando o ponteiro
		Polinomio(const Polinomio& copia)
		{
			n = copia.n;
			valores = new double[n];
			for(int i = 0; i<copia.n;i++)
			{
				valores[i] = copia.valores[i];
			}		
		}
		~Polinomio() {delete[] valores;}
		
		Polinomio operator= (const Polinomio&);
		Polinomio operator+(Polinomio);
		Polinomio operator-(Polinomio);
		
			bool operator < (Polinomio);
			bool operator > (Polinomio);
			bool operator <= (Polinomio);
			bool operator >= (Polinomio);
			bool operator == (Polinomio);
			bool operator != (Polinomio);
				
		
		double& operator[](int pos)
		{
			if(pos>=0 && pos<n) return valores[pos];
			else return valores[0];
		}

		friend ostream& operator << (ostream&, Polinomio&);
	 	friend istream& operator >> (istream&, Polinomio&);
};
#endif
