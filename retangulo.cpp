#include "retangulo.h"
#include "reta.h"
#include "screen.h"
#include<iostream>
using namespace std;

Retangulo::Retangulo(int _x, int _y, int _l, int _a){
    x = _x;
    y = _y;
    l = _l;
    a = _a;

}
void Retangulo::draw(Screen &t){
//    Reta cima(x,y,x,(y-a));
//    Reta esq(x,(y-a),(x+l),(y-a));
//    Reta baixo((x+l),(y-a),(x+l),y);
//    Reta dir((x+l),y,x,y);

//    esq.draw(t);
//    baixo.draw(t);
//    dir.draw(t);
//    cima.draw(t);

    for(int i=x; i<l;i++){
        for(int j=y;j<a;j++){
            t.setPixel(i,j);
        }
    }
}
