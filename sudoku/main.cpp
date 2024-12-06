#include <iostream>
#include "funciones.hpp"

using namespace std;

int main() {
    int tablero[9][9];

    cout << "Introduce el tablero de Sudoku (usa 0 para casillas vacias):" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> tablero[i][j];
            if (tablero[i][j] < 0 || tablero[i][j] > 9) {
                cout << "Numero invalido. Intentalo de nuevo." << endl;
                return 1;
            }
        }
    }

    if (validarSudoku(tablero)) {
        cout << "El tablero de Sudoku es valido." << endl;
    } else {
        cout << "El tablero de Sudoku no es valido." << endl;
    }

    return 0;
}
