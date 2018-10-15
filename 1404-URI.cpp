#include <iostream>

#define MAX 20

int tbl[MAX][MAX];
bool visited[MAX][MAX];
int n, m;

bool isSafe(int idx, int idy, int iate, int jate)
{
	return (idx < n && idy < m && idx >= 0 && idy >= 0 && !visited[iate][jate] && tbl[idx][idy] == 0 && tbl[iate][jate] == 2);
}

int maxCheckers(int idx, int idy)
{	
	int count = 0;
	if (isSafe(idx + 2, idy + 2, idx + 1, idy + 1))
	{
		visited[idx + 1][idy + 1] = true;
		count = std::max(1 + maxCheckers(idx + 2, idy + 2), count);
		visited[idx + 1][idy + 1] = false;
	}
	if (isSafe(idx - 2, idy + 2, idx - 1, idy + 1))
	{
		visited[idx - 1][idy + 1] = true;
		count = std::max(1 + maxCheckers(idx - 2, idy + 2), count);
		visited[idx - 1][idy + 1] = false;
	}
	if (isSafe(idx + 2, idy - 2, idx + 1, idy - 1))
	{
		visited[idx + 1][idy - 1] = true;
		count = std::max(1 + maxCheckers(idx + 2, idy - 2), count);
		visited[idx + 1][idy - 1] = false;
	}
	if (isSafe(idx - 2, idy - 2, idx - 1, idy - 1))
	{
		visited[idx - 1][idy - 1] = true;
		count = std::max(1 + maxCheckers(idx - 2, idy - 2), count);
		visited[idx - 1][idy - 1] = false;
	}
	return count;
}

int main(void)
{
	int i, j;
	while(std::cin >> n >> m)
	{
		if (n == 0 && m == 0) break;
		
		for (i = 0; i < n; i++)
		{
			for (j = (i % 2); j < m; j += 2)
			{
				std::cin >> tbl[i][j];
			}
		}
		
		int countTot = 0;
		for (i = 0; i < n; i++)
		{
			for (j = (i % 2); j < m; j += 2)
			{
				if (tbl[i][j] == 1)
				{
					tbl[i][j] = 0;
					countTot = std::max(maxCheckers(i, j), countTot);
					tbl[i][j] = 1;
				}
			}
		}
		std::cout << countTot << std::endl;
	}
	return 0;
}
