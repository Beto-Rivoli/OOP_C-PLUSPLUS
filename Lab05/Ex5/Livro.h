#ifndef LIVRO_H
#define LIVRO_H
#include <string>
using namespace std;
class Livro
{
	public:
		double  preco;
		Livro(string,string,string);
		~Livro();	
		
	private:
	 string codigo, editora, nome;
	
};
#endif
