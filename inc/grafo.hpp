#ifndef GRAFO_HPP
#define GRAFO_HPP

constexpr int MAXN {2000};
constexpr int MAX_NO {55};
constexpr int INFINITO {999999999};

#include "./mapa2D.hpp"

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

typedef std::pair<int, int> pii;


class Grafo : public Mapa2D {

private:
    int v{};
    std::vector<pii> adj[MAXN];
    int peso[MAXN]; // Referente a arestas (no caso as ruas).
    int visitado[MAXN];

public:
    Grafo();
    ~Grafo();

    void addEdge(int u, int v, int p);
    int primAlgoritmo (int no_inicial);

    int getV();

    void lista();

};


#endif
