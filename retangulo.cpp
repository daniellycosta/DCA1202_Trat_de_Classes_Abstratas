#include "retangulo.h"
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

    for(int i=x; i<=l;i++){
        for(int j=y;j<=a;j++){
            t.setPixel(i,j);
        }
    }

}
