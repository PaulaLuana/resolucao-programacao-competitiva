#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> medalhas;
	vector<int> campeoes;
	int num;
	
	for(int i = 0; i < 3; i++){
		cin >> num;
		medalhas.push_back(num);
	}
	
	int j = 0;
	while(j < 3){
		int menor = 1001;
		for(int i = 0; i < 3; i++){
			menor = min(menor, medalhas[i]);
		}
				
		for(int i = 0; i < 3; i++){
			if(medalhas[i] == menor){
				campeoes.push_back(i+1);
				medalhas[i] = 1001;
			}
		}
		
		j++;
		

	}
	
	for(int i = 0; i < 3; i++){
		cout << campeoes[i] << endl;
	}
	
	return 0;
}
