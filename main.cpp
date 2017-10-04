#include <iostream>
#include<screen.h>
#include<reta.h>
#include<retangulo.h>
#include<circulo.h>

using namespace std;

int main(){

    Screen s;
    s.setBrush('+');
    Reta teste(0,1,0,5);
    teste.draw(s);

    //s.setPixel(5,2);
    cout << s;
    return 0;
}
