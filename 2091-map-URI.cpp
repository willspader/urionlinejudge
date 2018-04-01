#include <iostream>
#include <map>

typedef unsigned long long int ulli;

using namespace std;

int main()
{
	int n;
	ulli aux, pos;
	while(cin >> n)
	{
		if(!n) break;
		map<ulli, int> mymap;
		map<ulli, int>::iterator it;
		for(int i = 0; i < n; i++){
			cin >> aux;
			it = mymap.find(aux);
			if(it != mymap.end()) mymap.erase(it);
			else mymap.insert(pair<ulli, int>(aux, 1));
		}
		for(it=mymap.begin(); it!=mymap.end(); ++it) cout << it->first << endl;
	}
	
	return 0;
}
