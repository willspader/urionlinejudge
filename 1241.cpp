#include <iostream>

using namespace std;

int main() {
	
	int t, i, j; cin >> t; getchar();
	string str1, str2;
	bool it_fits;
	while (t--) {
		
		cin >> str1 >> str2;
		
		it_fits = false;
		if (str2.size() <= str1.size()) {
			for (i = (str1.size() - str2.size()), j = 0; i < str1.size(); i++, j++) {
				if (str1[i] != str2[j]) {
					it_fits = false;
					break;
				} else {
					it_fits = true;
				}
			}
		}
		
		if (it_fits) cout << "encaixa\n";
		else cout << "nao encaixa\n";
		
	}
	
	return 0;
}
