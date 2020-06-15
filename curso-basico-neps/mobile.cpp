#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a == b + c + d and b + c == d and b == c) cout << "S";
	else cout << "N";

	return 0;
}
