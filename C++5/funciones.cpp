#include <iostream>
#include "funciones.hpp"

// Función que calcula la longitud de la secuencia de Collatz para un número dado
int longitudSecuenciaCollatz(int n) {
    int longitud = 1;  // Comienza con 1, ya que el número inicial cuenta como el primer paso

    // Se aplica la conjetura hasta llegar a 1
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;  // Si es par, se divide entre 2
        } else {
            n = 3 * n + 1;  // Si es impar, se multiplica por 3 y se le suma 1
        }
        longitud++;  // Incrementamos la longitud de la secuencia
    }
    return longitud;
}

// Función que determina el número con la secuencia más larga en un rango de números
void secuenciaMasLargaCollatz(int inicio, int fin) {
    int numeroMaximo = inicio;
    int longitudMaxima = longitudSecuenciaCollatz(inicio);

    // Iterar sobre el rango [inicio, fin] para encontrar el número con la secuencia más larga
    for (int i = inicio + 1; i <= fin; i++) {
        int longitudActual = longitudSecuenciaCollatz(i);
        if (longitudActual > longitudMaxima) {
            longitudMaxima = longitudActual;
            numeroMaximo = i;
        }
    }

    std::cout << "El número con la secuencia más larga es: " << numeroMaximo << std::endl;
    std::cout << "La longitud de la secuencia es: " << longitudMaxima << std::endl;
}
