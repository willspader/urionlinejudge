#include <iostream>

using namespace std;

int cont;

int fib(int n)
{
	cont++;
	if(n < 2) return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int t, n, r;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		cont = 0;
		r = fib(n);
		cont -= 1;
		cout << "fib(" << n << ") = " << cont << " calls = " << r << endl;
	}
	
	return 0;
}
