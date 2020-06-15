#include <iostream>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

/*	
 *  cout.precision(4);
	cout.setf(ios::fixed);
*/

int v[100010];

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v, v+n);
	
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	return 0;
}
