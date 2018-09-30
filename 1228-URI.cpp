#include <iostream>

int main(void)
{
	int largada[24], chegada[24], n, i, j, aux, count, k, l;
	
	while (std::cin >> n)
	{
		for (i = 0; i < n; i++) std::cin >> largada[i];
		for (i = 0; i < n; i++) std::cin >> chegada[i];
		
		i--;
		l = i;
		count = 0;
		while (i >= 0)
		{
			j = 0;
			while (largada[j] != chegada[i]) j++;
			while (j != i)
			{
				aux = largada[j + 1];
				largada[j + 1] = largada[j];
				largada[j] = aux;
				j++;
				count++;
			}
			i--;
		}
		std::cout << count << std::endl;
	}
	
	return 0;
}
