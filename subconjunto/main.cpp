#include <iostream>
#include "funciones.hpp"
#include <vector>


using namespace std;

int main() {
    int n;
    vector<int> conjunto;

    cout << "Introduce el tamano del conjunto: ";
    cin >> n;

    if (n <= 0) {
        cout << "El tamano del conjunto debe ser mayor que 0." << endl;
        return 1;
    }

    cout << "Introduce los elementos del conjunto: " << endl;
    for (int i = 0; i < n; i++) {
        int objeto;
        cin >> objeto;
        conjunto.push_back(objeto);
    }

    vector<int> subconjuntoActual;
    vector<vector<int>> subconjuntos;

    subconjunto(conjunto, subconjuntoActual, 0, subconjuntos);

    cout << "\nSubconjuntos generados:" << endl;
    imprimirSubconjuntos(subconjuntos);

    return 0;
}

