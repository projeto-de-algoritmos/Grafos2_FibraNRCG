#include "../inc/mapa2D.hpp"

Mapa2D::Mapa2D() {

    for (int i = 0; i < POSX; i++) {
        for (int j = 0; j < POSY; j++) nodesMAP[i][j] = 0;
    }

    for (int i = 0; i < POSX; i++) {
        for (int j = 0; j < POSY; j++) pintarRua[i][j] = false;
    }

    populateNodes();


}

Mapa2D::~Mapa2D() {

}

void Mapa2D::imprimeMapa() {
    for (int i = 0; i < POSX; i++) {
        for (int j = 0; j < POSY; j++) {

            if (nodesMAP[i][j] == 0) {
                std::cout << "   ";
            } else {

            if( nodesMAP[i][j] == 1 ||
                nodesMAP[i][j] == 2 ||
                nodesMAP[i][j] == 3 ||
                nodesMAP[i][j] == 4 ||
                nodesMAP[i][j] == 5 ||
                nodesMAP[i][j] == 6 ||
                nodesMAP[i][j] == 7 ||
                nodesMAP[i][j] == 8 ||
                nodesMAP[i][j] == 9
            ) {
                std::cout << "\x1B[31m0" + std::to_string(nodesMAP[i][j]) + "\033[0m" + " ";;
            } else
            {   if (nodesMAP[i][j] == 61) ( pintarRua[i][j] == true ? std::cout <<   "\x1B[34m/  \033[0m" : std::cout << "/  "  );
                    else if (nodesMAP[i][j] == 62) ( pintarRua[i][j] == true ? std::cout << "\x1B[34m|  \033[0m" : std::cout << "|  "  );
                        else if (nodesMAP[i][j] == 63) ( pintarRua[i][j] == true ? std::cout << "\x1B[34m\\  \033[0m" : std::cout << "\\  "  );
                            else if (nodesMAP[i][j] == 64) ( pintarRua[i][j] == true ? std::cout << "\x1B[34m-- \033[0m" : std::cout << "-- "  );
                                else std::cout << "\x1B[31m" + std::to_string(nodesMAP[i][j]) + "\033[0m" + " ";
            }
            }
        }

        std::cout << '\n';
    }
}

void Mapa2D::linhasVisitadas(int no1, int no2){

    if ( (no1 == 49 && no2 == 50) || (no2 == 49 && no1 == 50)  ) {
        pintarRua[11][6] = true;
        pintarRua[12][5] = true;
    }

    if ( (no1 == 50 && no2 == 53) || (no2 == 50 && no1 == 53)  ) {
        pintarRua[14][5] = true;
    }

    if ( (no1 == 53 && no2 == 51) || (no2 == 53 && no1 == 51)  ) {
        pintarRua[16][5] = true;
        pintarRua[17][5] = true;
    }

    if ( (no1 == 54 && no2 == 51) || (no2 == 54 && no1 == 51)  ) {
        pintarRua[18][6] = true;
    }

    if ( (no1 == 54 && no2 == 52) || (no2 == 54 && no1 == 52)  ) {
        pintarRua[17][8] = true;
        pintarRua[16][9] = true;
        pintarRua[15][10] = true;
    }

    if ( (no1 == 48 && no2 == 52) || (no2 == 48 && no1 == 52)  ) {
        pintarRua[14][10] = true;
        pintarRua[13][10] = true;
        pintarRua[12][9] = true;
        pintarRua[11][9] = true;
    }

    if ( (no1 == 48 && no2 == 47) || (no2 == 48 && no1 == 47)  ) {
        pintarRua[10][8] = true;
        pintarRua[10][10] = true;
        pintarRua[10][11] = true;
    }

    if ( (no1 == 33 && no2 == 47) || (no2 == 33 && no1 == 47)  ) {
        pintarRua[10][13] = true;
        pintarRua[11][14] = true;
        pintarRua[12][15] = true;
        pintarRua[13][16] = true;
        pintarRua[14][17] = true;
        pintarRua[15][18] = true;
        pintarRua[16][19] = true;
    }

    if ( (no1 == 33 && no2 == 54) || (no2 == 33 && no1 == 47)  ) {
        pintarRua[18][20] = true;
        pintarRua[18][19] = true;
        pintarRua[18][18] = true;
        pintarRua[18][17] = true;
        pintarRua[18][16] = true;
        pintarRua[18][15] = true;
        pintarRua[18][14] = true;
        pintarRua[18][13] = true;
        pintarRua[18][12] = true;
        pintarRua[18][11] = true;
        pintarRua[18][10] = true;
        pintarRua[18][9] = true;
        pintarRua[18][8] = true;
    }

    if ( (no1 == 33 && no2 == 20) || (no2 == 33 && no1 == 20)  ) {
        pintarRua[16][20] = true;
    }

    if ( (no1 == 1  && no2 == 20) || (no2 == 1  && no1 == 20) ) {
        pintarRua[14][20] = true;
        pintarRua[13][21] = true;
        pintarRua[12][22] = true;
        pintarRua[11][23] = true;
        pintarRua[10][24] = true;
        pintarRua[9][25] = true;
        pintarRua[8][26] = true;
        pintarRua[7][27] = true;
        pintarRua[6][28] = true;
        pintarRua[5][29] = true;
        pintarRua[4][30] = true;
        pintarRua[3][31] = true;
    }

    if ( (no1 == 55 && no2 == 20) || (no2 == 55 && no1 == 20) ) {
        pintarRua[15][21] = true;
        pintarRua[15][22] = true;
        pintarRua[15][23] = true;
    }

    if ( (no1 == 55 && no2 == 14) || (no2 == 55 && no1 == 14) ) {
        pintarRua[16][24] = true;
        pintarRua[17][24] = true;
        pintarRua[18][24] = true;
    }

    if ( (no1 == 11 && no2 == 14) || (no2 == 11 && no1 == 14) ) {
        pintarRua[19][23] = true;
        pintarRua[19][22] = true;
    }

    if ( (no1 == 11 && no2 == 33) || (no2 == 11 && no1 == 33) ) {
        pintarRua[18][21] = true;
    }

    if ( (no1 == 55 && no2 == 32) || (no2 == 55 && no1 == 32) ) {
        pintarRua[14][25] = true;
        pintarRua[13][26] = true;
    }

    if ( (no1 == 2  && no2 == 32) || (no2 == 2  && no1 == 32) ) {
        pintarRua[11][28] = true;
        pintarRua[10][29] = true;
        pintarRua[9][30] = true;
        pintarRua[8][31] = true;
    }

    if ( (no1 == 32  && no2 == 31) || (no2 == 32  && no1 == 31) ) {
        pintarRua[14][27] = 62;
        pintarRua[13][27] = 62;
    }


    if ( (no1 == 2  && no2 == 4 ) || (no2 == 2  && no1 == 4 ) ) {
        pintarRua[6][33] = true;
        pintarRua[5][34] = true;
        pintarRua[4][35] = true;
        pintarRua[3][36] = true;
    }

    if ( (no1 == 2  && no2 == 3 ) || (no2 == 2  && no1 == 3 ) ) {
        pintarRua[8][32] = true;
    }

    if ( (no1 == 19 && no2 == 3 ) || (no2 == 19 && no1 == 3 ) ) {
        pintarRua[10][33] = true;
        pintarRua[11][33] = true;
        pintarRua[12][33] = true;
    }

    if  ((no1 == 5 && no2 == 4 ) || (no2 == 5 && no1== 4 ) ) {
        pintarRua[3][37] = true;
        pintarRua[4][37] = true;
        pintarRua[5][37] = true;
        pintarRua[6][37] = true;
        pintarRua[7][37] = true;
        pintarRua[8][37] = true;
    }

    if ( (no1 == 5  && no2 == 3 ) || (no2 == 5  && no1 == 3 ) ) {
        pintarRua[9][36] = true;
        pintarRua[9][35] = true;
        pintarRua[9][34] = true;
    }

    if ( (no1 == 5  && no2 == 6 ) || (no2 == 5  && no1 == 6 ) ) {
        pintarRua[9][38] = true;
        pintarRua[9][39] = true;
        pintarRua[9][40] = true;
    }

    if ( (no1 == 7  && no2 == 6 ) || (no2 == 7  && no1 == 6 ) ) {
        pintarRua[10][41] = true;
        pintarRua[11][41] = true;
        pintarRua[12][41] = true;
    }

    if ( (no1 == 7  && no2 == 10) || (no2 == 7  && no1 == 10) ) {
        pintarRua[13][40] = true;
        pintarRua[13][39] = true;
        pintarRua[13][38] = true;
    }

    if ( (no1 == 24 && no2 == 10) || (no2 == 24 && no1 == 10) ) {
        pintarRua[14][37] = true;
        pintarRua[15][37] = true;
        pintarRua[16][37] = true;
    }

    if ( (no1 == 5  && no2 == 10) || (no2 == 5  && no1 == 10) ) {
        pintarRua[12][37] = true;
        pintarRua[11][37] = true;
        pintarRua[10][37] = true;
    }

    if ( (no1 == 19 && no2 == 10) || (no2 == 19 && no1 == 10) ) {
        pintarRua[13][36] = true;
        pintarRua[13][35] = true;
        pintarRua[13][34] = true;
    }

    if ( (no1 == 19 && no2 == 18) || (no2 == 19 && no1 == 18) ) {
        pintarRua[14][33] = true;
        pintarRua[15][33] = true;
        pintarRua[16][33] = true;
    }

    if ( (no1 == 19 && no2 == 31) || (no2 == 19 && no1 == 31) ) {
        pintarRua[13][32] = true;
        pintarRua[13][31] = true;
        pintarRua[13][30] = true;
        pintarRua[13][29] = true;
        pintarRua[14][28] = true;
    }

    if ( (no1 == 15 && no2 == 31) || (no2 == 15 && no1 == 31) ) {
        pintarRua[14][27] = true;
        pintarRua[13][27] = true;
        pintarRua[16][27] = true;
        pintarRua[17][27] = true;
        pintarRua[18][27] = true;
    }

    if ( (no1 == 15 && no2 == 14) || (no2 == 15 && no1 == 14) ) {
        pintarRua[19][26] = true;
        pintarRua[19][25] = true;
    }

    if ( (no1 == 15 && no2 == 18) || (no2 == 15 && no1 == 18) ) {
        pintarRua[18][28] = true;
        pintarRua[17][29] = true;
        pintarRua[17][30] = true;
        pintarRua[17][31] = true;
        pintarRua[17][32] = true;
    }

    if ( (no1 == 24 && no2 == 18) || (no2 == 24 && no1 == 18) ) {
        pintarRua[17][34] = true;
        pintarRua[17][35] = true;
        pintarRua[17][36] = true;
    }

    if ( (no1 == 24 && no2 == 8 ) || (no2 == 24 && no1 == 8 ) ) {
        pintarRua[17][38] = true;
        pintarRua[17][39] = true;
        pintarRua[17][40] = true;
    }

    if ( (no1 == 7  && no2 == 8 ) || (no2 == 7  && no1 == 8 ) ) {
        pintarRua[16][41] = true;
        pintarRua[15][41] = true;
        pintarRua[14][41] = true;
    }

    if ( (no1 == 9  && no2 == 8 ) || (no2 == 9  && no1 == 8 ) ) {
        pintarRua[18][41] = true;
        pintarRua[19][41] = true;
        pintarRua[20][41] = true;
    }

    if ( (no1 == 9  && no2 == 23) || (no2 == 9  && no1 == 23) ) {
        pintarRua[21][40] = true;
        pintarRua[21][39] = true;
        pintarRua[21][38] = true;
    }

    if ( (no1 == 24 && no2 == 23) || (no2 == 24 && no1 == 23) ) {
        pintarRua[20][37] = true;
        pintarRua[19][37] = true;
        pintarRua[18][37] = true;
    }

    if ( (no1 == 17 && no2 == 23) || (no2 == 17 && no1 == 23) ) {
        pintarRua[21][36] = true;
        pintarRua[21][35] = true;
        pintarRua[21][34] = true;
    }

    if ( (no1 == 17 && no2 == 21) || (no2 == 17 && no1 == 21) ) {
        pintarRua[22][32] = true;
        pintarRua[23][32] = true;
        pintarRua[24][32] = true;
    }

    if ( (no1 == 39 && no2 == 21) || (no2 == 39 && no1 == 21) ) {
        pintarRua[26][33] = true;
        pintarRua[27][34] = true;
        pintarRua[28][34] = true;
    }

    if ( (no1 == 39 && no2 == 41) || (no2 == 39 && no1 == 41) ) {
        pintarRua[29][36] = true;
    }

    if ( (no1 == 39 && no2 == 40) || (no2 == 39 && no1 == 40) ) {
        pintarRua[29][34] = true;
        pintarRua[29][33] = true;
    }

    if ( (no1 == 46 && no2 == 40) || (no2 == 46 && no1 == 40) ) {
        pintarRua[29][31] = true;
        pintarRua[29][30] = true;
        pintarRua[29][29] = true;
    }

    if ( (no1 == 46 && no2 == 43) || (no2 == 46 && no1 == 43) ) {
        pintarRua[29][27] = true;
        pintarRua[29][26] = true;
        pintarRua[29][25] = true;
        pintarRua[30][24] = true;
    }

    if ( (no1 == 46 && no2 == 44) || (no2 == 46 && no1 == 44) ) {
        pintarRua[30][27] = true;
        pintarRua[31][26] = true;
    }

    if ( (no1 == 45 && no2 == 44) || (no2 == 45 && no1 == 44) ) {
        pintarRua[33][25] = true;
        pintarRua[34][24] = true;
        pintarRua[35][23] = true;
        pintarRua[36][22] = true;
        pintarRua[37][21] = true;
    }

    if ( (no1 == 40 && no2 == 21) || (no2 == 40 && no1 == 21) ) {
        pintarRua[28][32] = true;
        pintarRua[27][32] = true;
        pintarRua[26][32] = true;
    }

    if ( (no1 == 22 && no2 == 39) || (no2 == 22 && no1 == 39) ) {
        pintarRua[27][35] = true;
        pintarRua[26][35] = true;
        pintarRua[25][35] = true;
    }

    if ( (no1 == 22 && no2 == 21) || (no2 == 22 && no1 == 21) ) {
        pintarRua[24][33] = true;
        pintarRua[24][34] = true;
    }

    if ( (no1 == 17 && no2 == 18) || (no2 == 17 && no1 == 18) ) {
        pintarRua[20][33] = true;
        pintarRua[19][33] = true;
        pintarRua[18][33] = true;
    }

    if ( (no1 == 17 && no2 == 16) || (no2 == 17 && no1 == 16) ) {
        pintarRua[21][32] = true;
        pintarRua[21][31] = true;
        pintarRua[21][30] = true;
        pintarRua[21][29] = true;
        pintarRua[22][28] = true;
    }

    if ( (no1 == 13 && no2 == 16) || (no2 == 13 && no1 == 16) ) {
        pintarRua[23][26] = true;
        pintarRua[23][25] = true;
    }

    if ( (no1 == 13 && no2 == 12) || (no2 == 13 && no1 == 42) ) {
        pintarRua[23][23] = true;
        pintarRua[23][22] = true;
        pintarRua[23][21] = true;
        pintarRua[23][20] = true;
        pintarRua[23][19] = true;
    }

    if ( (no1 == 12 && no2 == 42) || (no2 == 12 && no1 == 42) ) {
        pintarRua[24][18] = true;
        pintarRua[25][18] = true;
        pintarRua[26][18] = true;
        pintarRua[27][18] = true;
        pintarRua[28][18] = true;
        pintarRua[28][18] = true;
    }

    if ( (no1 == 42 && no2 == 21) || (no2 == 42 && no1 == 21) ) {
        pintarRua[29][19] = true;
        pintarRua[29][20] = true;
        pintarRua[29][21] = true;
        pintarRua[28][22] = true;
        pintarRua[28][23] = true;
        pintarRua[28][24] = true;
        pintarRua[27][25] = true;
        pintarRua[27][26] = true;
        pintarRua[27][27] = true;
        pintarRua[26][28] = true;
        pintarRua[26][29] = true;
        pintarRua[26][30] = true;
        pintarRua[25][31] = true;

    }

    if ( (no1 == 13 && no2 == 14) || (no2 == 13 && no1 == 14) ) {
        pintarRua[22][24] = true;
        pintarRua[21][24] = true;
        pintarRua[20][24] = true;

    }

    if ( (no1 == 16 && no2 == 15) || (no2 == 16 && no1 == 15) ) {
        pintarRua[22][27] = true;
        pintarRua[21][27] = true;
        pintarRua[20][27] = true;

    }

    if ( (no1 == 9  && no2 == 25) || (no2 == 9  && no1 == 25) ) {
        pintarRua[22][41] = true;
        pintarRua[23][41] = true;

    }

    if ( (no1 == 26 && no2 == 25) || (no2 == 26 && no1 == 25) ) {
        pintarRua[24][40] = true;
        pintarRua[24][39] = true;
    }

    if ( (no1 == 27 && no2 == 25) || (no2 == 27 && no1 == 25) ) {
        pintarRua[25][41] = true;
    }

    if ( (no1 == 27 && no2 == 30) || (no2 == 27 && no1 == 30) ) {
        pintarRua[26][42] = true;
    }

   if ( (no1 == 36 && no2 == 30) || (no2 == 36 && no1 == 30) ) {
        pintarRua[27][43] = true;
    }

   if ( (no1 == 34 && no2 == 30) || (no2 == 34 && no1 == 30) ) {
        pintarRua[25][43] = true;
    }

    if ( (no1 == 27 && no2 == 29) || (no2 == 27 && no1 == 29) ) {
        pintarRua[27][41] = true;
    }

    if ( (no1 == 28 && no2 == 29) || (no2 == 28 && no1 == 29) ) {
        pintarRua[28][40] = true;
        pintarRua[28][39] = true;
        pintarRua[28][38] = true;
    }

    if ( (no1 == 37 && no2 == 29) || (no2 == 37 && no1 == 29) ) {
        pintarRua[29][41] = true;
    }

    if ( (no1 == 37 && no2 == 35) || (no2 == 37 && no1 == 35) ) {
        pintarRua[30][42] = true;
        pintarRua[30][43] = true;
        pintarRua[31][44] = true;
        pintarRua[31][45] = true;
    }

    if ( (no1 == 37 && no2 == 38) || (no2 == 37 && no1 == 38) ) {
        pintarRua[31][41] = true;
    }

}

void Mapa2D::limparMapa() {
    for (int i = 0; i < POSX; i++) {
    for (int j = 0; j < POSY; j++) pintarRua[i][j] = false;
    }
}


void Mapa2D::populateNodes() {

/*
    // 61 = /
    // 62 = |
    // 63 = \
    // 64 = -
*/
    nodesMAP[10][7] = 49;
    nodesMAP[11][6] = 61;
    nodesMAP[12][5] = 61;
    nodesMAP[13][4] = 50;
    nodesMAP[14][5] = 63;
    nodesMAP[15][6] = 53;
    nodesMAP[16][5] = 61;
    nodesMAP[17][5] = 62;
    nodesMAP[18][5] = 51;
    nodesMAP[18][6] = 64;
    nodesMAP[18][7] = 54;
    nodesMAP[17][8] = 61;
    nodesMAP[16][9] = 61;
    nodesMAP[15][10] = 62;
    nodesMAP[14][10] = 52;
    nodesMAP[13][10] = 62;
    nodesMAP[12][9] = 63;
    nodesMAP[11][9] = 62;
    nodesMAP[10][9] = 48;
    nodesMAP[10][8] = 64;
    nodesMAP[10][10] = 64;
    nodesMAP[10][11] = 61;
    nodesMAP[9][12] = 47;
    nodesMAP[10][13] = 63;
    nodesMAP[11][14] = 63;
    nodesMAP[12][15] = 63;
    nodesMAP[13][16] = 63;
    nodesMAP[14][17] = 63;
    nodesMAP[15][18] = 63;
    nodesMAP[16][19] = 63;
    nodesMAP[17][20] = 33;
    nodesMAP[18][20] = 61;
    nodesMAP[18][19] = 64;
    nodesMAP[18][18] = 64;
    nodesMAP[18][17] = 64;
    nodesMAP[18][16] = 64;
    nodesMAP[18][15] = 64;
    nodesMAP[18][14] = 64;
    nodesMAP[18][13] = 64;
    nodesMAP[18][12] = 64;
    nodesMAP[18][11] = 64;
    nodesMAP[18][10] = 64;
    nodesMAP[18][9] = 64;
    nodesMAP[18][8] = 64;
    nodesMAP[16][20] = 62;
    nodesMAP[15][20] = 20;
    nodesMAP[14][20] = 62;
    nodesMAP[13][21] = 61;
    nodesMAP[12][22] = 61;
    nodesMAP[11][23] = 61;
    nodesMAP[10][24] = 61;
    nodesMAP[9][25] = 61;
    nodesMAP[8][26] = 61;
    nodesMAP[7][27] = 61;
    nodesMAP[6][28] = 61;
    nodesMAP[5][29] = 61;
    nodesMAP[4][30] = 61;
    nodesMAP[3][31] = 61;
    nodesMAP[2][32] = 1;
    nodesMAP[15][21] = 64;
    nodesMAP[15][22] = 64;
    nodesMAP[15][23] = 64;
    nodesMAP[15][24] = 55;
    nodesMAP[16][24] = 62;
    nodesMAP[17][24] = 62;
    nodesMAP[18][24] = 62;
    nodesMAP[19][24] = 14;
    nodesMAP[19][23] = 64;
    nodesMAP[19][22] = 64;
    nodesMAP[19][21] = 11;
    nodesMAP[18][21] = 63;
    nodesMAP[14][25] = 61;
    nodesMAP[13][26] = 61;
    nodesMAP[12][27] = 32;
    nodesMAP[11][28] = 61;
    nodesMAP[10][29] = 61;
    nodesMAP[9][30] = 61;
    nodesMAP[8][31] = 61;
    nodesMAP[7][32] = 2;
    nodesMAP[6][33] = 61;
    nodesMAP[5][34] = 61;
    nodesMAP[4][35] = 61;
    nodesMAP[3][36] = 61;
    nodesMAP[2][37] = 4;
    nodesMAP[3][37] = 62;
    nodesMAP[4][37] = 62;
    nodesMAP[5][37] = 62;
    nodesMAP[6][37] = 62;
    nodesMAP[7][37] = 62;
    nodesMAP[8][37] = 62;
    nodesMAP[9][37] = 5;
    nodesMAP[9][36] = 64;
    nodesMAP[9][35] = 64;
    nodesMAP[9][34] = 64;
    nodesMAP[9][33] = 3;
    nodesMAP[10][33] = 62;
    nodesMAP[11][33] = 62;
    nodesMAP[12][33] = 62;
    nodesMAP[8][32] = 63;
    nodesMAP[9][38] = 64;
    nodesMAP[9][39] = 64;
    nodesMAP[9][40] = 64;
    nodesMAP[9][41] = 6;
    nodesMAP[10][41] = 62;
    nodesMAP[11][41] = 62;
    nodesMAP[12][41] = 62;
    nodesMAP[13][41] = 7;
    nodesMAP[13][40] = 64;
    nodesMAP[13][39] = 64;
    nodesMAP[13][38] = 64;
    nodesMAP[13][37] = 10;
    nodesMAP[14][37] = 62;
    nodesMAP[15][37] = 62;
    nodesMAP[16][37] = 62;
    nodesMAP[12][37] = 62;
    nodesMAP[11][37] = 62;
    nodesMAP[10][37] = 62;
    nodesMAP[13][36] = 64;
    nodesMAP[13][35] = 64;
    nodesMAP[13][34] = 64;
    nodesMAP[13][33] = 19;
    nodesMAP[14][33] = 62;
    nodesMAP[15][33] = 62;
    nodesMAP[16][33] = 62;
    nodesMAP[13][32] = 64;
    nodesMAP[13][31] = 64;
    nodesMAP[13][30] = 64;
    nodesMAP[13][29] = 64;
    nodesMAP[14][28] = 61;
    nodesMAP[15][27] = 31;
    nodesMAP[14][27] = 62;
    nodesMAP[13][27] = 62;
    nodesMAP[16][27] = 62;
    nodesMAP[17][27] = 62;
    nodesMAP[18][27] = 62;
    nodesMAP[19][27] = 15;
    nodesMAP[19][26] = 64;
    nodesMAP[19][25] = 64;
    nodesMAP[18][28] = 61;
    nodesMAP[17][29] = 64;
    nodesMAP[17][30] = 64;
    nodesMAP[17][31] = 64;
    nodesMAP[17][32] = 64;
    nodesMAP[17][33] = 18;
    nodesMAP[17][34] = 64;
    nodesMAP[17][35] = 64;
    nodesMAP[17][36] = 64;
    nodesMAP[17][37] = 24;
    nodesMAP[17][38] = 64;
    nodesMAP[17][39] = 64;
    nodesMAP[17][40] = 64;
    nodesMAP[17][41] = 8;
    nodesMAP[16][41] = 62;
    nodesMAP[15][41] = 62;
    nodesMAP[14][41] = 62;
    nodesMAP[18][41] = 62;
    nodesMAP[19][41] = 62;
    nodesMAP[20][41] = 62;
    nodesMAP[21][41] = 9;
    nodesMAP[21][40] = 64;
    nodesMAP[21][39] = 64;
    nodesMAP[21][38] = 64;
    nodesMAP[21][37] = 23;
    nodesMAP[20][37] = 62;
    nodesMAP[19][37] = 62;
    nodesMAP[18][37] = 62;
    nodesMAP[21][36] = 64;
    nodesMAP[21][35] = 64;
    nodesMAP[21][34] = 64;
    nodesMAP[21][33] = 17;
    nodesMAP[22][32] = 61;
    nodesMAP[23][32] = 62;
    nodesMAP[24][32] = 62;
    nodesMAP[25][32] = 21;
    nodesMAP[26][33] = 63;
    nodesMAP[27][34] = 63;
    nodesMAP[28][34] = 64;
    nodesMAP[28][35] = 39;
    nodesMAP[29][36] = 63;
    nodesMAP[30][36] = 41;
    nodesMAP[29][34] = 61;
    nodesMAP[29][33] = 64;
    nodesMAP[29][32] = 40;
    nodesMAP[29][31] = 64;
    nodesMAP[29][30] = 64;
    nodesMAP[29][29] = 64;
    nodesMAP[29][28] = 46;
    nodesMAP[29][27] = 64;
    nodesMAP[29][26] = 64;
    nodesMAP[29][25] = 64;
    nodesMAP[30][24] = 61;
    nodesMAP[31][23] = 43;
    nodesMAP[30][27] = 61;
    nodesMAP[31][26] = 62;
    nodesMAP[32][26] = 44;
    nodesMAP[33][25] = 61;
    nodesMAP[34][24] = 61;
    nodesMAP[35][23] = 61;
    nodesMAP[36][22] = 61;
    nodesMAP[37][21] = 61;
    nodesMAP[38][20] = 45;
    nodesMAP[28][32] = 62;
    nodesMAP[27][32] = 62;
    nodesMAP[26][32] = 62;
    nodesMAP[27][35] = 62;
    nodesMAP[26][35] = 62;
    nodesMAP[25][35] = 62;
    nodesMAP[24][33] = 61;
    nodesMAP[24][34] = 64;
    nodesMAP[24][35] = 22;
    nodesMAP[20][33] = 62;
    nodesMAP[19][33] = 62;
    nodesMAP[18][33] = 62;
    nodesMAP[21][32] = 64;
    nodesMAP[21][31] = 64;
    nodesMAP[21][30] = 64;
    nodesMAP[21][29] = 64;
    nodesMAP[22][28] = 61;
    nodesMAP[23][27] = 16;
    nodesMAP[23][26] = 64;
    nodesMAP[23][25] = 64;
    nodesMAP[23][24] = 13;
    nodesMAP[23][23] = 64;
    nodesMAP[23][22] = 64;
    nodesMAP[23][21] = 64;
    nodesMAP[23][20] = 64;
    nodesMAP[23][19] = 64;
    nodesMAP[23][18] = 12;
    nodesMAP[24][18] = 62;
    nodesMAP[25][18] = 62;
    nodesMAP[26][18] = 62;
    nodesMAP[27][18] = 62;
    nodesMAP[28][18] = 62;
    nodesMAP[28][18] = 62;
    nodesMAP[29][18] = 42;
    nodesMAP[29][19] = 64;
    nodesMAP[29][20] = 64;
    nodesMAP[29][21] = 61;
    nodesMAP[28][22] = 64;
    nodesMAP[28][23] = 64;
    nodesMAP[28][24] = 61;
    nodesMAP[27][25] = 64;
    nodesMAP[27][26] = 64;
    nodesMAP[27][27] = 61;
    nodesMAP[26][28] = 64;
    nodesMAP[26][29] = 64;
    nodesMAP[26][30] = 61;
    nodesMAP[25][31] = 64;
    nodesMAP[22][24] = 62;
    nodesMAP[21][24] = 62;
    nodesMAP[20][24] = 62;
    nodesMAP[22][27] = 62;
    nodesMAP[21][27] = 62;
    nodesMAP[20][27] = 62;
    nodesMAP[22][41] = 62;
    nodesMAP[23][41] = 62;
    nodesMAP[24][41] = 25;
    nodesMAP[24][40] = 64;
    nodesMAP[24][39] = 64;
    nodesMAP[24][38] = 26;
    nodesMAP[25][41] = 62;
    nodesMAP[26][41] = 27;
    nodesMAP[26][42] = 64;
    nodesMAP[26][43] = 30;
    nodesMAP[27][43] = 62;
    nodesMAP[28][43] = 36;
    nodesMAP[25][43] = 62;
    nodesMAP[24][43] = 34;
    nodesMAP[27][41] = 62;
    nodesMAP[28][41] = 29;
    nodesMAP[28][40] = 64;
    nodesMAP[28][39] = 64;
    nodesMAP[28][38] = 63;
    nodesMAP[27][37] = 28;
    nodesMAP[29][41] = 62;
    nodesMAP[30][41] = 37;
    nodesMAP[30][42] = 64;
    nodesMAP[30][43] = 63;
    nodesMAP[31][44] = 64;
    nodesMAP[31][45] = 63;
    nodesMAP[32][46] = 35;
    nodesMAP[31][41] = 61;
    nodesMAP[32][40] = 38;

}
