#include <iostream>

using namespace std;
int main(){
	
	int B, C;
	cin >> B >> C;
	int soma = B + C;
	
	if(soma%2 == 0){
		cout << "Bino";
	}else cout << "Cino";
	
	return 0;
}
