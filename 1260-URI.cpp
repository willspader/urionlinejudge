#include <iostream>
#include <iomanip>
#include <map>

int main(void)
{
	std::map<std::string, int> trees;
	std::map<std::string, int>::iterator it;
	std::string str;
	int n, i, count;
	
	std::cin >> n;
	std::cin.ignore();
	getchar();
	for (i = 0; i < n; i++)
	{
		if(i != 0) std::cout << std::endl;
		count = 0;
		while(getline(std::cin, str) && str[0] != '\0')
		{
			it = trees.find(str);
			if (it != trees.end()) trees[str]++;
			else trees.insert(std::pair<std::string, int>(str, 1));
			count++;
		}
		for (it = trees.begin(); it != trees.end(); it++)
		{
			std::cout << std::fixed << std::setprecision(4);
			std::cout << it->first << " " << (it->second/(float)count)*100 << std::endl;
		}
		trees.clear();
	}
	
	return 0;
}
