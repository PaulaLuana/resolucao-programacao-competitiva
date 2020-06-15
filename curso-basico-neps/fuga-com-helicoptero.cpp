#include <bits/stdc++.h>

using namespace std;

int pos(int f, int d){
	int soma = f+d;
	if(soma > 15) return 0;
	else if(soma < 0) return 15;
	else return soma;
}
int main(){
	int h, p, f, d;
	cin >> h >> p >> f >> d;
	
	while(f != p and f != h){
		f = pos(f, d);
	}
	
	if(f == p) cout << "N";
	else cout << "S";
	
	return 0;
}
