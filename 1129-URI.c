#include <stdio.h>

int main ()
{	
	int A, B, C, D, E, N;
	int i, k;
	do{
		scanf("%d", &N);
		for (k = 0; k < N; k++){
			scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
			int vet[5] = {A, B, C, D, E};
			int t = 0;
			for (i = 0; i < 5; i++){
				if (vet[i] <= 127) t++;
			}
			if (t == 1){
				for(i = 0; i < 5; i++){
					if (vet[i] <= 127){
						switch (i+1){
							case 1:
								printf("A\n");
								break;
							case 2:
								printf("B\n");
								break;
							case 3:
								printf("C\n");
								break;
							case 4:
								printf("D\n");
								break;
							case 5:
								printf("E\n");
								break;
						}
						break;
					}
				}
			}else printf("*\n");
		}
	}while(N > 0);
	
}
