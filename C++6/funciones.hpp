#ifndef funciones_hpp
#define funciones_hpp


#include <string>
#include <map>

// Función para contar la frecuencia de cada carácter en una cadena
std::map<char, int> contarFrecuencia(const std::string& cadena);

// Función para encontrar el carácter más repetido en una cadena
char caracterMasRepetido(const std::string& cadena);

#endif