#include <iostream>
#include <algorithm>

using namespace std;

typedef struct {
	string name;
	int gold;
	int silver;
	int bronze;
}MODEL;

bool compare_data(MODEL x, MODEL y) {
	if (x.gold != y.gold) {
		return x.gold > y.gold;
	} else if (x.silver != y.silver) {
		return x.silver > y.silver;
	} else if (x.bronze != y.bronze) {
		return x.bronze > y.bronze;
	}
	return x.name < y.name;
}

void ranking(MODEL data[], int n) {
	sort(data, data+n, &compare_data);
}

int main() {
	
	int n;
	cin >> n;
	
	MODEL data[n];  
	
	int i;
	for(i = 0; i < n; i++) {
		cin >> data[i].name;
		cin >> data[i].gold;
		cin >> data[i].silver;
		cin >> data[i].bronze;
	}
	
	ranking(data, n);
	
	for (i = 0; i < n; i++) {
		cout << data[i].name;
		cout << " " << data[i].gold;
		cout << " " << data[i].silver;
		cout << " " << data[i].bronze << "\n";
	}
	
	return 0;
}
