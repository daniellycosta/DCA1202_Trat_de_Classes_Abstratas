#include "retangulo.h"
#include "screen.h"
#include<iostream>
using namespace std;
/**
 * @brief Construtor do Retangulo
 * Recebe a coordenada do ponto superior esquerdo, bem como largura e altura
 *  do retangulo e atribui às variáveis privadas.
 */

Retangulo::Retangulo(int _x, int _y, int _l, int _a){
    x = _x;
    y = _y;
    l = _l;
    a = _a;

}
/**
 * @brief Método draw do retangulo
 *  @details Varre toda a extensão do retangulo
 *  setando pixels ao longo da varredura
 */
void Retangulo::draw(Screen &t){

    for(int i=x; i<(x+l);i++){
        for(int j=y;j<(y+a);j++){
            t.setPixel(i,j);
        }
    }

}
