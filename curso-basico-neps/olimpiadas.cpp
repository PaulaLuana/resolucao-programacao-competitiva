#include <iostream>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

struct Pais{
	int id;
	int ouro;
	int prata;
	int bronze;
	
	Pais(){
		ouro = 0;
		prata = 0;
		bronze = 0;
	}
};

bool compara(Pais a, Pais b){
	if(a.ouro != b.ouro) return a.ouro > b.ouro;
	else if(a.prata != b.prata) return a.prata > b.prata;
	else if(a.bronze != b.bronze) return a.bronze > b.bronze;
	else return a.id < b.id;

}

int pOuro[110], pPrata[110], pBronze[110];

int main(){
	int n, m;
	cin >> n >> m;
	Pais pais[n];
	
	for(int i = 0; i < m; i++){
		cin >> pOuro[i] >> pPrata[i] >> pBronze[i];
	} 
	
	for(int i = 0; i < n; i++){
		pais[i].id = i + 1;
	} 
	
	
	int j = 0;
	while(j < n){
		for(int i = 0; i < m; i++){
			if(pOuro[i] == pais[j].id) pais[j].ouro += 1;
			if(pPrata[i] == pais[j].id) pais[j].prata += 1;
			if(pBronze[i] == pais[j].id) pais[j].bronze += 1;
		}
		j++;
	}
	
	sort(pais,pais+n,compara);
	
	for(int i = 0; i < n; i++){
		cout << pais[i].id << " ";
	}
	
	return 0;
}
