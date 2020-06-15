#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> cobra;
	int num;
	
	for(int i = 0; i < 4; i++){
		cin >> num;
		cobra.push_back(num);
	}
	
	if(cobra[0] != cobra[3]) cout << "V";
	else cout << "F";
}
