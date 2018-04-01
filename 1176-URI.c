#include <stdio.h>
#include <string.h>

typedef unsigned long long int lli;

lli memo[61];

lli fib(int n)
{
	if(memo[n] == -1) memo[n] = fib(n - 1) + fib(n - 2);
	return memo[n];
}

int main()
{
	memset(memo, -1, sizeof(lli)*61);
	memo[0] = 0;
	memo[1] = 1;
	int t, n, i;
	scanf("%d", &t);
	for(i = 0; i < t; i++){
		scanf("%d", &n);
		fib(n);
		printf("Fib(%d) = %llu\n", n, memo[n]);
	}
	
	return 0;
}
