#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int A = 0, B = 0;
	for(int i = 0; i < N; i++){
		int interruptor;
		cin >> interruptor;
		if((interruptor == 1) and (A == 0)){
			A = 1;
		}else if((interruptor == 1) and (A == 1)){
			A = 0;
		}else if((interruptor == 2) and (A == 0) and (B == 0)){
			A = 1;
			B = 1;
		}else if((interruptor == 2) and (A == 1) and (B == 0)){
			A = 0;
			B = 1;
		}else if((interruptor == 2) and (A == 0) and (B == 1)){
			A = 1;
			B = 0;
		}else if((interruptor == 2) and (A == 1) and (B == 1)){
			A = 0;
			B = 0;
		}
		
	}
	cout << A << "\n" << B;
	
	return 0;
}
