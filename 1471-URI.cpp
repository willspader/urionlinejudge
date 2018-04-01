#include <bits/stdc++.h>

using namespace std;

typedef vector<int> v;

int main ()
{
	int N, R;
	while(cin >> N >> R){
		if (R == N){
			cout << "*" << endl;
			continue;
		}
		v vi;
		for(int i = 0; i < R; i++){
			vi.push_back(i);
		}
		int aux;
		vector<int>::iterator it;
		for(int i = 0; i < N; i++){
			cin >> aux;
			it = find(vi.begin(), vi.end(), aux);
			vi.erase(it);
		}
		for(int i = 0; i < R; i++){
			cout << vi[i] << endl;
		}
	}
}
