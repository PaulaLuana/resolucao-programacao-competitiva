#include <iostream>
#include <cmath>

using namespace std;

/*	
 *  cout.precision(4);
	cout.setf(ios::fixed);
*/

string gabarito;
string resposta;

int main(){
	int n;
	cin >> n >> gabarito >> resposta;
	
	int soma = 0;
	for(int i = 0; i < n; i++){
		if(gabarito[i] == resposta[i]) soma+=1;
	}
	
	cout << soma;
	return 0;
}
