#include <iostream>
#include <cmath>
#include "Imaginario.h"
using namespace std;

int Imaginario:: cont = 0;


Imaginario Imaginario::soma(Imaginario _soma)
{
	Imaginario Resp(getReal()+_soma.getReal(),getImag()+_soma.getImag());
	return Resp;
}

Imaginario Imaginario::sub(Imaginario _sub)
{
	Imaginario Resp(getReal()-_sub.getReal(),getImag()-_sub.getImag());
	return Resp;
}
Imaginario Imaginario::mult(Imaginario _mult)
{	
	Imaginario Resp
	(
		getReal()*_mult.getReal() - getImag()*_mult.getImag(),
		getReal()*_mult.getImag() + getImag()*_mult.getReal()
	);
	return Resp;
}

Imaginario Imaginario::div(Imaginario _div)
{	
	Imaginario Resp
	(
		(getReal()*_div.getReal() + getImag()*_div.getImag())/(_div.getReal()*_div.getReal()+_div.getImag()*_div.getImag()),
		(getImag()*_div.getReal() - getReal()*_div.getImag())/(_div.getReal()*_div.getReal()+_div.getImag()*_div.getImag())
	);
	return Resp;
}

double Imaginario::modulo()
{
	return sqrt(pow(getReal(), 2) + pow(getImag(), 2));
}
void Imaginario::print()
{
	cout<< getReal() << " ";
	if(getImag() < 0) cout << getImag() << "i" << endl;
	else cout << "+" << getImag() << "i" << endl;
	
}
Imaginario Imaginario::operator+(Imaginario _soma)
{
	return this->soma(_soma);
}
Imaginario Imaginario::operator-(Imaginario _sub)
{
	return this->sub(_sub);
}
Imaginario Imaginario::operator*(Imaginario _mult)
{
	return this->mult(_mult);
}
Imaginario Imaginario::operator/(Imaginario _div)
{
	return this->div(_div);
}

ostream& operator << (ostream& output, const Imaginario& _imaginario)
{
	output<< _imaginario.real << " ";
	if(_imaginario.real < 0) output << _imaginario.imaginario << "i" << endl;
	else output << "+" << _imaginario.imaginario << "i" << endl;
}

istream& operator >> (istream& input, Imaginario& _entrada)
{
 input >> _entrada.real >> _entrada.imaginario;
 return input;
}
