#include <iostream>
#include<vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>

#include<screen.h>
#include<reta.h>
#include<retangulo.h>
#include<circulo.h>

using namespace std;

int main(){

    vector <FiguraGeometrica*> figuras;
    vector <FiguraGeometrica*>::iterator it;

    ifstream entrada;
    string comando;
    int x, y, larg, alt,x0,y0,raio;
    char b;
    bool fillmode;

    entrada.open("C:/Users/do lar/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/entrada.txt");
    if(entrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
        getline(entrada, comando);
        stringstream interpr(comando);
        interpr >> comando;

        if(comando == "dim"){
            comando >> larg >> alt;
            Screen s(larg,alt);
        }
        else if(comando == "brush"){
            comando >> b;
            s.setBrush(b);
        }
        else if(comando == "line"){
            comando >> x0 >> y0 >> x >> y;
            figuras.push_back(new Reta(x0,y0,x,y));
        }
        else if(comando == "rectangle"){
            comando >> x >> y >> larg >> alt;
            figuras.push_back(new Retangulo(x,y,larg,alt));
        }
        else if(comando == "circle"){
            comando >> x0 >> y0 >> raio >> fillmode;
            figuras.push_back(new Circulo(x0,y0,raio,fillmode));
        }
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }


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
