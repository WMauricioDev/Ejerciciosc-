#include <iostream>
#include "funciones.hpp"

int main() {
    int n;

    // Pedir al usuario la cantidad de filas
    std::cout << "Introduce el número de filas para el Triángulo de Pascal: ";
    std::cin >> n;

    // Verificar si el número es positivo
    if (n <= 0) {
        std::cout << "Por favor, ingrese un número mayor que 0." << std::endl;
    } else {
        // Llamar a la función para generar y mostrar el Triángulo de Pascal
        generarTrianguloPascal(n);
    }

    return 0;
}
