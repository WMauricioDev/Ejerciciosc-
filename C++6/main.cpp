#include <iostream>
#include "funciones.hpp"

int main() {
    std::string cadena;

    // Solicitar al usuario que ingrese una cadena
    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, cadena);

    // Mostrar las frecuencias de los caracteres
    std::map<char, int> frecuencias = contarFrecuencia(cadena);
    std::cout << "\nFrecuencia de caracteres:" << std::endl;
    for (const auto& par : frecuencias) {
        std::cout << "'" << par.first << "' aparece " << par.second << " veces" << std::endl;
    }

    // Determinar y mostrar el carácter más repetido
    char masRepetido = caracterMasRepetido(cadena);
    std::cout << "\nEl carácter más repetido es: '" << masRepetido << "'" << std::endl;

    return 0;
}
