#include <iostream>
#include <cmath>

using namespace std;

int V[10010];

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> V[i];
	}
	
	for(int i = 0; i < n; i++){
		int soma = 0;
		if(i == 0){
			soma = V[i] + V[i+1];
			cout << soma << "\n";
		}else if(i == n-1){
			soma = V[i] + V[i-1];
			cout << soma << "\n";
		}else{
			soma = V[i] + V[i+1] + V[i-1];
			cout << soma << "\n";
		}
	}
	
	return 0;
}
