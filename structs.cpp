#include <iostream>
#include <string.h>

using namespace std;

typedef struct pessoa
{
	char nome[50];
	int idade;
	float peso;

	void imprime_dados()
	{		 
		cout << "Nome : " << nome << endl;
		cout << "Idade : " << idade << endl;
		cout << "Peso : " << peso << endl;
	}

}tipo_pessoa;


int main(int argc, char** argv)
{
   	tipo_pessoa p;
	tipo_pessoa*  pp;
	tipo_pessoa pessoas[10];
	
	pp= &p;
	   
	   
	strcpy(pp ->nome, "Renan"); 
	pp->idade = 18;
	pp->peso = 64; 

//	pp->imprime_dados();
	
	 pessoas[0] = p;
	 
	 pessoas[0].imprime_dados();
	 
	 
	return 0;
}