#include <iostream>

using namespace std;

class Estudante
{		
	 	friend void setIdade(Estudante* e, int idade);	
protected:
		int idade;
						
};

void setIdade(Estudante* e, int idade)
{
			
		e->idade = idade;
		cout << "idade " << idade << endl;
}	

int main(int argc, char** argv)
{
		Estudante* e;
		
		e = new Estudante;
		
		setIdade(e, 28);
		
		return 0;
}