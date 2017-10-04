#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

class Retangulo : public FiguraGeometrica{
public:
    Retangulo();
    void draw(Screen &t);
};

#endif // RETANGULO_H
