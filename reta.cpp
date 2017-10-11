#include "reta.h"
#include "screen.h"
#include <iostream>
#include<cmath>

using namespace std;
/**
 * @brief Construtor da Reta
 * @details Recebe dois pontos,o inicial e o final, da reta declarada e aloca
 *  nas variáveis privadas da classe.
 * @param _xi Coordenada x do ponto inicial
 * @param _yi Coordenada y do ponto inicial
 * @param _xf Coordenada x do ponto final
 * @param _yf Coordenada y do ponto final
 */
Reta::Reta(int _xi, int _yi, int _xf, int _yf){

    xi = _xi;
    yi = _yi;
    xf = _xf;
    yf = _yf;
}
/**
 * @brief Método draw da reta
 * @param t Tela a receber o desenho da reta.
 * Utiliza o algoritmo de Bresenham para aproximar a reta real à digital
 * e ativa a função setPixel da tela.
 */
void Reta::draw(Screen &t){
    float Tamanho;
    float Delta_x;
    float Delta_y;
    float x = xi;
    float y = yi;

    // Tamanho: Aproxima o tamanho da reta
    if( abs(xf - xi) > abs(yf - yi)){
        Tamanho = abs(xf - xi);
    }else{
        Tamanho = abs(yf - yi);
    }
    //seleciona o maior dos valores entre Delta_x e Delta_y como unidade de rasterização
    Delta_x = (xf - xi)/Tamanho;
    Delta_y = (yf - yi)/Tamanho;
    int i = 1;
    while(i < Tamanho){
        //round: valor arredondado de um dado número real. round(-8.6) = -9; round(-8.4) = -8
        t.setPixel(round(x), round(y));
        x = x + Delta_x;
        y = y + Delta_y;
        i = i + 1;
    }

}
