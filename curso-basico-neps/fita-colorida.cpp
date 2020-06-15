#include <iostream>
#include <cmath>

using namespace std;

int V[10010];

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> V[i];
	}
	
	for(int i = 0; i < n; i++){
		int e = 9, d = 9, aux = 0;
		for(int j = i; j >= 0; j--){
			if(V[j] == 0 or aux > 8){
				e = aux;
				break;
			}
			aux++;
		}
		aux = 0;
		for(int j = i; j < n; j++){
			if(V[j] == 0 or aux > 8){
				d = aux;
				break;
			}
			aux++;
		}
		cout << min(e,d) << " ";
	}
	return 0;
}
