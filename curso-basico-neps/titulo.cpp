#include <iostream>
#include <ctype.h>

using namespace std;

string title(string F){
	for(int i = 0; i < (int)F.size(); i++){
		F[0] = toupper(F[0]);
		if(F[i - 1] == ' ') F[i] = toupper(F[i]);
		else if(F[i-1] == ' ' and F[i+1] == ' ') F[i + 1] = toupper(F[i + 1]);
		else F[i] = tolower(F[i]);

	}
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
