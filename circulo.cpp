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
}
/**
 * @brief Método draw do círculo
 * @details Varre a extensão do círculo (de centro-raio até centro+raio)
 * nas direções x e y, testando se as coordenadas atendem a equação do
 * círculo. Caso o usuário tenha optado pelo círculo preenchido, a
 * comparação é com a desigualdade <=,caso contrário, os píxels serão
 * alocados apenas se obedecerem a igualdade (==).
 *
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
        for(int i=(x-raio);i<=(x+raio);i++){
            for(int j=(y-raio);j<=(y+raio);j++){
                if( (i-x)*(i-x)+(j-y)*(j-y) == (raio*raio)){
                    t.setPixel(i,j);
                }

            }
        }
    }

}
