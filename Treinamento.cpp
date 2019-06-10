#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	// Conjuntos de treinamento aleatório para duas entradas e uma saída

	cout << "Topologia: 2 4 1" << endl;
	for(int i = 2000; i >= 0; --i)
	{
		int n1 = (int)(2.0 * rand() / double(RAND_MAX));
		int n2 = (int)(2.0 * rand() / double(RAND_MAX));
		int t = n1 ^ n2; // should be 0 or 1
		cout << "Entrada: " << n1 << ".0 " << n2 << ".0 " << endl;
		cout << "Saída: " << t << ".0" << endl; 
	}

}
