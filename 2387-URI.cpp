#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

typedef std::pair<int, int> ii;
typedef std::vector< ii > vii;

bool sortbysec(const ii &a, const ii &b) 
{ 
    return (a.second < b.second); 
} 

int main(void)
{
	int n, i, x, y, oldy = -1, count = 0;
	vii schedule;
	vii::iterator it;
	
	std::cin >> n;
	
	for (i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		schedule.push_back(std::make_pair(x, y));
	}
	std::sort(schedule.begin(), schedule.end(), sortbysec);
	for (it = schedule.begin(); it != schedule.end(); it++)
	{
		if (it->first >= oldy)
		{
			count++;
			oldy = it->second;
		}
	}
	std::cout << count << std::endl;
	
	return 0;
}
