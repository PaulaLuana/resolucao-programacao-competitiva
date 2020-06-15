#include <bits/stdc++.h>

using namespace std;

int main(){
	int num;
	cin >> num;
	
	int soma = 0, n;
	
	for(int i = 0; i < num; i++){
		cin >> n;
		soma += n;
	}
	
	cout << soma;
	return 0;
}
