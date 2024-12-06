#include "funciones.hpp"
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std; 

vector<int> numeroprimo(int n) {
    vector<bool> es_primo(n + 1, true); 
    vector<int> primos; 

    es_primo[0] = es_primo[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (es_primo[i]) {
            for (int j = i * i; j <= n; j += i) {
                es_primo[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (es_primo[i]) {
            primos.push_back(i);
        }
    }

    return primos;
}

