#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> mymap;
	map<string, int>::iterator it;
	
	string nome;
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		cin >> nome;
		mymap.insert(pair<string, int>(nome, 1));
	}
	int i = 1;
	for(it = mymap.begin(); it != mymap.end(); ++it, ++i)
	{
		if(i == k)
		{
			cout << it -> first << endl;
			break;
		}
	}
	return 0;
}
