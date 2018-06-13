#include <iostream>
#include <string.h>
using namespace std;

class Estudante 
{
protected:
	char *nome;
	int ID;	

	
	void init(const char * novoNome, int novoID)
	{
			
		int tam = strlen(novoNome) + 1;
		
		nome = new char[tam];
		
		strcpy(nome, novoNome);
		ID = novoID;
	}
	
	void destruct()
	{
		delete[] nome;
		nome = 0;
	}

public:	
		
	Estudante(const char* novoNome, int novoID)
	{
		cout << "Construindo " << novoNome << endl;

		init(novoNome, novoID);
		
	}
	
	Estudante(Estudante &e)
	{
		cout << "Construindo copia de : " << e.nome << endl;
		init(e.nome, e.ID); 
	}
	
	virtual ~Estudante() 
	{
		cout << "destruindo " << nome << endl;
		destruct(); 	
	}
	
	//sobrecarrega o operador de designação
	Estudante& operator=(Estudante& origem)
	{
		if(this != &origem)
		{
			cout << "atribuindo " << origem.nome << " para " << nome << endl;
			
			//primeiramente destroi o objeto existente
			destruct();
			
			//copia o objeto origem
			init(origem.nome, origem.ID);
		}
		
		return *this;
	}
	
	const char* getNome()
	{
		return nome;
	}
	
	int getID()
	{
		return ID;
	}
};

void fun()
{
	Estudante e1("Renan", 1111);
	Estudante e2("Yankee", 2222);

	e2 = e1; //e2.operator=(e1);
}

int main(int argc, char** argv)
{
	fun();
	return 0;
}