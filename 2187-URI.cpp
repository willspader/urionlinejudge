#include <iostream>

int main()
{
	int val, resto, i, j, k, l, n = 1;
	
	while (std::cin >> val)
	{
		if (val == 0) break;
		
		i = val / 50;
		resto = val % 50;
		
		j = resto / 10;
		resto = resto % 10;
		
		k = resto / 5;
		resto = resto % 5;
		
		std::cout << "Teste " << n << std::endl;
		std::cout << i << " " << j << " " << k << " " << resto << std::endl;
		std::cout << std::endl;
		n++;
	}
	
	return 0;
}
