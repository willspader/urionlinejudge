#include <bits/stdc++.h>

using namespace std;

const int MAXCPF = 15;
const int ASCII = 48;

int main ()
{
	char vetc[MAXCPF];
	while(fgets(vetc, MAXCPF, stdin)){
		getchar();
		int somab1 = 0, somab2 = 0, totb1, totb2, k, l, b1, b2;
		for(int i = 0, j = 10; i < 11; i++, j--){
			k = i;
			l = j;
			if (i == 3 || i == 7) continue;
			if (i > 3){
				if (i > 7) k = i - 1;
				if (j < 3) l = j + 1;
				totb1 = (vetc[i]-ASCII) * k;
				totb2 = (vetc[i]-ASCII) * l;
			}else{
				totb1 = (vetc[i]-ASCII) * (k+1);
				totb2 = (vetc[i]-ASCII) * (l-1);
			}
			somab1 = somab1 + totb1;
			somab2 = somab2 + totb2;
		}
		b1 = somab1 % 11;
		if (b1 == 10) b1 = 0;
		b2 = somab2 % 11;
		if(b2 == 10) b2 = 0;
		if (b1 == vetc[12]-ASCII && b2 == vetc[13]-ASCII) cout << "CPF valido" << endl;
		else cout << "CPF invalido" << endl;
	}
	return 0;
}
