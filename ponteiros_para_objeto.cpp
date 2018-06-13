#include <iostream>	

using namespace std;

class Carro
{
	public:	
	
		void mostrarMensagem()
		{
			cout << "Funcao 1" << endl;	
		}

		void mostrarMensagem(int ano)
		{
			cout << "Ano: " << ano << endl;
			
		}
};

int main(int argc, char** argv)
{
		
		Carro carro; // objeto
		Carro* pcarro;
		
		pcarro = &carro;
		
		
		pcarro->mostrarMensagem();
		
		return 0;
}