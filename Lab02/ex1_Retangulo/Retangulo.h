class Retangulo
{
	private:
		int alt, larg;
		
		
	public:
		//construtor
		Retangulo();
		Retangulo(int,int);
		~Retangulo() {}
		
		//interface
		int area();
		int perimetro();
		void desenha();
		bool verifica();
		int getAlt();
		int getLarg();
		void setAlt(int);
		void setLarg(int);
		void imprime();
		int leitura();
};
