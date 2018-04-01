#include <iostream>

using namespace std;

typedef long long ll;

int main ()
{
	int N, M;
	while(cin >> N >> M){
		ll f = 1;
		ll soma = 0;
		for(int i = 1; i <= N; i++){
			f = f * i;
		}
		soma += f;
		f = 1;
		for(int i = 1; i <= M; i++){
			f = f * i;
		}
		soma += f;
		cout << soma << endl;
	}
	return 0;
}
