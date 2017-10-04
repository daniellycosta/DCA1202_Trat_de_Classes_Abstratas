#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica{
public:
    Circulo();
    void draw(Screen &t);
};

#endif // CIRCULO_H
