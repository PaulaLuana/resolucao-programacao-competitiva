#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, num;
	set<int> s;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> num;
		s.insert(num);
	}
	
	cout << s.size();
    
	return 0;
}
