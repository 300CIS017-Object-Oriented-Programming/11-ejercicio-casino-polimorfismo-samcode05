// ParImpar.h
#ifndef CASINO_PARIMPAR_H
#define CASINO_PARIMPAR_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>

class ParImpar : public Juego {
protected:
    float calcularResultado(float gonzosApostar) override;
public:
    ParImpar() = default;
    ~ParImpar() override = default;
    float jugar(float gonzosApostar) override;
    void mostrarReglas() const override {
      cout << "ParImpar: Apuesta a par o impar. Acierto 2x, fallo 0x.\n";
    }
};

#endif // CASINO_PARIMPAR_H
