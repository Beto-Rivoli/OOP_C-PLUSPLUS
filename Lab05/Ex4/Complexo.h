#ifndef Complexo_H
#define Complexo_H

#include <iostream>

using namespace std;

class CFracao;

class Complexo
{
protected:
    //Atributos
    double real;
    double imaginario;
    static int cont;

    //Sobrecarga de operadores para I/O
    friend ostream& operator << (ostream&, Complexo);
    friend istream& operator >> (istream&, Complexo&);

public:
// Construtor sem parametros inline
    Complexo(void)
    {
        real = 0;
        imaginario = 0;
        cont++;
    }
    Complexo(double r, double i)
    {
        real = r;
        imaginario = i;
        cont++;
    }
    Complexo(const Complexo& objeto) // Construtor de copia
    {
        real = objeto.real;
        imaginario = objeto.imaginario;
        cont++;
    }
    ~Complexo(void) { cont--; } // Destrutor
//
//métodos de acesso
//
    int getReal(void)
    {
        return real;
    }
    int getImaginario(void)
    {
        return imaginario;
    }

//
//métodos aritiméticos
//
    Complexo operator + (Complexo);
    Complexo operator - (Complexo);
    Complexo operator * (Complexo);
    Complexo operator / (Complexo);
    double Modulo(void);
//
//métodos de comparação
//
    bool operator < (Complexo);
    bool operator <= (Complexo);
    bool operator >= (Complexo);
    bool operator > (Complexo);
    bool operator == (Complexo);
    bool operator != (Complexo);

    operator CFracao();
};
#endif // ID_Complexo
