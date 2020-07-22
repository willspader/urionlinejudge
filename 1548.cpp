#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int n, m, i, input, count;
	cin >> n;
	while (n-- > 0) {
		cin >> m;
		vector<int> vct;
		vector<int> vct_compare;
		for (i = 0; i < m; i++) {
			cin >> input;
			vct.push_back(input);
			vct_compare.push_back(input);
		}
		
		sort(vct.begin(), vct.end(), greater<int>());
	
		count = 0;
		for (i = 0; i < m; i++) {
			if (vct[i] == vct_compare[i]) ++count;
		}
		
		cout << count << "\n";
	}
	
	return 0;
}
