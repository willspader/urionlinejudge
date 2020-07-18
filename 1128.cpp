#include <iostream>
#include <vector>

#define MAX 2002

using namespace std;

vector<int> adj[MAX];

bool visited[MAX];

void dfs(int v) {
	visited[v] = true;
	for (int w : adj[v]) {
		if (visited[w]) continue;
		dfs(w);
	}
}

int main() {
	
	int n, m;
	cin >> n >> m;
	while (n > 0 && m > 0) {
		int i, v, w, p;
		for (i = 0; i < m; i++) {	
			cin >> v >> w >> p;
			if (p == 1) {
				adj[v].push_back(w);	
			} else if (p == 2) {
				adj[v].push_back(w);
				adj[w].push_back(v);
			}
		}
		
		bool ans = true;
		
		int j;
		for (i = 1; i <= n && ans; i++) {
			dfs(i);
			for (j = 1; j <= n; j++) {
				if (!visited[j]) {
					ans = false;
					break;
				}
				visited[j] = false;
			}
		}
		
		if (ans) cout << 1 << "\n";
		else cout << 0 << "\n";
		
		for (i = 1; i <= n; i++) {
			adj[i].clear();
			visited[i] = false;
		}
		
		cin >> n >> m;
	}
	
	return 0;
}
