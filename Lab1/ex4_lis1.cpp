#include <iostream>
using namespace std;

void printInt( int n, int base )
{ 
	char Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7','8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	if(n >= base)
		printInt(n/base, base);
		cout << n%base << "\n";
	cout << Array[ n % base ] ;
	
}

int main ()
{ 
	int n = 100; 
	int base = 16;
	printInt(n, base);
}


