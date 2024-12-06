#include "funciones.hpp"
#include <iostream>
#include <algorithm> 

using namespace std;


bool esValido(int laberinto[10][10], int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n && laberinto[x][y] == 0);
}

bool resolverLaberinto(int laberinto[10][10], int solucion[10][10], int x, int y, int n) {
    if (x == n - 1 && y == n - 1 && laberinto[x][y] == 0) {
        solucion[x][y] = 1;
        return true;
    }

    if (esValido(laberinto, x, y, n)) {
        solucion[x][y] = 1;

        if (resolverLaberinto(laberinto, solucion, x + 1, y, n)) {
            return true;
        }

        if (resolverLaberinto(laberinto, solucion, x, y + 1, n)) {
            return true;
        }
        solucion[x][y] = 0;
        return false;
    }

    return false;
}

void imprimirLaberinto(int laberinto[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << laberinto[i][j] << " ";
        }
        cout << endl;
    }
}

