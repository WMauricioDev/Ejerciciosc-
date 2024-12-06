#include "funciones.hpp"
#include <iostream>
#include <algorithm> 
#include <vector>
#include "funciones.hpp"
#include <iostream>

using namespace std;


void subconjunto(const vector<int>& conjunto, vector<int>& subconjuntoActual, int indice, vector<vector<int>>& resultado) {
    if (indice == conjunto.size()) {
        resultado.push_back(subconjuntoActual);
        return;
    }

    subconjunto(conjunto, subconjuntoActual, indice + 1, resultado);

    subconjuntoActual.push_back(conjunto[indice]);
    subconjunto(conjunto, subconjuntoActual, indice + 1, resultado);

    subconjuntoActual.pop_back();
}

void imprimirSubconjuntos(const vector<vector<int>>& subconjuntos) {
    for (const auto& subconjunto : subconjuntos) {
        cout << "{ ";
        for (int objeto  : subconjunto) {
            cout << objeto << " ";
        }
        cout << "}" << endl;
    }
}

