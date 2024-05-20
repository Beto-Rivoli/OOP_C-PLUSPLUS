#include <iostream>
#include "poligono.h"
using namespace std;
int main(){
 poligono poli;
 int n, b;
 cout << "N (LADOS) e B (COMPRIMENTO): ";
 cin >> n >> b;
 poli.setLados(n);
 poli.setComp(b);
 cout << "Nome = " << poli.nome() << endl;
 cout << "Area = " << poli.area() << endl;
 cout << "Perimetro = " << poli.perimetro() << endl;
}

