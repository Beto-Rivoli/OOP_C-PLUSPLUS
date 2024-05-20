#include <iostream>
using namespace std;
#ifndef BIGINT_H
#define BIGINT_H
class BigInt
{
private:
	int num[31];
	int len;
	
	void inicializar()
	{
		for(int i = 0; i < 31; i++) num[i] = 0;
	}

public:
	BigInt() {inicializar();}
	~BigInt() {};
	void leia();
	void print();
	BigInt soma(BigInt);
	BigInt subtrai(BigInt);
	
	void palindromo(BigInt);
	
	// operadores
	friend ostream& operator<<(ostream&, const BigInt&);
	friend istream& operator>>(istream&, BigInt&);
	 
	BigInt operator + (BigInt);
	BigInt operator - (BigInt);
	bool operator < (BigInt);
	bool operator > (BigInt);
	bool operator <= (BigInt);
	bool operator >= (BigInt);
	bool operator == (BigInt);
	bool operator != (BigInt);
	BigInt& operator--(); // prefix increment operator
	BigInt operator--(int); // postfix increment operator
	BigInt& operator-=(unsigned int); // adicionar dias, modify object

};
#endif
