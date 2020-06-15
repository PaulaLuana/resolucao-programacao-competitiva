#include <bits/stdc++.h>

using namespace std;

bool ehPrimo(int n){
	if(n < 2){
		return false;
	}else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return false;
			}
		}
	}
	
	return true;
	
}

int main(){
	int n;
	cin >> n;
	
	if(ehPrimo(n) == true) cout << "S";
	else cout << "N";
	
	return 0;
}
