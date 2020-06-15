#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int mult = 1;
	for(int i = n; i > 0; i--){
		mult *= i;
	}
	
	cout << mult;
	return 0;
}
