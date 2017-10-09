#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

class Retangulo : public FiguraGeometrica{
private:
    int x,y,l,a;
    bool isFilled;
public:
<<<<<<< HEAD
    Retangulo(int _x=0, int _y=0, int _l=0, int _a=0);
=======
    Retangulo(int _x=0, int _y=0, int _l=0, int _a=0, bool _isFilled=1);
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
    void draw(Screen &t);
};

#endif // RETANGULO_H
