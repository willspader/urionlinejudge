#include <iostream>

using namespace std;

int main ()
{
	int n, x, i;
	while(cin >> n){
		x = 11;
		i = 2;
		while(x != 0){
			i++;
			x = (x*10+1)%n;
		}
		cout << i << endl;
	}
	
	return 0;
}
