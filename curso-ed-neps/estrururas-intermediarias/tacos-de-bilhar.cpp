#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, num, prod = 0;
	cin >> n;
	
	set<int> tacos;
	
	for(int i = 0; i < n; i++){
		cin >> num;
		if(tacos.size() == 0){
			tacos.insert(num);
			prod += 2;
		}else if(tacos.count(num)){
			tacos.erase(num);
		}else{
			tacos.insert(num);
			prod += 2;
		}
		
	}
	
	cout << prod;
	
	
	return 0;
}
