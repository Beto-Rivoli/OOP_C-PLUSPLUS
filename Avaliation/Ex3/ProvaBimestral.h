#ifndef PROVABIMESTRAL_H
#define PROVABIMESTRAL_H

#include <iostream>
#include <string>

using namespace std;
class ProvaBimestral
{
	private:
		string aluno;
		float Nota, NotAtv;
		
	public:
		
		ProvaBimestral()
		{
			aluno = "sem nome";
			Nota = 0;
			NotAtv = 0;
		}
		ProvaBimestral(string n) : nomeAluno(n) 
		{
			Nota = 0;
			NotAtv = 0;	
		}
		ProvaBimestral(string nome, float p, float extra) : nomeAluno(nome), Nota(p), NotAtv(extra)  {};
		
		void setNome(string);
		void setNota(float);
		void setNotaAtividade(float);
		string getnome();
		float getnota();
		float getnotAtv();
	
	
	
	
	
	
	
	
	
	
	
	
};
#endif
