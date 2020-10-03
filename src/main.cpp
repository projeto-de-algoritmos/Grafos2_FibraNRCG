#include <iostream>
#include "../inc/grafo.hpp"
#include "../inc/mapa2D.hpp"

int main() {

    Grafo mapa;
    // ligamos os nós com as arestas
    mapa.addEdge(1 , 20, 1600);
    mapa.addEdge(20 , 55, 449);
    mapa.addEdge(20 , 33, 170);
    mapa.addEdge(55 , 32, 310);
    mapa.addEdge(55 , 14, 401);
    mapa.addEdge(32 , 31, 402);
    mapa.addEdge(32 , 2, 600);
    mapa.addEdge(2 , 4, 600);
    mapa.addEdge(2 , 3, 230);
    mapa.addEdge(4 , 5, 650);
    mapa.addEdge(5 , 3, 441);
    mapa.addEdge(5 , 6, 403);
    mapa.addEdge(5 , 10, 404);
    mapa.addEdge(6 , 7, 405);
    mapa.addEdge(7 , 10, 406);
    mapa.addEdge(7 , 8, 407);
    mapa.addEdge(3 , 19, 408);
    mapa.addEdge(31 , 19, 409);
    mapa.addEdge(31 , 15, 410);
    mapa.addEdge(19 , 10, 452);
    mapa.addEdge(19 , 18, 411);
    mapa.addEdge(10 , 24, 412);
    mapa.addEdge(24 , 8, 399);
    mapa.addEdge(24 , 23, 398);
    mapa.addEdge(24 , 18, 448);
    mapa.addEdge(8 , 9, 397);
    mapa.addEdge(18 , 15, 396);
    mapa.addEdge(18 , 17,  395);
    mapa.addEdge(15 , 14, 210);
    mapa.addEdge(15 , 16, 394);
    mapa.addEdge(14 , 13, 393);
    mapa.addEdge(14 , 11, 351);
    mapa.addEdge(11 , 33, 290);
    mapa.addEdge(9 , 23, 392);
    mapa.addEdge(9 , 25, 290);
    mapa.addEdge(23 , 17, 510);
    mapa.addEdge(17 , 16, 353);
    mapa.addEdge(17 , 21, 352);
    mapa.addEdge(16 , 13, 210);
    mapa.addEdge(13 , 12, 750);
    mapa.addEdge(12 , 42, 5250);
    mapa.addEdge(42 , 21, 1500);
    mapa.addEdge(21 , 22, 354);
    mapa.addEdge(21 , 39, 490);
    mapa.addEdge(21 , 40, 350);
    mapa.addEdge(39 , 22, 391);
    mapa.addEdge(39 , 41, 210);
    mapa.addEdge(39 , 40, 250);
    mapa.addEdge(40 , 46, 390);
    mapa.addEdge(46 , 43, 600);
    mapa.addEdge(46 , 44, 349);
    mapa.addEdge(44 , 45, 800);
    mapa.addEdge(25 , 26, 270);
    mapa.addEdge(25 , 27, 250);
    mapa.addEdge(27 , 30, 170);
    mapa.addEdge(27 , 29, 130);
    mapa.addEdge(29 , 28, 389);
    mapa.addEdge(29 , 37, 250);
    mapa.addEdge(37 , 38, 150);
    mapa.addEdge(37 , 35, 600);
    mapa.addEdge(30 , 36, 230);
    mapa.addEdge(30 , 34, 140);
    mapa.addEdge(33 , 47, 2000);
    mapa.addEdge(33 , 54, 2100);
    mapa.addEdge(47 , 48, 348);
    mapa.addEdge(48 , 52, 388);
    mapa.addEdge(48 , 49, 210);
    mapa.addEdge(52 , 54, 480);
    mapa.addEdge(54, 51, 230);
    mapa.addEdge(51 , 53, 347);
    mapa.addEdge(53 , 50, 200);
    mapa.addEdge(50 , 49, 346);


    int menu{};
    int no{};
    int no1{};
    int no2{};
    int distancia{};
    int valor{};

    system("clear");

    while (true) {



        std::cout << "Escolha uma opção: " << '\n';
        std::cout << "1. Imprimir mapa" << '\n';
        std::cout << "2. Gerar mapa com nó inicial " << '\n';
        std::cout << "3. Mudança de atributos do mapa" << '\n';
        std::cout << "4. Limpar mapa" << '\n';

        std::cout << "0. Sair" << '\n';

        std::cin >> menu;

        switch (menu) {
            case 1 :
                mapa.imprimeMapa();


                std::cin.ignore();
                std::cin.ignore();
                break;
            case 2 :

            while(true){
                std::cout << "Digite um nó de 1 a 55 para iniciar: ";
                    std::cin >> no;
                if(no < 1 || no > 55 )
                std::cout << "Valor inválido!" << '\n';
                else
                    break;
            }

                mapa.limparMapa();

                valor = mapa.primAlgoritmo(no);
                mapa.imprimeMapa();

                std::cin.ignore();

                std::cout << "A quantidade de metros de cabo necessarios é de: " << valor << "m" << '\n';

                std::cin.ignore();
                std::cin.ignore();

                break;
            case 3 :

                std::cout << "Esse modo serve para modificar os valores de distancias dos nó conforme o mapa" << '\n';

                while(true){
                    std::cout << "Digite o nó 1: ";
                        std::cin >> no1;
                    if(no1 < 1 || no1 > 55 )
                    std::cout << "Valor inválido!" << '\n';
                    else
                        break;
                }

                while(true){
                    std::cout << "Digite o nó 2: ";
                        std::cin >> no2;
                    if(no2 < 1 || no2 > 55 )
                    std::cout << "Valor inválido!" << '\n';
                    else
                        break;
                }

                while(true){
                    std::cout << "Digite a distancia (1 - 10000): ";
                        std::cin >> distancia;
                    if(distancia < 0 || distancia > 10001 )
                    std::cout << "Valor inválido!" << '\n';
                    else
                        break;
                }

                mapa.addEdge(no1 , no2, distancia);

                std::cout << "Digite um nó de 1 a 55 para iniciar: ";
                std::cin >> no;

                mapa.limparMapa();

                valor = mapa.primAlgoritmo(no);
                mapa.imprimeMapa();

                std::cin.ignore();

                std::cout << "A quantidade de metros de cabo necessarios é de: " << valor << "m" << '\n';

                std::cin.ignore();
                std::cin.ignore();


                std::cin.ignore();
                break;
            case 4:
                mapa.limparMapa();
                break;
            case 0 :


                mapa.~Grafo();

                return 0;


                break;
            default:
                std::cout << "Escolha invalida!" << '\n';
                break;
        }
    }


  return 0;

}
