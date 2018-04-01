#include <iostream>

using namespace std;

int encaixa(int a, int b)
{
	bool retorno = false;
	while(b != 0){
		if(a % 10 == b % 10){
			retorno = true;
		}else{
			retorno = false;
			return retorno;
		}
		a /= 10;
		b /= 10;
	}
	return retorno;
}

int main ()
{
	int N;
	cin >> N;
	int A, B;
	for(int i = 0; i < N; i++){
		cin >> A >> B;
		if (encaixa(A, B)) cout << "encaixa" << endl;
		else cout << "nao encaixa" << endl;
	}
	return 0;
}
