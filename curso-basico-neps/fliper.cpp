#include <iostream>

using namespace std;
int main(){
	int P,R;
	cin >> P >> R;
	
	if(P == 1){
		if(R == 0){
			cout << "B";
		}else{
			cout << "A";
		}
	}else{
		cout << "C";
	}
	
	return 0;
}
