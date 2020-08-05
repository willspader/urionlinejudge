#include <iostream>

using namespace std;

int main() {
	
	int t, jump, i; cin >> t;
	string str;
	
	while (t--) {
		cin >> str;
		cin >> jump;
		for (i = 0; i < str.size(); i++) {
			str[i] = ((((str[i] - 65) - jump) % 26 + 26) % 26) + 65; // % operator isn't the modulo operator but the division remainder
		}
		cout << str << "\n";
	}
	
	return 0;
}
