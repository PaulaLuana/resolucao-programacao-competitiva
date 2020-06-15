#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c, p, v;
	cin >> c >> n;
	map<int, int> inst; //os que já estão instalados
	map<int, int> atualizado; //novas versões que serão instaladas
	
	for(int i = 0; i < c; i++){
		cin >> p >> v;
		inst[p] = v;
	}
	
	for(int i = 0; i < n; i++){
		cin >> p >> v;
		if(inst.count(p)){//se o programa existe na árvore inst
			if(inst[p] < v) atualizado[p] = max(atualizado[p], v); 	//caso exista, verificamos se a versão que tem, é menor do que a que estamos recebendo.
		}else{													  	//caso seja menor, nós atualizamo.
			atualizado[p] = v;										// se o programa não existir, nós intalamos.
		}
	}
	
	for(auto p : atualizado){
		cout << p.first << " " << p.second << endl;
	}
	
	
}
