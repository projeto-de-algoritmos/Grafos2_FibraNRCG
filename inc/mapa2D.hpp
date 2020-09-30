#ifndef MAPA2D_HPP
#define MAPA2D_HPP

#include <iostream>
#include "grafo.hpp"

constexpr int POSX {50};
constexpr int POSY {60};


class Mapa2D {

public:
    int nodesMAP[POSX][POSY];
    Mapa2D();
    ~Mapa2D();

    int get_mapaXY(int i);

    void conversorMapa(int x);

    void imprimeMapa();
};


#endif
