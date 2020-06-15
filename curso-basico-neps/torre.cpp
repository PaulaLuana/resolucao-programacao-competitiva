#include <iostream>
#include <cmath>

using namespace std;

int matriz [1100][1100];

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	
	int linha = 0, soma = 0, somaVerifica = 0, coluna = 0;
	while(linha < n){
		soma = 0;
		/*somando pela linha*/
		
		for(int i = 0; i < n; i++){
			if(coluna != i){
				soma += matriz[linha][i];
			}
		}
		
		/*somando pela coluna*/
		
		for(int i = 0; i < n; i++){
			if(linha != i){
				soma += matriz[i][coluna];
			}
		}
		
		if(soma > somaVerifica){
			somaVerifica = soma;
		}
		coluna++;
		if(coluna == n){
			linha ++;
			coluna = 0;
		}
	}
	
	cout << somaVerifica;
	
	return 0;
}
