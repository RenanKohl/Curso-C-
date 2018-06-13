#include <iostream>	

using namespace std;

class Aluno
{
	
private:
	int idade;
	
	int* notas;
	
public:
	
	//construtor
	Aluno(int idade)
	{
		this->idade = idade;
		notas = new int[10];
	}	
	
	//destrutor
	~Aluno()
	{
		delete[] notas;
		notas = 0;
	}
	
	void mostrarIdade()
	{
		cout << "Idade: " << idade << endl;
	}
	
};


int main(int argc, char** argv)
{
	
	Aluno aluno(28);
	
	aluno.mostrarIdade();
	
	return 0;
}