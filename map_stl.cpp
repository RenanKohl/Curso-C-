#include <iostream>
#include <map>

using namespace std;


int main(int argc, char** argv)
{
	map<string, int> mapa;
	
	mapa["Renan"] = 18;
	mapa["Maria"] = 20;
	mapa["Joao"] = 25;
	
	map<string, int>::iterator it;
	
	for(it = mapa.begin();it != mapa.end(); it++)
	{
		cout << "Idade do " << it->first << ": " << it->second << endl;
		
	}
	
	return 0;
}