#include <iostream>
#include "funciones.hpp"

using namespace std; 

int main() {
    int n;

    cout << "numero para calcular los primos hasta : ";
    cin >> n;

    if (n < 2) {
        cout << "No valido, no hay numeros primos menores que el numero 2" << endl;
        return 0;
    }

    // Llamada a la función criba
    vector<int> primos = numeroprimo(n);

    // Mostrar los números primos encontrados
    cout << "Nmeros primos hasta " << n << ": ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
