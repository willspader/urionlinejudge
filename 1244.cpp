#include <iostream>
#include <vector>
#include <string.h>

#define STR_MAX 4000

using namespace std;

vector<string> sortBySize(vector<string> strings) {
	int i, j, idx;
	string bigger;
	vector<string> swap_begin;
	for (i = 0; i < (strings.size() - 1); i++) {
		bigger = strings[i];
		idx = i;
		for (j = i + 1; j < strings.size(); j++) {
			if (bigger.size() < strings[j].size()) {
				bigger = strings[j];
				idx = j;
			}
		}
		if (idx != i) {
			for (j = 0; j < strings.size(); j++) {
				if (j == i) {
					swap_begin.push_back(bigger);
					swap_begin.push_back(strings[j]);
					continue;
				}
				if (j == idx) continue;
				swap_begin.push_back(strings[j]);
			}
			strings = swap_begin;
			
			swap_begin.clear();
		}
	}
	return strings;
}

int main() {
	
	int n; cin >> n; 
	cin.get(); // \n
	
	int i;
	
	while (n-- > 0) {
		vector<string> vct;
		char *split_str;
		char str[STR_MAX];
		cin.getline(str, STR_MAX);
		split_str = strtok(str, " ");
		while (split_str != NULL) {
			vct.push_back(split_str);
			split_str = strtok(NULL, " ");
		}
		
		vct = sortBySize(vct);
	
		for (i = 0; i < (vct.size() - 1); i++) {
			cout << vct[i] << " ";
		}
		cout << vct[vct.size() - 1] << "\n";
	}
	
	return 0;
}

