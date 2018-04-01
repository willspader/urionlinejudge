#include <iostream>

using namespace std;

int main ()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		int S, QT, val, vencedor;
		float mediaIni;
		cin >> QT >> S;
		cin >> val;
		vencedor = 1;
		mediaIni = ((val + S) / 2.0) - S;
		if (mediaIni < 0) mediaIni = mediaIni * -1;
		for(int j = 2; j <= QT; j++){
			float media2;
			cin >> val;
			media2 = ((val + S) / 2.0) - S;
			if (media2 < 0) media2 = media2 * -1;
			if (media2 < mediaIni && j != vencedor){
				vencedor = j;
				mediaIni = media2; 
			}
		}
		cout << vencedor << endl;
	}
	return 0;
}
