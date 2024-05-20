#include <iostream>
#include <string>
#include <vector>
#include "BigInt.h"
using namespace std;

	void BigInt::palindromo(BigInt vet)
	{	
		for (int i = 0; i < len; i++) {
	        if (num[i] != num[len - i - 1]) {
	            cout<< "nao e\n";
	            break;
	        }else
	        {
	        	cout<<"é um palindromo\n";
	        	break;

			}
	    }
    	
	}
	
BigInt& BigInt::operator--() {
	BigInt cont;
	cont.num[0]=1;
	cont.len=1;
	
	*this=this->subtrai(cont);
	//cont - *this;
	
 	return *this; 
}

BigInt BigInt::operator--(int) {
	 BigInt temp (*this); 
	 --(*this);
	 return *this; 
}

BigInt& BigInt::operator-=(unsigned int quantidade) {
	 for (unsigned int i = 0; i < quantidade; ++i) 
	 {
	 	--(*this);
	 }
	 return *this; // enables cascading
}




	void BigInt::leia()
	{
		string a;
		cin >> a;
		len = a.length();
		for(int i = 0; i < len; i++)
		{
			num[i] = a[len-i-1] - '0';
		}
	}
	void BigInt::print()
	{
		for(int i = len-1; i >= 0; i--)
			cout << num[i];
			cout << endl;
	}
	
	BigInt BigInt::soma(BigInt b)
	{
		BigInt c;
		c.len = 0;
		for(int i = 0, vaiUm = 0; vaiUm || i < max(len, b.len); i++)
		{
			int x = vaiUm;
			if(i < len) x += num[i];
			if(i < b.len) x += b.num[i];
			c.num[c.len++] = x % 10;
			vaiUm = x / 10;
		}
		return c;
	}
	
	BigInt BigInt::subtrai(BigInt b) 
	{
		BigInt c;
		c.len = 0;
		for(int i = 0; i < max(len, b.len); i++)
		{
			int x = 0;
			if(i < len) x += num[i];
			if(i < b.len)
			{
				if(num[i] >= b.num[i])
					x -= b.num[i];
				else
				{
					x += 10 - b.num[i];
					num[i+1]--;
				}
			}
			c.num[c.len++] = x;
		}
		return c;
	}
	
	BigInt BigInt::operator + (BigInt b) 
	{
		return this->soma( b );
	}
	BigInt BigInt::operator-(BigInt b)
	{
		return this->subtrai(b);
	}


	bool BigInt::operator < (BigInt numero)
	{
		if (len != numero.len)
		{
			if(len > numero.len)
			{
				return false;	
			}else
			{
				return  true;				
			}

		}else
		{
			for(int i = len-1; i>=0; i--)
			{
				if(num[i] < numero.num[i]) return true;
			}
			
		}
		return false;
	}
	
	bool BigInt::operator >(BigInt numero)
	{
		if (len != numero.len)
		{
			if(len > numero.len)
			{
				return false;	
			}else
			{
				return  true;				
			}
		}else
		{
			for(int i = len-1; i>=0; i--)
				if(num[i] >numero.num[i])
					return true;
		}
		return false;
	}
	
	bool BigInt::operator == (BigInt numero)
	{
		if(len ==  numero.len)
		{
			for(int i = 0; i< len; i++)
			{
				if(num[i] != numero.num[i]) return false;
			}
			return true;
		}
		else return false;
	}
	
	bool BigInt::operator <= (BigInt numero)
	{
		if (*this < numero || *this == numero)
			return true;
		else
			return false;
		
	}
	bool BigInt::operator >= (BigInt numero)
	{
		if (*this > numero || *this == numero)
			return true;
		else
			return false;
		
	}
	bool BigInt::operator != (BigInt numero)
	{
		return !(*this==numero);
	}
	
	
	
	ostream& operator << (ostream& output, const BigInt& numero)
	{
		for(int i = numero.len-1; i >= 0; i--)
		 output << numero.num[i];
		 return output;
	}
	istream& operator >> (istream& input, BigInt& numero)
	{
		 string a;
		 input >> a;
		 numero.len = a.length();
		 for(int i = 0; i < numero.len; i++)
		 {
		 	numero.num[i] = a[numero.len-i-1] - '0';
		 }
		 return input;
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
