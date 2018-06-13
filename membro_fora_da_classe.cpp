#include <iostream>

using namespace std;

class Pessoa
{
	public:
		int idade;
		
		void setIdade(int idade);
};

void Pessoa::setIdade(int idade)
{
	
	this->idade = idade;
}

int main(int argc, char** argv)
{
		Pessoa p;
	
		p.setIdade(10);
		
		cout << p.idade << endl;
	
			
		return 0;
}