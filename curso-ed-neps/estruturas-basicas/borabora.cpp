#include <bits/stdc++.h>

using namespace std;

typedef pair<int, char> carta;
vector<carta> jogador[12];
carta baralho[310];
int pos;

int temGanhador(int p){
	for(int i=0; i<p; i++){
		if(jogador[i].empty())
			return i;
	}
	return -1;
}
carta pegarCarta(){	
	return baralho[pos++];
}
int proximo(int vez, int sentido, int p){
	vez += sentido;
	if(vez == -1)
		vez = p-1;
	else if(vez == p)
		vez = 0;
	return vez;
}
carta descata(int vez, carta top){
	carta mx(-1, 0);
	int mxi=-1;
	for(int i=0; i<(int)jogador[vez].size(); i++){
		carta op = jogador[vez][i];
		if(op > mx and (op.first==top.first or op.second==top.second) ){
			mx = op;
			mxi = i;
		}
	}
	if(mxi>=0){
		jogador[vez][mxi] = jogador[vez].back();
		jogador[vez].pop_back();
	}
	return mx;
}
void efeito(int &vez, int &sentido, carta topo, int p){
	if(topo.first == 12){
		sentido *= -1;
	}else if(topo.first == 7){
		vez = proximo(vez, sentido, p);
		jogador[vez].push_back(pegarCarta());
		jogador[vez].push_back(pegarCarta());
	}else if(topo.first == 1){
		vez = proximo(vez, sentido, p);
		jogador[vez].push_back(pegarCarta());
	}else if(topo.first == 11){
		vez = proximo(vez, sentido, p);	
	}
	vez = proximo(vez, sentido, p);					
}

int main(){
	int p, m, n; //p -> nº de jogadores  m -> nº de cartas p jogadores	n -> nº de cartas no baralho
	carta tmp;
	while(true){
		cin >> p >> m >> n;
		if(p == 0 and m == 0 and n == 0) break;
		for(int i = 0; i < p; i++){
			jogador[i].clear();
		}
		pos = 0;
		for(int i = 0; i < n; i++){
			cin >> tmp.first >> tmp.second;
			baralho[i] = tmp;
		}
		
		for(int i = 0; i < p; i++){
			for(int j = 0; j < m; j++){
				jogador[i].push_back(pegarCarta());			
			}
		}
		int vez = 0, sentido = +1;
		carta topo = pegarCarta();
		if(topo.first == 12){
			sentido *= -1;
		}else if(topo.first == 7){
			jogador[vez].push_back(pegarCarta());
			jogador[vez].push_back(pegarCarta());
			vez = proximo(vez, sentido, p);
		}else if(topo.first == 1){
			jogador[vez].push_back(pegarCarta());
			vez = proximo(vez, sentido, p);
		}else if(topo.first == 11){
			vez = proximo(vez, sentido, p);	
		}
		while(true){
			int g = temGanhador(p);
			if(g != -1){
				cout << (g+1) << endl;
				break;
			}
			//cout << vez << endl;
			//cout << topo.first << " " << topo.second << endl;
			carta d = descata(vez, topo);
			if(d.first >= 0){
				topo = d;
				efeito(vez, sentido, topo, p);
			}else{
				jogador[vez].push_back(pegarCarta());
				d = descata(vez, topo);
				if(d.first >= 0){
					topo = d;
					efeito(vez, sentido, topo, p);
				}else{
					vez = proximo(vez, sentido, p);				
				}
			}


		}
	}	
	return 0;
}
