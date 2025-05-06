Juego.h:
//
// Created by lufe0 on 7/05/2021.
//

\#ifndef CASINO\_JUEGO\_H
\#define CASINO\_JUEGO\_H

\#include "Jugador.h"

class Juego {
protected:
int numeroCasino;
int numeroJugador;

virtual float calcularResultado(float gonzosApostar) = 0;


public:
Juego() = default;

virtual ~Juego() = default;

virtual float jugar(float gonzosApostar) = 0;


};

\#endif //CASINO\_JUEGO\_H


