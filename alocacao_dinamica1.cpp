#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char* p = new char[256];
	
	p[0] = 'a';
	p[1] = 'b';
	p[2] = '\0';
	
	cout << *(p + 1) << endl;
	
	delete[] p;
	p = NULL;
	
	return 0;
}