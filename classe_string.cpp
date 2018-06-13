#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string nome("Renan");
	
	cout << nome << endl;
	cout << "Tamanho da string: " << nome.size() << endl;	
	cout << "Primeiro caractere: " << nome[0] << endl;
	cout << "Segundo caractere: " << nome.at(1) << endl;	
		
	//nome.push_back('K'); //insere um caractere
	
	//nome.append(" Kohl");
	
	nome.insert(nome.size(), " Kohl");
	
	cout << "Novo completo : " << nome << endl;	
		
		
		
	nome.clear();	

	cout << "Tamanho da string: " << nome.size() << endl;	

	if(nome.empty())
		cout << "string vazia\n";
	else
		cout << "string nao vazia\n";
	
	
	
	return 0;
}