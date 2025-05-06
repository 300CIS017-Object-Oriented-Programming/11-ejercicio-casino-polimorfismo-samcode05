// Juego.h
#ifndef JUEGO_H
#define JUEGO_H
#include "Jugador.h"
#include <string>

class Juego {
protected:
    std::string nombre;
public:
    Juego(std::string nombre) : nombre(nombre) {}
    virtual int jugar(Jugador& jugador, int apuesta) = 0;
    virtual void mostrarReglas() = 0;
    std::string getNombre() { return nombre; }
    virtual ~Juego() {}
};

#endif
