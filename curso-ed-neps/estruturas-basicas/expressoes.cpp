#include <bits/stdc++.h>

using namespace std;

void ehvalida(string exp){
	stack<char> pilha;
	bool ok = true;
	
	for(int i = 0; i < (int)exp.size(); i++){
		
		if(exp[i] == '(' or exp[i] == '{' or exp[i] == '['){
			pilha.push(exp[i]);
		}else if(exp[i] == ')' or exp[i] == '}' or exp[i] == ']'){
			if(pilha.empty()){
				ok = false;
				break;
			}else if(exp[i] == ')' and pilha.top() != '('){
				ok = false;
				break;
			}
			else if(exp[i] == '}' and pilha.top() != '{'){
				ok = false;
				break;
			}
			else if(exp[i] == ']' and pilha.top() != '['){
				ok = false;
				break;
			}
			pilha.pop();
		}
	}
	
	if(!pilha.empty()){ //Se após processar toda a expressão ainda restar algo, a expressão também é inválida
		ok = false;
	}

	if(ok){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
}

int main(){
	int qtd;
	cin >> qtd;
	string exp;
	
	for(int i = 0; i < qtd; i++){
		cin >> exp;
		ehvalida(exp);
	}
	
	

	return 0;
}
