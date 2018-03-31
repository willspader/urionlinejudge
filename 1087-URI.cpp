#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	while(x1 && y1 && x2 && y2){
		int m = 0;
		if (x1 == x2 && y1 == y2) m = 0;
		else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) m = 1;
		else m = 2;
		cout << m << endl;
		cin >> x1 >> y1 >> x2 >> y2;
	}
	return 0;
}
