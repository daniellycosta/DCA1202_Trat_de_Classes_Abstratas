#include <iostream>
#include<screen.h>
#include<reta.h>
#include<retangulo.h>
#include<circulo.h>

using namespace std;

int main(){

    Screen s(20,20);
    s.setBrush('0');
    //Reta teste(0,0,0,9);
    Retangulo teste(1,1,10,5,1);
    //Circulo teste(10,10,5,0);
    teste.draw(s);
    //s.setBrush('0');
    //s.setPixel(5,5);
    //s.setPixel(15,15);
    cout << s;
    return 0;
}
