#include <bits/stdc++.h>

using namespace std;

int main(){
	int num;
	cin >> num;
	
	if(num <= 800) cout << "1";
	else if(num > 800 and num <= 1400) cout << "2";
	else if(num > 1400 and num <= 2000) cout << 3;
	return 0;
}
