#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string linha;
	bool ok = true;
	stack <char> pilha;
	cin >> n;
	cin.ignore();
	
	for(int i = 0; i < n; i++){
		getline(cin, linha);
		for(int j = 0; j < (int)linha.size(); j++){
			if(linha[j] == '{'){
				pilha.push(linha[j]);
			}else if(linha[j] == '}'){
				if(pilha.empty()){
					ok = false;
					break;
				}
				pilha.pop();
			}
		}
	}
	
	if(!pilha.empty()) ok = false;
	
	if(ok) cout << "S";
	else cout << "N";
}
