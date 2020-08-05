#include <iostream>

using namespace std;

int main() {
	
	string str;
	int i;
	
	while(getline(cin, str)) {
		
		for (i = 0; i < str.size(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				str[i] = ((((str[i] - 65) + 13) % 26 + 26) % 26) + 65;
			}
			if (str[i] >= 'a' && str[i] <= 'z') {
				str[i] = ((((str[i] - 97) + 13) % 26 + 26) % 26) + 97;
			}
		}
		cout << str << "\n";
	}
	
	return 0;
}
