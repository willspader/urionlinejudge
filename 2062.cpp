#include <iostream>

using namespace std;

int main() {
	
	int t, i; cin >> t ; getchar();
	
	string str;
	
	while(t--) {
		cin >> str;
		if (str.size() == 3 && str[0] == 'O' && str[1] == 'B') {
			cout << "OBI";
		} else if (str.size() == 3 && str[0] == 'U' && str[1] == 'R') {
			cout << "URI";
		} else {
			cout << str;
		}
		
		if (t > 0) {
			cout << " ";
		}
	}
	
	cout << "\n";
	
	return 0;
}
