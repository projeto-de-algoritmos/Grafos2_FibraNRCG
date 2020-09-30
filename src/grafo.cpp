#include "../inc/grafo.hpp"

Grafo::Grafo() {
    v = MAX_NO;
    adj->clear();
}

Grafo::~Grafo() {
    std::cout << "Grafo destruido!" << '\n';
}

void Grafo::addEdge(int u, int v, int p) {
    adj[u].push_back( pii(p, v) );
    adj[v].push_back( pii(p, u) );

}

int Grafo::primAlgoritmo(int no_inicial) {
	for(int i = 1;i <= v;i++) peso[i] = INFINITO;                               // definimos todas as distâncias como infinito
	peso[no_inicial] = 0;                                                       // primeiro vértice selecionado será o próprio no_inicial

	std::priority_queue< pii, std::vector<pii>, std::greater<pii> > fila;       // cria uma fila de prioridade onde o menor fica no topo.
	fila.push( pii(peso[no_inicial], no_inicial) );                             // coloca o primeiro elemento como seja a distância do
	                                                                            // vértice a Árvore Geradora Mínima e o segundo como sendo o próprio vértice

	while(true){

		int proxNo = -1;

		while(!fila.empty()){                                                   // seleciona o vértice mais próximo

			int atual = fila.top().second;
			fila.pop();

			if(!visitado[atual]){                                               // usa esse vértice porque ele ainda não foi processado
				proxNo = atual;                                                 // se não, continuamos procurando
				break;
			}


		}

		if(proxNo == -1) break;                                                 // se não achou ninguém, é o fim do algoritmo

		visitado[proxNo] = true;                                                // marca para não voltar para este vértice

		for(int i = 0;i < (int)adj[proxNo].size();i++){                         // atualiza as distâncias

			int dist  = adj[proxNo][i].first;                                   // possível distância é dist.
			int atual = adj[proxNo][i].second;                                  // compara com peso[atual].

                                                                                // checar se o vértice atual não foi processado ainda
			if( peso[atual] > dist && !visitado[atual]){                        // vemos que vale a pena usar o vértice davez
				peso[atual] = dist;                                             // atualizamos a distância
				fila.push( pii(peso[atual], atual) );                           // inserimos na fila de prioridade
			}
		}
	}

	int custo_arvore = 0;
	for(int i = 1;i <= v;i++) custo_arvore += peso[i];
	return custo_arvore;
}


int Grafo::getV() {
    return v;
}
