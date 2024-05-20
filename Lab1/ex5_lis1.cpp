#include <iostream>
using namespace std;


int main ()
{ 
 //tabela
 int i,j;
 
 	cout << "Digite a largura do retangulo: ";
	 	int lar;
	 	cin >> lar;
    cout << "Digite a altura retangulo: ";
	    int alt;
	    cin >> alt;
    cout << "Digite o caractere da borda: ";
    	char borda;
    	cin >> borda;	    
    cout << "Digite o caractere de preenchimento: ";
    	char dentro;
    	cin >> dentro;
	cout << "Deseja preencher? (Y/N): ";
		char opc;
		cin >> opc;
		
    for(int x=0; x<lar; x++)
        cout << borda;
    cout << "\n";
    for(i=0;i<alt-2;i++)
    {
        cout << borda;
		if(opc =='y'or opc == 'Y')
		{
			for(int x = 0; x<lar-2; x++)
			{
				cout << dentro;
             	j++;
        	}
        }
        else
        {
	        for(int x = 0; x<lar-2; x++)
			{
				cout << " ";
	            j++;
	        }	
		}
        cout << borda << "\n";
    }


    for(int x=0; x<lar; x++)
        cout << borda;
    
     
}


