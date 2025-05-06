// ParImpar.cpp
#include "ParImpar.h"
#include <iostream>

float ParImpar::jugar(float gonzosApostar) {
    srand(time(nullptr));
    int valor = 1 + rand() % 6;
    cout << "Número aleatorio: " << valor << endl;
    int apuesta;
    cout << "Elige 1. Par, 2. Impar: ";
    cin >> apuesta;
    numeroJugador = (apuesta == 1 ? 0 : 1);
    numeroCasino  = valor % 2;  // 0 par, 1 impar
    cout << "Casa: " << (numeroCasino == 0 ? "Par\n" : "Impar\n");
    return calcularResultado(gonzosApostar);
}

float ParImpar::calcularResultado(float gonzosApostar) {
    return (numeroJugador == numeroCasino)
        ? 2 * gonzosApostar
        : 0;
}
