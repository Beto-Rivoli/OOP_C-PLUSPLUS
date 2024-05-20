#include <iostream>
using namespace std;

 
int main ()
{ 
	cout << "Digite um numero em binario para calcular o decimal: ";
	int bin;
	cin >> bin;
	int decimal = 0, mult=1;
	for (int i =0; bin >0; i++)
	{
		decimal = decimal + (mult) * (bin %10);

		bin = bin /10;
		
		mult *=2;

	}
	cout<<decimal;
}


