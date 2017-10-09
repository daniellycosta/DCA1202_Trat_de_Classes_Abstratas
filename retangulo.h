#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

class Retangulo : public FiguraGeometrica{
private:
    int x,y,l,a;
public:
    Retangulo(int _x=0, int _y=0, int _l=0, int _a=0);
    void draw(Screen &t);
};

#endif // RETANGULO_H
