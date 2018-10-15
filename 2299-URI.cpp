#include <iostream>

#define MAXCARAC 1000
#define MAXFRASES 50

int nmrCarac[MAXCARAC];
int sorry[MAXFRASES];
int memo[MAXFRASES][MAXCARAC + 1];

int maxSorry(int idx, int f, int total)
{
	if (idx >= f || total == 0) return 0;
	if (memo[idx][total] == -1)
	{
		if (nmrCarac[idx] > total) memo[idx][total] = maxSorry(idx + 1, f, total);
		else memo[idx][total] = std::max(maxSorry(idx + 1, f, total), sorry[idx] + maxSorry(idx + 1, f, total - nmrCarac[idx]));	
	}
	return memo[idx][total];
}

int main(void)
{
	int c, f, i, j, k = 1;
	
	while (std::cin >> c >> f)
	{
		if (c == 0 && f == 0) break;
		
		for (i = 0; i < f; i++)
		{
			std::cin >> nmrCarac[i];
			std::cin >> sorry[i];
		}
		for (i = 0; i < f; i++)
		{
			for (j = 1; j <= c; j++)
			{
				memo[i][j] = -1;
			}
		}
		std::cout << "Teste " << k << std::endl;
		k++;
		std::cout << maxSorry(0, f, c) << std::endl;
		std::cout << std::endl;
	}
	
	return 0;
}
