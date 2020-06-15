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
	
	int count = 0;
	for(int i = 0; i < n-2; i++){
		if(V[i] == 1 and V[i + 1] == 0 and V[i + 2] == 0) count +=1;

	}
	cout << count;
	
	return 0;
}
