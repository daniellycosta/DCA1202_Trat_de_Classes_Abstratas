#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica{
private:
    int raio,x,y,oct;
    bool isFilled;
public:
    Circulo(int _x, int _y, int _r, bool _isFilled);
    void draw(Screen &t);
    void pontosDaCircunferencia(int x1, int y1, Screen &t);
};

#endif // CIRCULO_H
