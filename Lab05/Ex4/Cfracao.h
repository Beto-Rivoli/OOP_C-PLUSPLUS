#ifndef CFRACAO_H
#define CFRACAO_H

#include <iostream>

using namespace std;

#include "Complexo.h"

class CFracao
{
private:
    int m_numerador;
    int m_denominador;
// responde ao receptor com o mínimo denominador comun

    CFracao Reduzida(void);

    //Sobrecarga de operador para I/O
    friend ostream& operator << (ostream&,CFracao);
    friend istream& operator >> (istream&,CFracao&);

public:
// Construtor sem parametros inline
    CFracao(void)
    {
        m_numerador = 1;
        m_denominador = 1;
    }
    CFracao(int Num, int Denom)
    {
        m_numerador = Num;
        m_denominador = Denom;
        (*this) = (*this).Reduzida();
    }
    CFracao( const CFracao& f) // Construtor de copia
    {
        m_numerador = f.m_numerador;
        m_denominador = f.m_denominador;
    }
    ~CFracao(void) { }; // Destrutor
//
//métodos de acesso
//
    int getNumerador(void)
    {
        return m_numerador;
    }
    int getDenominador(void)
    {
        return m_denominador;
    }
//
//métodos aritiméticos
//
    CFracao operator + (CFracao);
    CFracao operator - (CFracao);
    CFracao operator * (CFracao);
    CFracao operator / (CFracao);
//
//métodos de comparação
//
    bool operator < (CFracao);
    bool operator <= (CFracao);
    bool operator >= (CFracao);
    bool operator > (CFracao);
    bool operator == (CFracao);
    bool operator != (CFracao);
//
//métodos de conversão
//
    operator Complexo(void);
// devolve o valor da fração como float
    float ComoFloat(void);

};

#endif // ID_CFRACAO
