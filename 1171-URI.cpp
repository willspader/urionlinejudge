#include <iostream>

using namespace std;

int insertion_sort(int v[], int n);

int main ()
{
	int N, nmr;
	cin >> N;
	int vet[N];
	for(int i = 0; i < N; i++){
		cin >> vet[i];
		insertion_sort(vet, i+1);
	}
	int atual;
	for(int i = 0; i < N; i++){
		if (vet[i] != -1){
			atual = vet[i];
			int cont = 0;
			for(int j = i; j < N; j++){
				if (atual == vet[j]){
					cont++;
					vet[j] = -1;
				}
			}
			cout << atual << " aparece " << cont << " vez(es)" << endl;
		}
	}
	return 0;
}

int insertion_sort(int v[], int n)
{
	int chave, k;
	for(int i = 0; i < n; i++){
		chave = v[i];
		k = i;
		while(k > 0 && chave < v[k - 1]){
			v[k] = v[k - 1];
			k -= 1;
		}
		v[k] = chave;
	}
}
