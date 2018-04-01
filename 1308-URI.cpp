#include <iostream>
#include <cmath>

typedef unsigned long long int ulli;

using namespace std;

int main()
{
	int n, y;
	ulli x;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		y = (-1 + (sqrt(1 + -4*(-x*2))))/2;
		cout << y << endl;
	}
	
	return 0;
}
