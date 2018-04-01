#include <iostream>

#define IGUAIS(a, b, c) a+b+c == 0 || a+b+c == 3 ? flag = true : flag = false;

using namespace std;

int main ()
{
	int A, B, C;
	char ganhador;
	bool flag;
	while(scanf("%d %d %d", &A, &B, &C) == 3){
		IGUAIS(A, B, C);
		if (flag == false){
			ganhador = 65;
			if (A == B) ganhador = 67;
			if (A == C) ganhador = 66;
		}else ganhador = 42;
		printf("%c\n", ganhador);
	}
	return 0;
}
