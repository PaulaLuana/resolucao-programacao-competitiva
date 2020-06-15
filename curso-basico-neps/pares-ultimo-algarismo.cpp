#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int num;
	int cont = 0;
	
	for(int i = 0; i < 3; i++){
		cin >> num;
		v.push_back(num);
	}
	
	for(int i = 0; i < 3; i++){
		if(v[i] % 5 == 0 and v[i] % 2 != 0) cont++;
		else if(v[i] % 2 == 0) cont++;
	}
	
	cout << cont;
}
