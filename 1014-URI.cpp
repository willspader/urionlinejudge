#include <iostream>

using namespace std;

int main ()
{
	double X, Y, total;
	cin >> X >> Y;
	total = X/Y;
	cout.precision(3);
	cout << fixed << total << " km/l" << endl;
	return 0;
}
