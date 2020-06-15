#include <bits/stdc++.h>

using namespace std;

int nApertar(int n, int d, int a){
	int qtdA = 0;
	for(int i = a; i <= n; i++){
		qtdA += 1;
		if(i == d){
			qtdA -= 1; 
			break;
		}else if(i == n and n != d){
			 i = 0;
		}
	}
	
	return qtdA;
}

int main(){
	int n, d, a;
	cin >> n >> d >> a;
			
	cout << nApertar(n, d, a);
}
