#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d, dig;
	string num;
	stack<char> pilha;
	
	while(true){
		cin >> n >> dig;
		if(n == 0 and dig == 0){
			break;
		}
		cin >> num;
		
		d = dig;
		for(int i = 0; i < n; i++){
			while(!pilha.empty() and d > 0 and num[i] > pilha.top()){
				pilha.pop();
				d--;
			}
			pilha.push(num[i]);
			
		}
		
		while(d > 0){
			pilha.pop();
			d--;
		}
		
		string maior(n-dig, '0');
		for(int i = 0; i < n-dig; i++){
			maior[i] = pilha.top();
			pilha.pop();
		}
		
		reverse(maior.begin(), maior.end());
		
		cout << maior << endl;
	}
	
}
