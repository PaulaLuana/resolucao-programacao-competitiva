#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	
	int dias = 0, i = 0, soma = 0;
	while(i < N){
		int A;
		cin >> A;
		soma += A;
		if(soma >= 1000000){
			dias = i + 1;
			break;
		}
		i++;

	}
	
	cout << dias;
	return 0;
}
