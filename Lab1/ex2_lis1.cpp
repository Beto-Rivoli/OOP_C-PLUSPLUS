#include <iostream>
using namespace std;
int main()
{
    int primos = 1, count = 0, verif;
    
    while(count <20)
	{	verif = 0;
		for(int i = 1; i<=primos; i++)
		{
			if(primos % i == 0)
			{
				verif++;
			}
		}
		if(verif == 2)
		{
			cout << "De ordem "<< count+1 <<" o seguinte numero e primo: " << primos << "\n";
			count++;
		}
		primos++;
		
	}
	
}
