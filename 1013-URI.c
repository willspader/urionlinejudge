#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x, y, z, maiorXY, maior;
	scanf("%d %d %d", &x, &y, &z);
	maiorXY = (x + y + abs(x-y))/2;
	maior = (maiorXY + z + abs(maiorXY - z))/2;
	printf("%d eh o maior\n", maior);
}
