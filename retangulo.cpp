#include "retangulo.h"
#include "screen.h"
#include<iostream>
using namespace std;

Retangulo::Retangulo(int _x, int _y, int _l, int _a, bool _isFilled){
    x = _x;
    y = _y;
    l = _l;
    a = _a;
    isFilled = _isFilled;

}
void Retangulo::draw(Screen &t){
<<<<<<< HEAD

    for(int i=x; i<=l;i++){
        for(int j=y;j<=a;j++){
            t.setPixel(i,j);
        }
    }

=======
    if(isFilled){
        for(int i=x; i<=l;i++){
            for(int j=y;j<=a;j++){
                t.setPixel(i,j);
            }
        }
    }
    else{
        Reta cima(x,y,x,(y-a));
        Reta esq(x,(y-a),(x+l),(y-a));
        Reta baixo((x+l),(y-a),(x+l),y);
        Reta dir((x+l),y,x,y);

        esq.draw(t);
        baixo.draw(t);
        dir.draw(t);
        cima.draw(t);
    }
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
}
