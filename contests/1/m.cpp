#include <vector>
#include <iostream>

using namespace std;

int main(){
	int pessoas, andar0, andar1, andar2;
	int menor = 0;
	vector<int> andares;
	
	for(int i = 0; i < 3; i++){
		cin >> pessoas;
		andares.push_back(pessoas);
	}
	
	andar0 = (andares[1] * 2) + (andares[2] * 4);
	andar1 = (andares[0] * 2) + (andares[2] * 2);
	andar2 = (andares[1] * 2) + (andares[0] * 4);
	
	menor = min(andar0, min(andar1, andar2));
	
	
	cout << menor << endl;
	
}
