#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(12);
	v.push_back(20);
	v.push_back(30);
	
	//v.pop_back(); // remove o ultimo elemento
	//v.erase(v.begin() + 3); // remove o elemento selecionado
	
	vector<int>::iterator it; //inserir elementos na 
	
	it = v.begin() + 1; //posição desejada
	
	v.insert(it, 11);
	
	for(unsigned int i = 0; i < v.size(); i++)
	{
	 	 cout << v[i] << endl;	   	
		
	}
	
	//v.clear(); //apaga todos os elementos
	
	if(v.empty())
		cout << "Vetor vazio\n";
	else
		cout << "Vetor NAO vazio\n";
	
	cout << "Elemento da segunda posicao: " << v.at(1) << endl;
	cout << "Primeiro elemento: " << v.front() << endl;
	cout << "Ultimo elemento: " << v.back() << endl;   	
		
	v.clear(); //apaga todos os elementos
	
	if(v.empty())
		cout << "\nVetor vazio\n";
	else
		cout << "\nVetor NAO vazio\n";	
		
	return 0;
}