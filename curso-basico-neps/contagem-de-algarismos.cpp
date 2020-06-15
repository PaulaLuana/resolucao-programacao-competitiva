#include <iostream>
#include <cmath>

using namespace std;

/*	
 *  cout.precision(4);
	cout.setf(ios::fixed);
*/
int charToInt(char c){
	return c - '0';
}
int main(){
	int n;
	cin >> n;
	string number;
	int contagem[10]={0};
	
	for(int i = 0; i < n; i++){
		cin >> number;
		for(int j = 0; j < (int)number.size(); j++){
			contagem[charToInt(number[j])]+= 1;
		}
	}
	
	for(int i = 0; i < 10; i++){
		cout << i << " - " << contagem[i] << endl;
	}
	
	return 0;
}
