#include "circulo.h"
#include "screen.h"
#include<iostream>
#include<cmath>

using namespace std;

Circulo::Circulo(int _x, int _y, int _r, bool _ehfilled){
    raio = _r;
    x = _x;
    y = _y;
    ehfilled = _ehfilled;
}

void Circulo::draw(Screen &t){
    int xt,yt;
    if(ehfilled){
        for(int i=(x-raio);i<(x+raio);i++){
            for(int j=(y+raio);j>(y-raio);j--){
                xt = i; yt = j;
                if( (xt-raio)*(xt-raio)+(yt-raio)*(yt-raio) <= (raio*raio)){
                    t.setPixel(xt,yt);
                }

            }
        }
    }
    //else{

    //}

    //    int x = 0;
    //    int y = raio;
    //    int d = 1 - raio;
    //    pontosDaCircunferencia(x,y);
    //    while(y > x){
    //        if(d < 0){
    //            d = d + 2*x + 3;
    //            x = x + 1;
    //        }
    //        else{
    //            d = d + 2*(x-y) + 5;
    //            x = x + 1;
    //            y = y - 1;
    //        }
    //        pontosDaCircunferencia(x,y);
    //    }
}

void Circulo::pontosDaCircunferencia(int x, int y){

}
