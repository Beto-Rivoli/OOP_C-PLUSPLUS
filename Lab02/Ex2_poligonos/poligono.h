#include <string>
using namespace std;

class poligono
{
	private:
		int n,b;
		
		
	public:
		poligono(int = 1, int = 1);
		~poligono() { }
		
		float area();
		float perimetro();
		string nome();
		float getLados();
		float getComp();
		void setLados(int);
		void setComp(int);
}; 
