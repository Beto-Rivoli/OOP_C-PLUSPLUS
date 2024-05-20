#include <iostream>
using namespace std;
class Imaginario{
	private:
		double real, imaginario;
		static int cont;
		
	public:
		//construtor
		Imaginario() 
		{
			real =1;
			imaginario =1;
			cont++;
		};
		Imaginario(int r,int i)
		{
			real = r;
			imaginario = i;
			cont++;
		}
		~Imaginario() {cont--;}
		
		
		
		double getReal() {return real;}
		double getImag() {return imaginario;}
		int getObj(){return cont;}
		
		void setReal(int a) {real = a;}
		void setImag(int a) { imaginario = a;}
		
		Imaginario soma(Imaginario);
		Imaginario sub(Imaginario);
		Imaginario mult(Imaginario);
		Imaginario div(Imaginario);
		
		double modulo();
		void print();
	
		Imaginario operator + (Imaginario);
		Imaginario operator - (Imaginario);
		Imaginario operator * (Imaginario);
		Imaginario operator / (Imaginario);
		
		bool operator == (Imaginario _num) {return ((real == _num.getReal()) && (imaginario == _num.getImag()));}
		bool operator != (Imaginario _num) {return !((*this) == _num);}
		
		friend ostream& operator<<(ostream&, const Imaginario&);
		friend istream& operator>>(istream&, Imaginario&);
};
