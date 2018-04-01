#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		double C;
		int cont = 0;
		cin >> C;
		while(C > 1){
			C = C/2;
			cont++;
		}
		cout << cont << " dias" << endl;
	}
	return 0;
}
