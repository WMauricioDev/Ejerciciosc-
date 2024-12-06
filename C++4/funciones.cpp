#include <iostream>
#include "funciones.hpp"

// Función para generar el Triángulo de Pascal
void generarTrianguloPascal(int n) {
    // Matriz para almacenar el Triángulo de Pascal
    int pascal[n][n];

    // Rellenar la matriz con los valores del Triángulo de Pascal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            // El primer y último valor de cada fila es 1
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                // Otros valores son la suma de los dos valores superiores
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }

    // Mostrar el Triángulo de Pascal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << pascal[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

