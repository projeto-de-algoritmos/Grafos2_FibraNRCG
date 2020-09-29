#ifndef GRAFO_HPP
#define GRAFO_HPP

constexpr int MAX_NO {55};

#include <iostream>
#include <list>
#include <queue>
#include <stack>

class Grafo {

private:
    int v{};
    std::list<int> *adj;
    std::list<int> *peso; // Referente a distancia dos vertices (no caso as ruas).
public:
    Grafo();
    ~Grafo();

    void addEdge(int u, int v, int p);
    void primAlgoritmo ( int S );

    int getV();

};


#endif
