#include <iostream>
using namespace std;
int main()
{
    char resp = 0, saida = 0;
    cout << "Menu de Selecao\n";
    cout << "(1) Fatorial \n" << "(2) Primos \n" << "(3) menu? \n" << "(4) analise\n"<< "(5) Retangulo\n"<< "(6) Soma\n"<< "(7) MDC\n"<< "(8) Binario\n"<< "(9) Palindromo\n"<< "(0) Sair\n";

    while(saida!=1)
    {
	cout << "Qual processo voce quer entrar? ";
    cin >> resp;
	    switch(resp)
		{
			case '1': 
				cout << "foi 1\n";
				break;
			case '2': 
				cout << "foi 2\n";
				break;	
			case '3': 
				cout << "foi 3\n";
				break;
			case '4': 
				cout << "foi 4\n";
				break;
			case '5': 
				cout << "foi 5\n";
				break;	
			case '6': 
				cout << "foi 6\n";
				break;
			case '7': 
				cout << "foi 7\n";
				break;
			case '8': 
				cout << "foi 8\n";
				break;
			case '9':
				cout << "foi 9\n";
				break;
			case '0':
				cout << "Saindo ...";
				saida++;
				break;
			default:
				cout << "Nenhuma resposta valida" << "\n";
				break;

		}
	}		

}

