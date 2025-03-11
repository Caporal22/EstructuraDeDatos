//
// Created by Danyphantom on 06/03/2025.
//

#include "numPerfectos.h"

#include <iostream>
using namespace std;

bool numPerfect(int a) {
    int suma = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            suma += i;
        }
    }
    
    return suma == a;
}

int main() {
    int num = 6;

    if (numPerfect(num)) {
        cout << num << " es un numero perfecto." << endl;
    } else {
        cout << num << " no es un numero perfecto." << endl;
    }

    return 0;
}
