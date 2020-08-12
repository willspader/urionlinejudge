#include <iostream>
#include <set>

using namespace std;

int main() {
	
	int t, i; cin >> t; getchar();
	string str;
	set<char> letters;
	
	while(t--) {
		
		getline(cin, str);
		for (i = 0; i < str.size(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				letters.insert(str[i]);	
			}
		}
		
		if (letters.size() == 26) cout << "frase completa\n";
		else if (letters.size() >= 13) cout << "frase quase completa\n";
		else cout << "frase mal elaborada\n";
		letters.clear();
	}
	
	return 0;
}
