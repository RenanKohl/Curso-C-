#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	double* num = NULL; //ponteiro inicializado com null
	
	num = new double; //requer mem�ria para a vari�vel
	
	*num = 10; // atribui o valor ao ponteiro
	
	cout << *num << endl; // exibe o valor
	
	delete num; // libera a mem�ria requerida --- para array -> delete[]
	
	return 0;
}