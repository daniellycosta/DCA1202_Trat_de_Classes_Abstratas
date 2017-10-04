#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica{
private:
    int ptosReta[4];
public:
    Reta(int xi, int yi, int xf, int yf);
    void draw(Screen &t);
};

#endif // RETA_H
