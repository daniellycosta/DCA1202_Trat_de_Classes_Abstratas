#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"
#include "reta.h"

class Retangulo : public FiguraGeometrica{
private:
    int x,y,l,a;
    bool isFilled;
public:
    Retangulo(int _x=0, int _y=0, int _l=0, int _a=0, bool _isFilled=1);
    void draw(Screen &t);
};

#endif // RETANGULO_H
