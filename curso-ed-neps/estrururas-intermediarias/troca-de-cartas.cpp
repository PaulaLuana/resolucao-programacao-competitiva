#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, num;
	set<int> sA, sB;
	cin >> a >> b;
	
	for(int i = 0; i < a; i++){
		cin >> num;
		sA.insert(num);
	}
	
	for(int i = 0; i < b; i++){
		cin >> num;
		sB.insert(num);
	}

		
	int soma = 0;
	if(sA.size() <= sB.size()){
		for(auto i : sA){
			if(!sB.count(i)) soma += 1;
		}
	}else{
		for(auto j : sB){
			if(sA.count(j) == false) soma += 1;
		}
	}
	
	cout << soma;
}
