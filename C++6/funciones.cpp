#include "funciones.hpp"

// Función que cuenta la frecuencia de cada carácter en una cadena
std::map<char, int> contarFrecuencia(const std::string& cadena) {
    std::map<char, int> frecuencia;

    // Recorremos cada carácter de la cadena
    for (char c : cadena) {
        frecuencia[c]++;  // Incrementa la frecuencia del carácter
    }

    return frecuencia;
}

// Función que encuentra el carácter más repetido en la cadena
char caracterMasRepetido(const std::string& cadena) {
    std::map<char, int> frecuencia = contarFrecuencia(cadena);

    char masRepetido = '\0';
    int maxFrecuencia = 0;

    // Iteramos sobre el mapa para encontrar el carácter más repetido
    for (const auto& par : frecuencia) {
        if (par.second > maxFrecuencia) {
            masRepetido = par.first;
            maxFrecuencia = par.second;
        }
    }

    return masRepetido;
}
