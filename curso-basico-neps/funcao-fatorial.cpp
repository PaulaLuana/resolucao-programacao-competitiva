#include <bits/stdc++.h>

using namespace std;

int fatorial(int n){
	int mult = 1;
	for(int i = n; i > 1; i--){
		mult *= i;
	}
	return mult;
}

int main(){
	int n;
	cin >> n;
	cout << fatorial(n);
}
