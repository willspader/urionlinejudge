#include <iostream>

using namespace std;

int main ()
{
	int N, f = 1;
	cin >> N;
	for(int i = 1; i <= N; i++){
		f = f * i;
	}
	cout << f << endl;
	return 0;
}
