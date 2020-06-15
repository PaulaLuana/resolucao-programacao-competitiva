#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> inverso;
	int num;
	
	for(int i = 0; i < 10; i++){
		cin >> num;
		inverso.push_back(num);
	}
	
	reverse(inverso.begin(), inverso.end());
	
	for(int i = 0; i < 10; i++){
		cout << inverso[i] << endl;
	}
}
