#include <iostream>

using namespace std;

int main() {
	
	int x, y, i;
	string str;
	bool is_wrong;
	
	while (cin >> str) {
		is_wrong = false;
		x = 0;
		y = 0;
		for (i = 0; i < str.length(); i++) {
			if (str[i] == ')') {
				y++;
			} else if (str[i] == '(') {
				x++;
			}
			if (str[i] == ')' && x < y) {
				is_wrong = true;
				break;
			}
		}
		if (!is_wrong && x == y) {
			cout << "correct\n";
		} else {
			cout << "incorrect\n";
		}
	}
	
	return 0;
}
