#include <iostream>
#include<screen.h>
#include<reta.h>
#include<retangulo.h>
#include<circulo.h>

using namespace std;

int main(){

    Screen s(50,50);
    s.setBrush('+');
    //Reta teste(0,0,0,9);
    //Retangulo teste(0,0,5,5);
    Circulo teste(25,25,10,1);
    teste.draw(s);

    //s.setPixel(5,2);
    cout << s;
    return 0;
}
