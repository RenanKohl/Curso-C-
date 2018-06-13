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
		
		Carro c;
		
		c.mostrarMensagem();
		c.mostrarMensagem(2016);
		
		
		return 0;
}