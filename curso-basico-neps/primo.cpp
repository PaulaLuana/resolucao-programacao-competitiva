#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(int x){
	if(x == 1) return false;
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0) return false;
	}
	return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x) == true){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
