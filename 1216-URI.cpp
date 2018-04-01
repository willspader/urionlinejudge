#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string nome;
	int distancia, cont = 0;
	double tot = 0.0;
	while(getline(cin, nome)){
		cin >> distancia;
		cin.ignore();
		tot += distancia;
		cont++;
	}
	tot = tot/cont;
	cout.precision(1);
	cout << fixed << tot << endl;
	return 0;
}
