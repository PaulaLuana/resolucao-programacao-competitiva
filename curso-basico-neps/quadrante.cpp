#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	
	if(x > 0 and y > 0) cout << "Q1";
	else if(x < 0 and y > 0) cout << "Q2";
	else if(x < 0 and y < 0) cout << "Q3";
	else if(x > 0 and y < 0) cout << "Q4";
	else cout << "eixos";
	return 0;
}
