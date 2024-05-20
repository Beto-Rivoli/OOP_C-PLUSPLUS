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
// responde ao receptor com o m�nimo denominador comun

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
//m�todos de acesso
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
//m�todos aritim�ticos
//
    CFracao operator + (CFracao);
    CFracao operator - (CFracao);
    CFracao operator * (CFracao);
    CFracao operator / (CFracao);
//
//m�todos de compara��o
//
    bool operator < (CFracao);
    bool operator <= (CFracao);
    bool operator >= (CFracao);
    bool operator > (CFracao);
    bool operator == (CFracao);
    bool operator != (CFracao);
//
//m�todos de convers�o
//
    operator Complexo(void);
// devolve o valor da fra��o como float
    float ComoFloat(void);

};

#endif // ID_CFRACAO
