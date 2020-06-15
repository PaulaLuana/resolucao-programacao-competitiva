#include <iostream>

using namespace std;
int main(){
	
	int p1,c1,p2,c2;
	cin >> p1 >> c1 >> p2 >> c2;
	
	int mult1 = p1 * c1, mult2 = p2 * c2;
	
	if(mult1 == mult2) cout << "0";
	else if(mult1 > mult2) cout << "-1";
	else cout << "1";
	
	return 0;
}
