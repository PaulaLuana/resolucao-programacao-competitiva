#include <vector>
#include <iostream>

using namespace std;

int main(){
	int n;
	vector<int> decomp;
	vector<int> desp;
	
	
	cin >> n;
	//int valor = n/2;
	/*for(int i = 2; i < valor; i++){
		if((n % i) == 0){
			decomp.push_back(i);
		}
	}*/
	int i = 2;
	int n1 = n/2;
	int cont = 0;
	while(i <= n1){
		while(n1 != 1){
			if((n1 % i) == 0){
				decomp.push_back(i);
				n1 /= i;
			}
			else{
				break;
			}
		}
		i++;
	}
	desp.push_back(decomp[1]);
	for(int i = 0; i < (int)decomp.size(); i++){
			if(decomp[i] != desp[i]){
				desp.push_back(decomp[i]);
				cont++;
			}
		
	}
	
	cout << cont << endl;
	
}
