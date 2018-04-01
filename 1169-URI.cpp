#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int X;
		unsigned long long total;
		cin >> X;
		total = ((pow(2, X)) / 12) / 1000;
		cout << total << " kg" << endl;
	}
	return 0;
}
