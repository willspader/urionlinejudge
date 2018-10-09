#include <iostream>

#define MAX 101

int main(void)
{
	int n, i, j, maior, count;
	bool mat[MAX][MAX];
	
	while(true)
	{
		std::cin >> n;
		if (!n) break;
		
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				std::cin >> mat[i][j];
			}
		}
		maior = -1;
		for (i = 0; i < n; i++)
		{
			count = 0;
			for (j = 0; j < n; j++)
			{
				if (mat[j][i]) count++;
			}
			if (count > maior) maior = count;
		}
		std::cout << maior << std::endl;
	}
	
	return 0;
}
