#include <iostream>

using namespace std;


int soma_vetor(int n, int *v){
	int soma = 0;
	for(int i = 0; i < n; i++){
		soma += v[i];
	}
	return soma;
}

int main(){
	
	int n, *v;
	cin >> n;
	v = (int*)(malloc(n * sizeof(int)));
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}
