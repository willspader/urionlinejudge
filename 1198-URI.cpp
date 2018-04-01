#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main ()
{
	ll sold, oponente;
	while(cin >> sold >> oponente){
		ll dif;
		dif = abs(sold-oponente);
		cout << dif << endl;
	}
	return 0;
}
