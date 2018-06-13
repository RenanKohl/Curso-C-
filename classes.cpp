#include <iostream>

using namespace std;

class Pessoa
{
private:	 
	 int idade;
	 float peso;	   	   	   	

public:
	
			Pessoa(int idade, float peso) //método construtor
			{
				this->idade = idade;
				this->peso = peso;
			}
		
		  void setIdade(int idade)
		  {
				this->idade = idade;
		  }
		 
		  int getIdade()
		  {
		 		return idade;
		  }
	 
			void setPeso(float peso)
			{
				this->peso = peso;
			}
			 
			float getPeso()
			{
				return peso;
			} 
			 
};


int main(int argc, char** argv)
{
			    	  	 	
			Pessoa pessoa(28, 75.56);// inicializando o objeto
			Pessoa* ppessoa;
		
			ppessoa = &pessoa;
		
			//ppessoa->setIdade(28);
			//ppessoa->setPeso(75.56);
			
			cout << "Idade: " << ppessoa->getIdade() << endl;
			cout << "Peso: " << ppessoa->getPeso() << endl;
			return 0;
}