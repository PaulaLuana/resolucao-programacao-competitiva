#include <iostream>
using namespace std;

char notas[61];
int main(){
	// dó dó# ré ré# mi fá fá# sol sol# lá lá# si

	for(int i = 0; i < 61; i+=12){
/* maior*/	notas[i] = 'a';
			notas[i+1] = 'b';
/* maior*/	notas[i+2] = 'c';
			notas[i+3] = 'd';
/* maior*/	notas[i+4] = 'e';
/* maior*/	notas[i+5] = 'f';
			notas[i+6] = 'g';
/* maior*/	notas[i+7] = 'h';
			notas[i+8] = 'i';
/* maior*/	notas[i+9] = 'j';
			notas[i+10] = 'k';
/* maior*/	notas[i+11] = 'l';

	}
	notas[60] = 'a';
	
	
	
	
	cout << notas;
}
