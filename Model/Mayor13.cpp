//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    float lowestResult = 0.5;
    int numMaxRandom = 13;
    int numMinRandom = 1;


    srand(time(nullptr));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    // El jugador decidio jugar entonces calcula su numero
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Numero casino: " << numeroCasino << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Mayor13::calcularResultado(float gonzosApostar) {

    float maxResult = 2;
    float lowestResult = 0;
    if (numeroJugador > numeroCasino) {
        return maxResult * gonzosApostar;
    } else {
        return lowestResult;
    }
}

void MayorDe13::mostrarReglas() {
    std::cout << "Reglas de Mayor de 13:\n";
    std::cout << "Se genera un número del 1 al 13 para ti.\n";
    std::cout << "Puedes rendirte y perder la mitad o enfrentar el número del casino.\n";
    std::cout << "Si el número del casino es mayor o igual, pierdes todo.\n";
    std::cout << "Si es menor, ganas el doble de lo apostado.\n";
}
