#include <iostream>

using namespace std;

int main ()
{
	int N, M;
	while(cin >> N >> M){
		int a = 0, b = 1, f = 1;
		for(int i = 2; i < N; i++){
			f = a + b;
			a = b;
			b = f;
		}
		cout << f << endl;
	}
}
