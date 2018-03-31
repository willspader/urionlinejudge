#include <iostream>
#include <string>

using namespace std;

int main ()
{	
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		string str;
		cin >> str;
		int flag, j = 0, tam = 0, cont = 0;
		bool k = false, flag2 = true;
		while(tam < str.size()){
			if (str[j] == '<' && flag2){
				flag = j;
				flag2 = false;
			}
			if (str[j] == '>' && j > flag){
				cont++;
				str.erase(str.begin()+(flag--));
				j = j - 1;
				str.erase(str.begin()+j);
				k = true;
				flag2 = true;
			}
			if (k){
				j = 0;
				tam = 0;
				k = false;
			}else{
				j++;
				tam++;
			}
		}
		cout << cont << endl;
	}
	return 0;
}
