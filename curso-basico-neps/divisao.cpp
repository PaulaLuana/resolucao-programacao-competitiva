#include <bits/stdc++.h>

using namespace std;

int main(){
	double num1, num2;
	cin >> num1 >> num2;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	double div = (num1 / num2);
	cout << div;
	return 0;
}
