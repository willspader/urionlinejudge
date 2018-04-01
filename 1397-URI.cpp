#include <iostream>

#define MAIOR(a, b) a > b? contA++ : contB++;

using namespace std;

int main ()
{	
	int N;
	scanf("%d", &N);
	while(N > 0){
		int A, B, contA = 0, contB = 0;
		for(int i = 0; i < N; i++){
			scanf("%d %d", &A, &B);
			if (A != B) MAIOR(A, B);
		}
		printf("%d %d\n", contA, contB);
		scanf("%d", &N);
	}
	return 0;
}
