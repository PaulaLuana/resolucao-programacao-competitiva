#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int i = 0, soma = 0;
	while(i < n){
		int L, C;
		cin >> L >> C;
		
		if(L > C) soma += C;
		i++;
	}
	
	cout << soma;
	return 0;
}
