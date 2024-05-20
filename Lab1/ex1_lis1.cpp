#include <iostream>
using namespace std;
int main()
{
    cout << "Entre com um numero para fatorial: ";
    int fat,i;
    cin >> fat;
    for  (i = 1; fat>1; fat--)
	{	
		i = fat*i;	
	}
	cout << "o fatorial e " << i <<"\n";
}
