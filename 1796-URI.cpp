#include <iostream>

using namespace std;

int main ()
{
	int Q, V, soma = 0, s = 0, n = 0;
	cin >> Q;
	for(int i = 0; i < Q; i++){
		cin >> V;
		soma = soma + V;
		if(V == 1) n++;
		else s++;
	}
	if (s > n) cout << "Y" << endl;
	else cout << "N" << endl;
	return 0;
}
