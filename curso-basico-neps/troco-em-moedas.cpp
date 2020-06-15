#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	// cem - 1 real
	int cem = 0, cinquenta = 0, vinteC = 0, dez = 0, cinco = 0, um = 0;
	int total = 0, resto = 0;
	
	if(n >= 100){
		while(true){
			total += 100;
			cem += 1;
			if((total + 100) > n) break;
		}
	}
	resto = n - total;
	if(resto >= 50){
		while(true){
			total += 50;
			cinquenta += 1;
			if((total + 50) > n) break;
		}
	}
	
	resto = n - total;
	
	if(resto >= 25){
		while(true){
			total += 25;
			vinteC += 1;
			if((total + 25) > n) break;
		}
	}
	
	resto = n - total;
	
	if(resto >= 10){
		while(true){
			total += 10;
			dez += 1;
			if((total + 10) > n) break;
		}
	}
	
	resto = n - total;
	
	if(resto >= 5){
		while(true){
			total += 5;
			cinco += 1;
			if((total + 5) > n) break;
		}
	}
	
	resto = n - total;
	
	if(resto >= 1){
		while(true){
			total += 1;
			um += 1;
			if((total + 1) > n) break;
		}
	}
	
	int soma = cem + cinquenta + vinteC + dez + cinco + um;
	cout << soma << endl;
	cout << cem << endl;
	cout << cinquenta << endl;
	cout << vinteC << endl;
	cout << dez << endl;
	cout << cinco << endl;
	cout << um << endl;
	
	
	return 0;
}
