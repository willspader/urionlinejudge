#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int t, i, idx; cin >> t; getchar();
	string str;
	while (t--) {
		
		getline(cin, str);
		for (i = 0; i < str.size(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
				str[i] = (str[i] % 127) + 3;	
			}
		}
		
		reverse(str.begin(), str.end());
		
		idx = str.size() / 2;
		for (i = idx; i < str.size(); i++) {
			str[i] = (str[i] % 127) - 1;
		}
		cout << str << "\n";
		
	}
	
	return 0;
}
