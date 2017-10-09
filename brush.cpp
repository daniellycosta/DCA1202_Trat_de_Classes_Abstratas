#include<iostream>
#include "brush.h"
#include "screen.h"

using namespace std;

Brush::Brush(char _b){
    b = _b;
}

void Brush::draw(Screen &t){
    t.setBrush(b);
}
