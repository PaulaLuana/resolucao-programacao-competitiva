#include <iostream>
using namespace std;

char numero[100000];

int charParaNumero(char n){
	return n - '0';
}

int main(){
	int convert = 0;
	cin >> numero;
	convert += charParaNumero(numero);
	int resto = convert % 3;
	cout << resto;
}
