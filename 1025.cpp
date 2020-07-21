#include <iostream>
#include <algorithm>

using namespace std;

int binary_search_position(int vet[], int l, int r, int val) {
	
	if (l > r) return -1;
	
	int mid = (l + r) / 2;
	
	if (vet[mid] == val) {
		int i;
		while (vet[mid] == val) {
			--mid;
		}
		return ++mid;
	} else if (vet[mid] > val) {
		binary_search_position(vet, l, mid - 1, val);
	} else {
		binary_search_position(vet, mid + 1, r, val);
	}
	
}

int main() {
	
	int n, q, i, j;
	cin >> n >> q;
	
	for (j = 1; n != 0 && q != 0; j++) {
		int vet[n];
		int search[q];
		
		for (i = 0; i < n; i++) {
			cin >> vet[i];
		}
		
		sort(vet, vet + n);
		
		int pos;
		
		for (i = 0; i < q; i++) {
			cin >> search[i];
		}
		
		printf("CASE# %d:\n", j);
		for (i = 0; i < q; i++) {
			pos = binary_search_position(vet, 0, n - 1, search[i]);
			if (pos != -1) {
				printf("%d found at %d\n", search[i], ++pos);
			} else {
				printf("%d not found\n", search[i]);
			}
		}
		
		cin >> n >> q;	
	}
	
	return 0;
}
