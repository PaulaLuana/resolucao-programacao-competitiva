#include <iostream>
#include <cmath>

using namespace std;

/*	
 *  cout.precision(4);
	cout.setf(ios::fixed);
*/
int main(){
	string risada, frente, tras;
	cin >> risada;
	
	for(int i = 0; i < (int)risada.size(); i++){
		if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i' or risada[i] == 'o' or risada[i] == 'u'){
			frente += risada[i];
		}
	}
	
	for(int i = (int)risada.size() - 1; i >= 0; i--){
		if(risada[i] == 'a' or risada[i] == 'e' or risada[i] == 'i' or risada[i] == 'o' or risada[i] == 'u'){
			tras += risada[i];
		}
	}
	
	if(frente == tras) cout << "S";
	else cout << "N";
	return 0;
}

