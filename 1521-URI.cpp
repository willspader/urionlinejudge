#include <iostream>

using namespace std;

int main ()
{
	int N;
	while(true){
		cin >> N;
		int vet[N], K, entregou;
		if (N == 0) break;
		for(int i = 0; i < N; i++){
			cin >> vet[i];
		}
		cin >> K;
		if (vet[K - 1] == K) entregou = vet[K - 1];
		else{
			entregou = vet[K-1];
			for(int i = 0; i < N; i++){
				if (entregou == vet[entregou - 1]) break;
				entregou = vet[entregou - 1];
			}
		}
		cout << entregou << endl;
	}
	return 0;
}
