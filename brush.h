#ifndef BRUSH_H
#define BRUSH_H
#include "figurageometrica.h"
#include "screen.h"

class Brush : public FiguraGeometrica{
private:
    char b;
public:
    Brush(char _b = ' ');
    void draw(Screen &t);
};

#endif // BRUSH_H
