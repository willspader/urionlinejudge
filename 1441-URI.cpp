#include <iostream>

using namespace std;

int main ()
{	
	int aux;
	cin >> aux;
	while (aux != 0){
		int H = aux, maior = aux, ant = aux;
		while(H != 1){
			if (ant % 2 == 0) H = 0.5 * ant;
			else H = 3 * ant + 1;
			if (H > maior) maior = H;
			ant = H;
		}
		cout << maior << endl;
		cin >> aux;
	}
	return 0;
}
