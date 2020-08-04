#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
 
    int t, i;
    string str;
    cin >> t;
    getchar();
    
    map<char, int> ledsNeeded;
    
    ledsNeeded.insert( pair<char, int>('1', 2) );
    ledsNeeded.insert( pair<char, int>('2', 5) );
    ledsNeeded.insert( pair<char, int>('3', 5) );
    ledsNeeded.insert( pair<char, int>('4', 4) );
    ledsNeeded.insert( pair<char, int>('5', 5) );
    ledsNeeded.insert( pair<char, int>('6', 6) );
    ledsNeeded.insert( pair<char, int>('7', 3) );
    ledsNeeded.insert( pair<char, int>('8', 7) );
    ledsNeeded.insert( pair<char, int>('9', 6) );
    ledsNeeded.insert( pair<char, int>('0', 6) );
    
    while (t--) {
    	
    	int sum = 0;
    	
    	cin >> str;
    	for (i = 0; i < str.size(); i++) {
    		sum += ledsNeeded[str[i]];
		}
    	printf("%d leds\n", sum);
	}
 
    return 0;
}
