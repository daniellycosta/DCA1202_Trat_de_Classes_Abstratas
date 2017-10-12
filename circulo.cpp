#include "circulo.h"
#include "screen.h"
#include<iostream>
#include<cmath>

using namespace std;
/**
 * @brief Construtor do Circulo
 * @details Recebe como parametro as coordenadas do centro do círculo,
 *  bem como, seu raio e se é preenchido. Com isso, as variáveis privadas
 *  da figura são inicializadas.
 */
Circulo::Circulo(int _x, int _y, int _r, bool _isFilled){
    raio = _r;
    x = _x;
    y = _y;
    isFilled = _isFilled;
    oct = 1;
}
/**
 * @brief Método draw do círculo
 * @details Varre a extensão do círculo (de centro-raio até centro+raio)
 * nas direções x e y, testando se as coordenadas atendem a equação do
 * círculo. Caso o usuário tenha optado pelo círculo preenchido, a
 * comparação é com a desigualdade <=,caso contrário, os píxels serão
 * alocados por meio do algoritmo de Bresenham.
 */
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
        int x1 = 0;
        int y1 = raio;
        int d = 1 - raio;
        pontosDaCircunferencia(x1,y1,t);
        while(y1 > x1){
            if(d < 0){
                d = d + 2*x1 + 3;
                x1 = x1 + 1;
            }
            else{
                d = d + 2*(x1-y1) + 5;
                x1 = x1 + 1;
                y1 = y1 - 1;
            }
            pontosDaCircunferencia(x1,y1,t);
        }
    }

}
/**
 * @brief Método pontosDaCircunferencia
 * @details espelha os pontos gerados no primeiro octante do círculo pros demais
 */
void Circulo::pontosDaCircunferencia(int x1, int y1, Screen &t){
    t.setPixel(x + x1, y + y1);
    t.setPixel(x + y1, y + x1);
    t.setPixel(x - y1, y + x1);
    t.setPixel(x - x1, y + y1);
    t.setPixel(x - x1, y - y1);
    t.setPixel(x - y1, y - x1);
    t.setPixel(x + y1, y - x1);
    t.setPixel(x + x1, y - y1);
}



