#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> n;
	int num;
	int maior = 0;
	
	for(int i = 0; i < 3; i++){
		cin >> num;
		n.push_back(num);
	}
	
	for(int i = 0; i < 3; i++){
		if(n[i] > maior) maior = n[i];
	}
	
	cout << maior;
}
