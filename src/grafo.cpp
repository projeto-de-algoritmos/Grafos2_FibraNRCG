#include "../inc/grafo.hpp"

Grafo::Grafo() {
    v = MAX_NO;
    adj = new std::list<int>[v];
    peso = new std::list<int>[v];
}

Grafo::~Grafo() {
    std::cout << "Grafo destruido!" << '\n';
}

void Grafo::addEdge(int u, int v, int p) {
    adj[u].push_back(v);
    peso[u].push_back(p);

    adj[v].push_back(u);
    peso[v].push_back(p);
}

void Grafo::primAlgoritmo(int S) {
    // TODO
}

int Grafo::getV() {
    return v;
}
