#include <iostream>
#include <cmath>
using namespace std;

int matriz [15][15];
int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	
	int somaVerifica = 0, soma, linha = 0;
	/*Conferindo as linhas*/
	
	while(linha < n){
		soma = 0;
		for(int j = 0; j < n; j++){
			soma += matriz[linha][j];
		}
		
		if(linha == 0){
			somaVerifica = soma;
		}else{
			if(soma != somaVerifica){
				somaVerifica = -1;
				break;
			}
		}
		linha++;
	
	}
	if(somaVerifica != -1){
		int coluna = 0;
		/*Conferindo as colunas*/
		
		while(coluna < n){
			soma = 0;
			for(int j = 0; j < n; j++){
				soma += matriz[j][coluna];
			}
			
			if(coluna == 0){
				if(soma != somaVerifica){
					somaVerifica = -1;
					break;
				}
				somaVerifica = soma;
			}else{
				if(soma != somaVerifica){
					somaVerifica = -1;
					break;
				}
			}
			coluna++;
		
		}

	}	
	/*Conferindo a diagonal principal*/
	if(somaVerifica != -1){
		soma = 0;
		for(int j = 0; j < n; j++){
			soma += matriz[j][j];
		}
		
		if(soma != somaVerifica){
			somaVerifica = -1;
		}else{
			somaVerifica = soma;
		}
	}
	/*Conferindo a diagonal secundária*/
	
	if(somaVerifica != -1){
		soma = 0;
		int i = 0, j = n - 1;
		while(i < n){
			soma += matriz[i][j];
			i++;
			j--;
		}
		
		if(soma != somaVerifica){
			somaVerifica = -1;
		}else{
			somaVerifica = soma;
		}
	}

	cout << somaVerifica;
	
	
		
	return 0;
}
