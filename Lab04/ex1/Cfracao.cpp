#include "Cfracao.h"
#include <iostream>
using namespace std;

//
// Métodos Protegidos da classe CFracao
//
CFracao CFracao::Reduzida(void)
{
	int gcd = 1;
	int minimo = m_numerador;
	if (m_numerador > m_denominador) 
		minimo = m_denominador;
	for(int i = 1; i <= minimo; i++)
	{
		if ((m_numerador%i == 0) && (m_denominador%i == 0))
			gcd = i;
	}
	m_numerador /= gcd;
	m_denominador /= gcd;
	return (*this);
}

//
// Métodos Aritméticos da classe CFracao
//
// retorna uma nova Fracao que é a soma do receptor com _Fracao
CFracao CFracao::Somar(CFracao _Fracao)		
{
	CFracao temp(m_numerador*_Fracao.m_denominador + 
   m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
	return temp.Reduzida();
}

// retorna uma nova Fracao que é a subtração do receptor com _Fracao
CFracao CFracao::Subtrair(CFracao _Fracao)	
{
	CFracao temp(m_numerador*_Fracao.m_denominador - 
   m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
	return temp.Reduzida();
}

// retorna uma nova Fracao que o produto do receptor e _Fracao
CFracao CFracao::Multiplicar(CFracao _Fracao)	
{
	CFracao temp(m_numerador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
	return temp.Reduzida();
}

// retorna uma nova Fracao que o quociente do receptor e _Fracao
CFracao CFracao::Dividir(CFracao _Fracao)		
{
	CFracao temp(m_numerador*_Fracao.m_denominador,
 			m_denominador*_Fracao.m_numerador );
	return temp.Reduzida();
}

//
// Métodos de comparação da classe CFracao
//
// devolve verdadeiro se receptor menor que _Fracao
int CFracao::MenorQue(CFracao _Fracao)	
{
	return (m_numerador*_Fracao.m_denominador <
m_denominador*_Fracao.m_numerador );
}

// devolve verdadeiro se receptor maior que _Fracao
int CFracao::MaiorQue(CFracao _Fracao)	
{
	return (m_numerador*_Fracao.m_denominador >
m_denominador*_Fracao.m_numerador );
}

// devolve verdadeiro se receptor igual a _Fracao
int CFracao::Igual(CFracao _Fracao)		
{
	return (m_numerador*_Fracao.m_denominador ==
m_denominador*_Fracao.m_numerador );
}

//
// Métodos de conversão
//
// devolve o valor da fração como float
float CFracao::ComoFloat(void)	
{
	return ((float)m_numerador/(float)m_denominador);
}

//
// Métodos de impressão
//
// mostrar o receptor no formato m_numerador/m_denominador
void CFracao::Print(void) const			
{
	cout << m_numerador << "/" << m_denominador;
}
//verificar se o retângulo é um quadrado.


//Operadores de calculo
CFracao CFracao::operator+(const CFracao & _Fracao)
{
	return this->Somar(_Fracao);
}
CFracao CFracao::operator-(const CFracao & _Fracao)
{
	return this->Subtrair(_Fracao);
}
CFracao CFracao::operator*(const CFracao & _Fracao)
{
	return this->Multiplicar(_Fracao);
}
CFracao CFracao::operator/(const CFracao & _Fracao)
{
	return this->Dividir(_Fracao);
}

//OPERADORES DE COMPARAÇÃO < > <= >= == !=

bool CFracao::operator<(const CFracao & _Fracao)
{
	//return this-> MenorQue(_Fracao);
	return ((float)(*this)<(float)_Fracao);	
}

bool CFracao::operator > (const CFracao & _Fracao)
{
	return	((float)(*this) > (float)_Fracao);
}

bool CFracao::operator <= (const CFracao & _Fracao)
{
	return	((float)(*this) <= (float)_Fracao);
}
bool CFracao::operator >= (const CFracao & _Fracao)
{
	return	((float)(*this) >= (float)_Fracao);
}

bool CFracao::operator == (const CFracao & _Fracao)
{
	return	((float)(*this) == (float)_Fracao);
}
bool CFracao::operator != (const CFracao & _Fracao)
{
	return	((float)(*this) != (float)_Fracao);
}
//conversão de numero
CFracao::operator float (void) const
{
 return ((float)m_numerador/(float)m_denominador);
}
ostream& operator << (ostream& output, const CFracao& fracao)
{
	fracao.Print();
 	return output;
}
istream& operator >> (istream& input, CFracao& fracao)
{
	 input >> fracao.m_numerador >> fracao.m_denominador;
	 return input;
}



