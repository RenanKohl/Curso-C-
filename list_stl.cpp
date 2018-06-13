#include <iostream>
#include <list>
#include <string.h>

using namespace std;

class Pessoa
{
public:
	char * nome;
	
	
	Pessoa(const char * novo_nome)
	{
		int tam = strlen(novo_nome);
		nome = new char[tam + 1];
		strcpy(nome, novo_nome);
	}	
};

int main(int argc, char** argv)
{
	Pessoa p1("Renan"), p2("Yankee"), p3("Catarina");
	
	list<Pessoa> lista;
	
	lista.push_back(p1);
	lista.push_back(p2);
	lista.push_back(p3);
	
	//lista.pop_front();
	
	list<Pessoa>::iterator it;
	
	for(it = lista.begin(); it != lista.end(); it++)
	{
		cout << it->nome << endl;
	}
	
	cout << "Primeiro elemento: " << lista.front().nome << endl;
	cout << "Ultimo elemento: " << lista.back().nome << endl;  	
	
	cout << "Tamanho da lista: " << lista.size() << endl;
	
	return 0;
}