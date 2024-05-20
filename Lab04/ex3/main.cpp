#include  <iostream>
#include "BigInt.h"

int main(void)
{
	BigInt a,b,c;
	cout<<"digite um valor para A: "<<"\n";
	cin>>a;
	cout<<"digite um valor para b: "<<"\n";
	cin>>b;
	
	cout<< " + "<<a+b<<"\n";
	cout<<" - "<<a-b<<"\n";
	
	c=a-b;
	
	if(a>b) cout << "a e maior que b"<<"\n";
	if(a<b) cout << "a e menor que b"<<"\n";
	if(a>=b) cout << "a e maior ou igual que b"<<"\n";
	if(a<=b) cout << "a e menor igual que b"<<"\n";
	if(a==b) cout << "a e igual que b"<<"\n";
	if(a!=b) cout << "a e diferente que b"<<"\n";
}
