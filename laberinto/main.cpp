#include <iostream>

#include "funciones.hpp"

using namespace std;

int main() {
    int n;
    int laberinto[10][10], solucion[10][10] = {0};

    cout << "Introduce el tamaño del laberinto (max 10): ";
    cin >> n;

    if (n > 10 || n <= 0) {
        cout << "Tamaño invalido." << endl;
        return 1;
    }

    cout << "Introduce el laberinto :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> laberinto[i][j];
        }
    }

    cout << "laberinto inicial:" << endl;
    imprimirLaberinto(laberinto, n);

    if (resolverLaberinto(laberinto, solucion, 0, 0, n)) {
        cout << "Solución encontrada:" << endl;
        imprimirLaberinto(solucion, n);
    } else {
        cout << "no hay solucion posible para el laberinto." << endl;
    }

    return 0;
}
