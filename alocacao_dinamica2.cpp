#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	double* num = NULL; //ponteiro inicializado com null
	
	num = new double; //requer memória para a variável
	
	*num = 10; // atribui o valor ao ponteiro
	
	cout << *num << endl; // exibe o valor
	
	delete num; // libera a memória requerida --- para array -> delete[]
	
	return 0;
}