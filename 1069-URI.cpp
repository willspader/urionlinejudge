#include <iostream>
#include <string>

using namespace std;

int main ()
{	
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int cont = 0;
		string str;
		cin >> str;
		int aux = 0;
		for (int j = aux; j < str.size(); j++){
			if (str[j] == '<'){
				for(int k = j+1; k < str.size(); k++){
					if (str[k] == '>'){
						cont++;
						str.erase(str.begin()+(j--));
						k = k - 1;
						str.erase(str.begin()+k);
						break;
					}
				}
			}
			aux = j;
		}
		cout << cont << endl;
	}
	return 0;
}
