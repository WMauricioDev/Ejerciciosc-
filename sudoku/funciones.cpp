#include "funciones.hpp"
#include <iostream>
#include <algorithm> 
#include <set>

using namespace std; 
bool validarFilas(int tablero[9][9]) {
    for (int i = 0; i < 9; i++) {
        set<int> numeros;
        for (int j = 0; j < 9; j++) {
            int num = tablero[i][j];
            if (num != 0) {
                if (numeros.count(num)) return false;
                numeros.insert(num);
            }
        }
    }
    return true;
}

bool validarColumnas(int tablero[9][9]) {
    for (int j = 0; j < 9; j++) {
        set<int> numeros;
        for (int i = 0; i < 9; i++) {
            int num = tablero[i][j];
            if (num != 0) {
                if (numeros.count(num)) return false;
                numeros.insert(num);
            }
        }
    }
    return true;
}

bool validarSubcuadros(int tablero[9][9]) {
    for (int inicioFila = 0; inicioFila < 9; inicioFila += 3) {
        for (int inicioColumna = 0; inicioColumna < 9; inicioColumna += 3) {
            set<int> numeros;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int num = tablero[inicioFila + i][inicioColumna + j];
                    if (num != 0) {
                        if (numeros.count(num)) return false;
                        numeros.insert(num);
                    }
                }
            }
        }
    }
    return true;
}

bool validarSudoku(int tablero[9][9]) {
    return validarFilas(tablero) && validarColumnas(tablero) && validarSubcuadros(tablero);
}
