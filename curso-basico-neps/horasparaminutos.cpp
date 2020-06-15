#include <bits/stdc++.h>

using namespace std;

int main(){
	int horas, minutos;
	cin >> horas >> minutos;
	
	int total = minutos;
	while(horas > 0){
		if(horas <= 0) break;
		total += 60;
		horas--;
	}
	
	cout << total;
	return 0;
}
