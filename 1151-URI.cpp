#include <iostream>

using namespace std;

int main ()
{
	int a = 1, b = 0, f, N;
	cin >> N;
	for(int i = 0; i < N; i++){
		f = a + b;
		if (i == N - 1) printf("%d\n", b);
		else printf("%d ", b);
		b = a;
		a = f;
	}
	return 0;
}
