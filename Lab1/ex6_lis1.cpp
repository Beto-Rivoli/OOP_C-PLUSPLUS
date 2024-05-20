#include <iostream>
using namespace std;

int soma(int n)
{
	if (n == 0)
		return 0;
	else
		return n+soma(n-1);
		
	
}

int main ()
{ 
	cout << "Digite o numero para a soma dos N numeros: ";
	int num;
	cin >> num;
	cout << "A soma dos primeiros " << num << " numeros e: "<< soma(num)<<"\n";
	
    
     
}


