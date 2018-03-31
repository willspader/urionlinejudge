#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int H1, M1, H2, M2;
	int min1, min2, final;
	while(true){
		scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
		if(H1+M1+H2+M2 == 0) break;
		if (H1 == 0) H1 = 24;
		if (H2 == 0) H2 = 24;
		min1 = H1*60+M1;
		min2 = H2*60+M2;
		if (min1 <= min2) final = abs(min1 - min2);
		else final = 24*60-abs(min1 - min2);
		printf("%d\n", final);
	}
	return 0;
}
