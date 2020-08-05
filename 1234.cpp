#include <iostream>

using namespace std;

int main() {
	
	int i, j;
	string str;
	
	while (getline(cin, str)) {
		for (i = 0, j = 0; i < str.size(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
				if (j % 2 == 0) {
					if ((str[i] - 32 >= 'A' && str[i] - 32 <= 'Z')) {
						str[i] = str[i] - 32;	
					}
				} else {
					if (str[i] + 32 >= 'a' && str[i] + 32 <= 'z') {
						str[i] = str[i] + 32;	
					}	
				}
				j++;
			}
		}
		cout << str << "\n";
	}
	
	return 0;
}
