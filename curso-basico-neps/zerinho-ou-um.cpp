#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	
	if(n1 != n2 and n2 == n3) cout << "A";
	else if(n1 == n3 and n2 != n3) cout << "B";
	else if(n1 == n2 and n2 != n3) cout << "C";
	else cout << "*";
	return 0;
}
