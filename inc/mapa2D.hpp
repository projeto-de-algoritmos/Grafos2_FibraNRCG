#ifndef MAPA2D_HPP
#define MAPA2D_HPP

#include <iostream>

constexpr int POSX {50};
constexpr int POSY {60};


class Mapa2D {

public:
    int nodesMAP[POSX][POSY];
    bool noAtivo[55];
    bool pintarRua[POSX][POSY];
    Mapa2D();
    ~Mapa2D();

    void imprimeMapa();

    void linhasVisitadas(int no1, int no2);

    void limparMapa();

    void populateNodes();

};


#endif
