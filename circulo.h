#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica{
private:
    int raio,x,y;
    bool ehfilled;
public:
    Circulo(int _x,int _y,int _r, bool _ehfilled);
    void draw(Screen &t);
    void pontosDaCircunferencia(int x,int y);
};

#endif // CIRCULO_H
