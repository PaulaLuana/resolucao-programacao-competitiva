#include <bits/stdc++.h>

using namespace std;

int main(){
	int num;
	cin >> num;
	int horas = 0, minutos = 0;
	
	while(num >= 60){
		if(num < 60) break;
		num = num - 60;
		horas += 1;
	}
	
	minutos = num;
	cout << horas << endl << minutos;
	
	return 0;
}
