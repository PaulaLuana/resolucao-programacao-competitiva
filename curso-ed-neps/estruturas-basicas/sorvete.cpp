#include <bits/stdc++.h>

using namespace std;
int main(){
	vector<pair<int, int>> intervalo; /*vector com o intervalo de onde os sorveteiros trabalham*/
	int qtdS, mPraia; /*qtdS - quantidade de sorveteiros	mPraia - metros da praia.*/
	pair<int, int> tmp;
	
	cin >> mPraia >> qtdS;
	
	for(int i = 0; i < qtdS; i++){
		cin >> tmp.first >> tmp.second;
		intervalo.push_back(tmp);
	}
	
	sort(intervalo.begin(), intervalo.end());
	
	pair<int, int> atual = intervalo[0];
	for(int i = 1; i < qtdS; i++){
		if(atual.second >= intervalo[i].first){
			atual.second = max(atual.second,intervalo[i].second);
		}else{
			cout << atual.first << " " << atual.second << endl;
			atual = intervalo[i];
		}
	}
	
	cout << atual.first << " " << atual.second << endl;
	return 0;
}
