#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n;
	vector<int> v;
	
	int num;
	for(int i = 0; i < n; i++){
		cin >> num;
		v.push_back(num);
	}
	
	cin >> m;
	vector<int> v1; //vetor dos que saíram da fila
	
	int num1;
	for(int i = 0; i < m; i++){
		cin >> num1;
		v1.push_back(num1);
	}
	
	
	
	vector<int> vfinal;
	
	for(int i = 0; i < (int)v.size(); i++){
		vfinal.push_back(v[i]);
		for(int j = 0; j < (int)v1.size(); j++){
			if(v[i] == v1[j]){
				vfinal.pop_back();
				break;
			}
		}
	}
	
	for(int i = 0; i < (int)vfinal.size(); i++){
		cout << vfinal[i] << " ";
	}
	return 0;
}
