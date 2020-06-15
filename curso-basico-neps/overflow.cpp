#include <iostream>
#include <cmath>

using namespace std;

/*	
 *  cout.precision(4);
	cout.setf(ios::fixed);
*/
int main(){
	int n, p, q;
	cin >> n;
	char c;
	
	cin >> p >> c >> q;
	
	int operacao;
	if(c == '+') operacao = p + q;
	else operacao = p * q;
	
	if(operacao > n) cout << "OVERFLOW";
	else cout << "OK";
	
	return 0;
}
