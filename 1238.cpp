#include <iostream>

using namespace std;

int main() {
	
	int t, i, lim; cin >> t;
	getchar();
	string str1, str2;
	
	while (t--) {
		cin >> str1 >> str2;
		string resul;
		
		lim = str1.size() > str2.size() ? str1.size() : str2.size();
		
		for (i = 0; i < lim; i++) {
			if (i < str1.size()) {
				resul.push_back(str1[i]);	
			}
			if (i < str2.size()) {
				resul.push_back(str2[i]);	
			}
		}
		cout << resul << "\n";
	}
	
	return 0;
}
