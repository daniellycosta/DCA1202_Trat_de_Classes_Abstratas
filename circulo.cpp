#include "circulo.h"
#include "screen.h"
#include<iostream>
#include<cmath>

using namespace std;

Circulo::Circulo(int _x, int _y, int _r, bool _isFilled){
    raio = _r;
    x = _x;
    y = _y;
    isFilled = _isFilled;
}

void Circulo::draw(Screen &t){
    if(isFilled){
        for(int i=(x-raio);i<=(x+raio);i++){
            for(int j=(y-raio);j<=(y+raio);j++){
                if( (i-x)*(i-x)+(j-y)*(j-y) <= (raio*raio)){
                    t.setPixel(i,j);
                }
            }
        }
    }
    else{
        for(int i=(x-raio);i<=(x+raio);i++){
            for(int j=(y-raio);j<=(y+raio);j++){
                if( (i-x)*(i-x)+(j-y)*(j-y) == (raio*raio)){
                    t.setPixel(i,j);
                }

            }
        }
    }

}
