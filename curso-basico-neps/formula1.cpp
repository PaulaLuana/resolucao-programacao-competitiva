#include <iostream>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

int classificacao[110][110], sistema[110], pontuacao[110];
int main(){
	int g, p; 
	while(cin >> g >> p){
		if(g == 0 and p == 0) break;
		for(int i = 1; i <= g; i++){
			for(int j = 1; j <= p; j++){
				int posicao;
				cin >> posicao;
				classificacao[i][posicao] = j;
			}
		}
		
		int s;
		cin >> s;
		while(s--){
			int k;
			cin >> k;
			for(int i = 1; i <= p; i++){
				pontuacao[i] = 0;
			}
			for(int i = 1; i <= k; i++){
				cin >> sistema[i];
			}
			for(int i = 1; i <= g; i++){
				for(int j = 1; j <= k; j++){
					pontuacao[classificacao[i][j]] += sistema[j];
				}
			}
			
			int mx = 0;
			
			for(int i = 1; i <= p; i++){
				mx = max(mx, pontuacao[i]);
			}
			
			for(int i = 1; i <= p; i++){
				if(pontuacao[i] == mx) cout << i << " ";
			}
			
			cout << endl;
			
		}
	}
	return 0;
}
