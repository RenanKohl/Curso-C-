#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int vet[] = {1, 2, 3, 4};
	int* p_vet;
	int tam_vet = sizeof(vet) / sizeof(int);

	p_vet = &vet[0];
	
	int i = 0;
	while(i < tam_vet)
	{
		
		cout << *p_vet++ << endl;
		i++;
	}
	
	char nome[] = "renan";
	char* p_nome;
	
	for(p_nome = &nome[0]; *p_nome != '\0'; p_nome++)
	{
		cout << *p_nome;					 			  		   
		   	
	}
	
	return 0;
}