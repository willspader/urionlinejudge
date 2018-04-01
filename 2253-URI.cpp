#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string S;
	while (getline(cin, S)){
		bool numero = false, maiuscula = false, minuscula = false, especial = false, svalida = false;
		if(S.size() >= 6 && S.size() <= 32){
			for(int i = 0; i < S.size(); i++){
				if (S[i] >= 65 && S[i] <= 90) maiuscula = true;
				else if(S[i] >= 97 && S[i] <= 122) minuscula = true;
				else if(S[i] >= 48 && S[i] <= 57) numero = true;
				else especial = true;
				if(especial) break;
			}
			if(maiuscula && minuscula && numero && especial == false) svalida = true;
		}else svalida = false;
		if (svalida) cout << "Senha valida." << endl;
		else cout << "Senha invalida." << endl;
	}
	return 0;
}
