#include "screen.h"
#include<iostream>
#include<vector>

using namespace std;

Screen::Screen(int nl, int nc){
    nlin = nl;
    ncol = nc;
    mat = vector<vector<char>>(nlin, vector<char>(ncol,'.'));
}

void Screen::setPixel(int x, int y){
    if((x<nlin) & (y<ncol)){
        mat[x][y] = brush;
    }
    else{
       cout<<"[SC] Erro! Coordenadas fora da tela \n";
    }
}

void Screen::clear(){
    for(int i=0; i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            mat[i][j] = '.';
        }
    }
}

void Screen::setBrush(char _brush){
    if(_brush != '.'){
        brush = _brush;
    }
    else{
        cout<<"[SC] Erro! Brush com mesmo símbolo da tela \n";
    }

}

ostream& operator<<(ostream &os, Screen &t){
    for(int i=0; i<t.nlin; i++){
        for(int j=0; j<t.ncol; j++){
            os << t[i][j] << " "; //perguntar pq não ta compilando
        }
        os << endl;
    }
        return(os);
}
