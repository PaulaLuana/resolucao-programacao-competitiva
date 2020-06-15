#include <bits/stdc++.h>

using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	
	double mediaP = ((a*2) + (b*3))/(2+3);
	
	if(mediaP >= 7) cout << "Aprovado";
	else if(mediaP < 3) cout << "Reprovado";
	else cout << "Final";
	
	return 0;
}
