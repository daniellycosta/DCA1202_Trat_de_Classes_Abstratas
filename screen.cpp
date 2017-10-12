#include "screen.h"
#include<iostream>
#include<vector>

using namespace std;
/**
 * @brief Construtor da Screen
 * @param nl "altura" da tela
 * @param nc "largura" da tela
 * @details A tela é gerada através de um vetor de vetor de char preenchido de espaços.
 * OBS.:O eixo y cresce da direita para a esquerda e o x de cima pra baixo
 */

Screen::Screen(int nl, int nc){
    nlin = nl;
    ncol = nc;
    mat = vector<vector<char>>(nlin, vector<char>(ncol,' '));
}
/**
 * @brief Método de setar Pixel na tela
 * @details Recebe as coordenadas onde se deseja setar o píxel. No local dessa coordenada, o caracter lá presente
 *  é substituido pelo char armazenado em brush
 */

void Screen::setPixel(int x, int y){
    if((x<nlin) & (y<ncol) && (x>=0) & (y>=0)){
        mat[x][y] = brush;
    }
}
/**
 * @brief Método clear
 * @details percorre toda a telas substituindo os caracteres presentes nas posições pelo char espaço.
 */

void Screen::clear(){
    for(int i=0; i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            mat[i][j] = ' ';
        }
    }
}
/**
 * @brief Método setBrush
 * @details recebe um char e o utiliza para atribuir à variável privada @param brush
 */

void Screen::setBrush(char _brush){
    brush = _brush;
}
/**
 * @brief Sobrecarga do operator <<
 * @param os fluxo de saída
 * @param t tela
 * @details Função amiga da classe Screen, criada com o objetivo de possibilitar ao usuário a opção
 *  de exibir a tela no terminal ou em um arquivo de texto.
 */
ostream& operator<<(ostream &os, Screen &t){;
    for(int i=0; i<t.nlin; i++){
        for(int j=0; j<t.ncol; j++){
            os << t.mat[i][j];
        }
        os <<endl;
    }
    return(os);
}
