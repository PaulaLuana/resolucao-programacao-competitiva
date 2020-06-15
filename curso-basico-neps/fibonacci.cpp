#include <iostream>
#include <cmath>

using namespace std;

int fib(int n){
	if(n == 1 or n == 0) return 1;
	return fib(n-1) + fib(n-2);
}

/*	
 *  cout.precision(4);
	cout.setf(ios::fixed);
*/
int main(){
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}
