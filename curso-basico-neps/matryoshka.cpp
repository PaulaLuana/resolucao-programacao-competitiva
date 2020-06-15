#include <iostream>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

/*	
 *  cout.precision(4);
	cout.setf(ios::fixed);
*/

int v1[100010], v2[100010], v3[100010];
/*v1 -> vetor desordenado, v2 -> vetor comparativo ordenado, v3 -> o vetor com o número das bonecas que precisam mudar de posição*/

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> v1[i];
		v2[i] = v1[i];
	}
	
	sort(v2, v2+n);
	
	int soma = 0, tam = 0;
	for(int i = 0; i < n; i++){
		if(v1[i] != v2[i]){
			soma += 1;
			v3[tam] = v1[i];
			tam += 1;
		}
	}
	
	cout << soma << endl;
	
	sort(v3, v3+tam);
	
	for(int i = 0; i < tam; i++){
		cout << v3[i] << " " ;
	}
	
	return 0;
}
