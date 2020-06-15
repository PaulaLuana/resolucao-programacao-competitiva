#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, t;
	cin >> n >> t;
	vector<pair<string, int> > V;
	vector<pair<int, string> > V1;
	pair<string, int> tmp;
	pair<int, string> aux;

	for(int i = 0; i < n; i++){
		cin >> tmp.first >> tmp.second;
		aux.first = tmp.second;
		aux.second = tmp.first;
		V.push_back(tmp);
		V1.push_back(aux);

	}
	
	sort(V1.begin(), V1.end());
	vector<pair<int, string> > times;
	int num = 1, i = n - 1;
	while(i >= 0){
		if(num > t){
			num = 1;
		}
		aux.first = num;
		aux.second = V1[i].second;
		times.push_back(aux);
		num++;
		i--;
		
	}
	sort(times.begin(), times.end());
	
	for(int i = 1; i <= t; i++){
		cout << "Time " << i << endl;
		for(int j = 0; j < n; j++){
			if(times[j].first == i){
				cout << times[j].second << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
