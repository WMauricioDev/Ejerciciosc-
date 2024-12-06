#include <iostream>
#include "funciones.hpp"

int main() {
    int inicio, fin;

    // Solicitar al usuario el rango de números
    std::cout << "Introduce el inicio del rango: ";
    std::cin >> inicio;
    std::cout << "Introduce el fin del rango: ";
    std::cin >> fin;

    // Verificar que el rango es válido
    if (inicio > 0 && fin > 0 && inicio <= fin) {
        // Llamar a la función para encontrar el número con la secuencia más larga en el rango
        secuenciaMasLargaCollatz(inicio, fin);
    } else {
        std::cout << "Rango no válido. Asegúrese de que el inicio es menor o igual al fin, y ambos son positivos." << std::endl;
    }

    return 0;
}
