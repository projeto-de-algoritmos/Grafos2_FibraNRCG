#include <iostream>
#include "../inc/grafo.hpp"

int main() {

    Grafo mapa;

    // ligamos os nós com as arestas
    mapa.addEdge(1 , 20, 1600);
    mapa.addEdge(20 , 55, 450);
    mapa.addEdge(20 , 33, 170);
    mapa.addEdge(55 , 32, 300);
    mapa.addEdge(55 , 14, 400);
    mapa.addEdge(32 , 31, 400);
    mapa.addEdge(32 , 2, 600);
    mapa.addEdge(2 , 4, 600);
    mapa.addEdge(2 , 3, 230);
    mapa.addEdge(4 , 5, 650);
    mapa.addEdge(5 , 3, 450);
    mapa.addEdge(5 , 6, 400);
    mapa.addEdge(5 , 10, 400);
    mapa.addEdge(6 , 7, 400);
    mapa.addEdge(7 , 10, 400);
    mapa.addEdge(7 , 8, 400);
    mapa.addEdge(3 , 19, 400);
    mapa.addEdge(31 , 19, 400);
    mapa.addEdge(31 , 15, 400);
    mapa.addEdge(19 , 10, 450);
    mapa.addEdge(19 , 18, 400);
    mapa.addEdge(10 , 24, 400);
    mapa.addEdge(24 , 8, 400);
    mapa.addEdge(24 , 23, 400);
    mapa.addEdge(24 , 18, 450);
    mapa.addEdge(8 , 9, 400);
    mapa.addEdge(18 , 15, 400);
    mapa.addEdge(18 , 17,  400);
    mapa.addEdge(15 , 14, 210);
    mapa.addEdge(15 , 16, 400);
    mapa.addEdge(14 , 13, 400);
    mapa.addEdge(14 , 11, 350);
    mapa.addEdge(11 , 33, 290);
    mapa.addEdge(9 , 23, 400);
    mapa.addEdge(9 , 25, 300);
    mapa.addEdge(23 , 17, 500);
    mapa.addEdge(17 , 16, 350);
    mapa.addEdge(17 , 21, 350);
    mapa.addEdge(16 , 13, 210);
    mapa.addEdge(13 , 12, 750);
    mapa.addEdge(12 , 42, 500);
    mapa.addEdge(42 , 21, 1500);
    mapa.addEdge(21 , 22, 350);
    mapa.addEdge(21 , 39, 500);
    mapa.addEdge(21 , 40, 350);
    mapa.addEdge(39 , 22, 400);
    mapa.addEdge(39 , 41, 210);
    mapa.addEdge(39 , 40, 250);
    mapa.addEdge(40 , 46, 400);
    mapa.addEdge(46 , 43, 600);
    mapa.addEdge(46 , 44, 350);
    mapa.addEdge(44 , 45, 800);
    mapa.addEdge(25 , 26, 270);
    mapa.addEdge(25 , 27, 250);
    mapa.addEdge(27 , 30, 170);
    mapa.addEdge(27 , 29, 130);
    mapa.addEdge(29 , 28, 400);
    mapa.addEdge(29 , 37, 250);
    mapa.addEdge(37 , 38, 150);
    mapa.addEdge(37 , 35, 600);
    mapa.addEdge(30 , 36, 230);
    mapa.addEdge(30 , 34, 140);
    mapa.addEdge(33 , 47, 2000);
    mapa.addEdge(33 , 54, 2100);
    mapa.addEdge(47 , 48, 350);
    mapa.addEdge(48 , 52, 400);
    mapa.addEdge(48 , 49, 210);
    mapa.addEdge(52 , 54, 500);
    mapa.addEdge(54, 51, 230);
    mapa.addEdge(51 , 53, 350);
    mapa.addEdge(53 , 50, 200);
    mapa.addEdge(50 , 49, 350);

    std::cout << "O total é: " << mapa.primAlgoritmo(32) << '\n';

  return 0;

}
