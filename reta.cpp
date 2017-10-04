#include "reta.h"
#include "screen.h"
#include <iostream>

using namespace std;
Reta::Reta(int xi, int yi, int xf, int yf){

    ptosReta[0] = xi;
    ptosReta[1] = yi;
    ptosReta[2] = xf;
    ptosReta[3] = yf;
}

void Reta::draw(Screen &t){
    int x = ptosReta[0];
    int y = ptosReta[1];

    if(x != ptosReta[2] && y != ptosReta[3]){
        while(x != ptosReta[2] && y != ptosReta[3]){
            t.setPixel(x,y);
            x++;
            y++;
        }
    }
    else if(x == ptosReta[2]){
        while(y != ptosReta[3]){
                t.setPixel(x,y);
                y++;
        }
    }
    else{
        while(x != ptosReta[2]){
                t.setPixel(x,y);
                x++;
        }
    }



}
