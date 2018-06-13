#include <iostream>

using namespace std;

class Carro
{	
public:

		int ano;
		float peso;
		
};

int main(int argc, char** argv)
{
		Carro* carros;
		
		carros = new Carro[3];
		
		carros[0].ano = 2015;
		carros[0].peso = 756.45;
		carros[1].ano = 2016;
		carros[1].peso = 1456.76;
		carros[2].ano = 2014;
		carros[2].peso = 678.45;
		
		cout << "Imprimindo todos os carros\n\n " << endl;
		
		for(int i = 0; i < 3; i++)
		{
			cout << "\nAno: " << carros[i].ano << endl;
			cout << "\nPeso: " << carros[i].peso << endl;
		}	
		
		
		delete[] carros;
		
		return 0;
}