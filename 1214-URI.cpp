#include <iostream>

using namespace std;

int main()
{
	int C;
	cin >> C;
	for(int i = 0; i < C; i++){
		int N, cont = 0;
		double media = 0.0;
		cin >> N;
		int vet[N];
		for(int j = 0; j < N; j++){
			cin >> vet[j];
			media = media + vet[j];
		}
		media = media / N;
		for(int j = 0; j < N; j++){
			if (vet[j] > media) cont++;
		}
		double perc;
		perc = (cont / (double)N) * 100;
		cout.precision(3);
		cout << fixed << perc << "%" << endl;
	}
	return 0;
}
