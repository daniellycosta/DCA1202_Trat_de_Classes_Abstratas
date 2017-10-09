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
<<<<<<< HEAD
                if( (i-x)*(i-x)+(j-y)*(j-y) <= (raio*raio)){
=======
                if( (i-raio)*(i-raio)+(j-raio)*(j-raio) <= (raio*raio)){
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
                    t.setPixel(i,j);
                }
            }
        }
    }
    else{
        for(int i=(x-raio);i<=(x+raio);i++){
            for(int j=(y-raio);j<=(y+raio);j++){
<<<<<<< HEAD
                if( (i-x)*(i-x)+(j-y)*(j-y) == (raio*raio)){
=======
                if( (i-raio)*(i-raio)+(j-raio)*(j-raio) == (raio*raio)){
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
                    t.setPixel(i,j);
                }

            }
        }
    }

}
