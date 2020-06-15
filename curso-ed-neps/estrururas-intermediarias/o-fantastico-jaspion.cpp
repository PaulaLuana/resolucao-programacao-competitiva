#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, m, n; //t - nº de instâncias; m - nº de palavras no dicionários; n - nº de linhas na letra da música;
	cin >> t;
	map<string, string> dicionario;
	string palavra, traducao;
	
	
	while(t--){
		cin >> m >> n;
		cin.ignore();
		dicionario.clear();
		for(int i = 0; i < m; i++){
			getline(cin, palavra);
			getline(cin, traducao);
			dicionario[palavra] = traducao;
		}
		
		for(int i = 0; i < n; i++){
			string texto, saida;
			getline(cin, texto);
			stringstream ss;
			string s;
			ss << texto;
			while(ss >> s){
				if(dicionario.count(s)) saida += dicionario[s] + ' ';
				else saida += s + ' ';
			}
			saida.pop_back();
			cout << saida << endl;
			
		}
		cout << endl;
	}
	return 0;
}
