#ifndef funciones_hpp
#define funciones_hpp
#include <stdio.h>
#include <vector>

using namespace std;

void subconjunto(const std::vector<int>& conjunto, vector<int>& subconjuntoActual, int indice,
 vector<vector<int>>& resultado);


void imprimirSubconjuntos(const vector<vector<int>>& subconjuntos);


#endif /* funciones_hpp */


