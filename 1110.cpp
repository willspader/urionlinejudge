#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	
	int n, i;
	cin >> n;
	while (n > 0) {
		
		vector<int> vct;
		queue<int> discarted;
		
		for (i = n; i >= 1; i--) {
			vct.push_back(i);
		}
		
		while (vct.size() > 1) {
			discarted.push(vct.back());
			vct.pop_back();
			vct.insert(vct.begin(), vct.back());
			vct.pop_back();
		}
		
		if (discarted.size() > 1) {
			printf("Discarded cards: ");	
		}
		while (discarted.size() > 1) {
			printf("%d, ", discarted.front());
			discarted.pop();
		}
		if (discarted.size() == 1) {
			printf("%d\n", discarted.front());	
		}
		
		printf("Remaining card: ");
		printf("%d\n", vct.back());
		
		cin >> n;
	}
	
	return 0;
}
