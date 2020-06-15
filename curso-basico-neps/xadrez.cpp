#include <bits/stdc++.h>

using namespace std;

int matriz[1000][1000];
int main(){
	int l, c;
	cin >> l >> c;
	
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			if(i == 0 and j == 0){
				matriz[i][j] = 1;
			}else if(j != 0){
				if(matriz[i][j-1] == 1) matriz[i][j] = 0;
				else matriz[i][j] = 1;
			}else if(j == 0){
				if(matriz[i-1][j] == 1) matriz[i][j] = 0;
				else matriz[i][j] = 1;
			}
		}
	}
	
	cout << matriz[l-1][c-1];
	return 0;
}
