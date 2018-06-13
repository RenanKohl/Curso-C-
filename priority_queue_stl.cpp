#include <iostream>
#include <queue>

using namespace std;


int main(int argc, char** argv)
{
	priority_queue<int> fila;
	
	fila.push(20);
	fila.push(10);
	fila.push(50);
	
	fila.pop();
	
	cout << "Primeiro elemento: " << fila.top() << endl; 
	
	cout << "Tamanho da fila: " << fila.size() << endl;
	
	cout << "Fila vazia? " << fila.empty() << endl;
	
	return 0;
}