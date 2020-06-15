#include <iostream>

using namespace std;

int V[10010];
int main(){
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> V[i];
	}
	
	int count = 1, maior = 1;
	for(int i = 0; i < N-1; i++){
		if(V[i] == V[i + 1]){
			count += 1;
			if(count > maior) maior = count;
		}else{
			count = 1;
			if(count > maior) maior = count;

		}
	}
	
	
	cout << maior;
	
	return 0;
}
