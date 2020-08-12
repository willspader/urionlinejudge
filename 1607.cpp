#include <stdio.h>
#include <stdlib.h>

#define STRMAX 10002

int main() {
	
	int t, i, str_size, diff; scanf("%d", &t); getchar();
	char str1[STRMAX], str2[STRMAX];
	
	
	while (t--) {
		
		scanf("%s %s", str1, str2);
		
		for (diff = 0, i = 0; str1[i]; i++) {
			
			if (str2[i] - str1[i] < 0) {
				diff = diff + 26 - abs(str1[i] - str2[i]);
			} else {
				diff = diff + abs(str1[i] - str2[i]);	
			}
		}
		
		printf("%d\n", diff);
	}
	
	return 0;
}
