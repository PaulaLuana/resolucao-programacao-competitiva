#include <iostream>
#include <cmath>

using namespace std;

int main(){
	char operacao;
	cin >> operacao;
	double n1, n2;
	cin >> n1 >> n2;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	if(operacao == 'M') cout << n1*n2;
	else cout << n1/n2;
	return 0;
}
