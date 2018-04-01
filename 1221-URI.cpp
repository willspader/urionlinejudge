#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int N, X;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> X;
		int cont = 0, fim = sqrt(X);
		for(int j = 2; j <= fim; j++){
			if (X%j == 0){
				cont++;
				break;
			}
		}
		if(cont == 0 && X != 1) cout << "Prime" << endl;
		else cout << "Not Prime" << endl; 
	}
	return 0;
}
