#include <bits/stdc++.h>

using namespace std;

int main(){
	queue<int> fila;
	queue<int> filaL;
	int pontuacao;
	
	for(int i = 0; i < 30; i++){
		cin >> pontuacao;
		fila.push(pontuacao);
	}
	
	
	for(char ch = 65; ch <= 80; ch++){
		filaL.push(ch);
	}
	
	
	int p1 = -1;
	char letra;
	
	while(fila.empty() == false){
		p1 = fila.front(); //primeiro elemento da fila
		fila.pop(); //apago o primeiro elemento da fila para comparar com o segundo
		if(p1 > fila.front()){ //se o primeiro elemento for maior que o segundo
			fila.pop(); //então apago o segundo
			letra = filaL.front(); //pego a letra que representa o primeiro elemento
			filaL.pop(); //apago as duas primeiras letras que representam o primeiro jogador e o segundo;
			filaL.pop();
			filaL.push(letra); //coloco quem ganhou no final da fila;
			
		}else{ //quando primeiro da fila não ganha
			fila.pop();
			filaL.pop(); 
			letra = filaL.front();
			filaL.pop();
			filaL.push(letra);
		}
	}
	letra = filaL.front();
	cout << letra;
	
	return 0;
}
