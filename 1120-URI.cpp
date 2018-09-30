#include <iostream>

int main(void)
{
	std::string str;
	char nmr, newstr[101];
	short i, j;
	bool flag;
	
	while (std::cin >> nmr >> str)
	{
		if (nmr == '0' && str[0] == '0') break;
		j = 0;
		flag = false;
		for (i = 0; i < str.length(); i++)
		{
			if (str[i] == nmr) continue;
			if (!j && str[i] == '0') continue;
			flag = true;
			newstr[j] = str[i];
			j++;
		}
		if (flag)
		{
			newstr[j] = '\0';
			std::cout << newstr << std::endl;
		}
		else std::cout << 0 << std::endl;
	}
	
	return 0;
}
