#include <iostream>
#include <cmath>

#include "Complexo.h"
#include "CFracao.h"

using namespace std;

int Complexo::cont = 0;

Complexo Complexo::operator + (Complexo numero)
{
    Complexo temp(real + numero.real, imaginario + numero.imaginario);
    return temp;
}

Complexo Complexo::operator - (Complexo numero)
{
    Complexo temp(real - numero.real, imaginario - numero.imaginario);
    return temp;
}

Complexo Complexo::operator * (Complexo numero)
{
    Complexo temp(real*numero.real - imaginario*numero.imaginario, real*numero.imaginario + numero.real*imaginario);
    return temp;
}

Complexo Complexo::operator / (Complexo numero)
{
    Complexo temp(((real*numero.real + imaginario*numero.imaginario)/(numero.real*numero.real + numero.imaginario*numero.imaginario )),
                  ((numero.real*imaginario - real*numero.imaginario)/(numero.real*numero.real + numero.imaginario*numero.imaginario )));
    return temp;
}

double Complexo::Modulo(void)
{
    return sqrt(real*real + imaginario*imaginario);
}

bool Complexo::operator < (Complexo comparado)
{
    if(Modulo() < comparado.Modulo())
    {
        return true;
    }else
    {
        return false;
    }
}

bool Complexo::operator <= (Complexo comparado)
{
    if (!(*this > comparado))
    {
        return true;
    }else
    {
        return false;
    }
}

bool Complexo::operator >= (Complexo comparado)
{
    if(!(*this < comparado))
    {
        return true;
    }else
    {
        return false;
    }
}

bool Complexo::operator > (Complexo comparado)
{
    if(Modulo() > comparado.Modulo())
    {
        return true;
    }else
    {
        return false;
    }
}

bool Complexo::operator == (Complexo comparado)
{
    if(real == comparado.real && imaginario == comparado.imaginario)
    {
        return true;
    }else
    {
        return false;
    }
}

bool Complexo::operator != (Complexo comparado)
{
    if(!(*this == comparado))
    {
        return true;
    }else
    {
        return false;
    }
}

ostream& operator << (ostream& output, Complexo C)
{
    if(C.real == 0)
    {
        if(C.imaginario == 0)
        {
            output << 0;
        }else
        {
            output << C.imaginario << "i";
        }
    }else
    {
        if (C.imaginario == 0)
        {
            output << C.real;
        }else
        {
            if(C.imaginario > 0)
            {
                output << C.real << "+" << C.imaginario << "i";
            }else
            {
                output << C.real << C.imaginario << "i";
            }
        }
    }
    return output;
}
istream& operator >> (istream& input, Complexo& C)
{
    input >> C.real >> C.imaginario;
    return input;
}

Complexo::operator CFracao()
{
    CFracao temp(Modulo()*10000,10000);
    return temp;
}
