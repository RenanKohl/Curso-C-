#include <iostream>
#include <stack> //pilha

using namespace std;

int main(int argc, char** argv)
{
	
	stack<double> pilha;
	
	pilha.push(3.14);
	pilha.push(5.123);
	pilha.push(10.56);
	
	double x = pilha.pop();
	
	cout << "Topo: " << pilha.top() << endl;
	
	cout << "Tamanho: " << pilha.size() << endl;
	 cout << x;
	
	if(pilha.empty())
		cout << "pilha vazia" << endl;
	else
		cout << "pilha nao vazia" << endl;
	
	
	return 0;
}