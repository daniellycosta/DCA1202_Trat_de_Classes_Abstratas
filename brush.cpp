#include<iostream>
#include "brush.h"
#include "screen.h"

using namespace std;
/**
 * @brief Construtor Brush
 * @details atribui à variável privada b, o char passado como parametro pelo usuário
 */
Brush::Brush(char _b){
    b = _b;
}

/**
 * @brief Método draw do brush
 * Atribui o brush. Artifício usado para desenhar diferentes figuras
 *  com diferentes brushes.
 */
void Brush::draw(Screen &t){
    t.setBrush(b);
}
