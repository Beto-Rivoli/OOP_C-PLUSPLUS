#include <iostream>
using namespace std;

int mdc(int x, int y)
{
	 if(y==0) return x;
	 return mdc(y,x%y);	
}

int main ()
{ 
	cout << "Digite o primeiro numero para calcular o mdc: ";
	int num;
	cin >> num;
	cout << "Digite o  segundo numero: ";
	int num2;
	cin >> num2;
	cout << "O mdc de " << num << " e "<< num2 <<" e: "<< mdc(num, num2)<<"\n";
	     
}


