#include <iostream>

#define CORRIDA 42195

int main(void)
{
	int n, m, i, metros, old = 0;
	bool flag = true;
	
	std::cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		std::cin >> metros;
		if (metros - old > m) flag = false;
		old = metros;
	}
	if (flag && CORRIDA - metros <= m) std::cout << "S" << std::endl;
	else std::cout << "N" << std::endl;
	
	return 0;
}
