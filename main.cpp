#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>


#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "brush.h"

using namespace std;

int main(){

    vector <FiguraGeometrica*> figuras;
    vector <FiguraGeometrica*>::iterator it;

    ifstream entrada;
    ofstream saida;
    string comando;
    int x, y, larg, alt,x0,y0,raio;
    char b;
    bool fillmode;
    Screen s;

    entrada.open("C:/Users/Dany/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/entrada.txt");
    //entrada.open("C:/Users/do lar/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/entrada.txt");
    //entrada.open("C:/Users/D2/Desktop/DCA1202_Trat_de_Classes_Abstratas-master/entrada.txt");

    if(entrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }

    while(entrada.good()){

        getline(entrada, comando);
        stringstream interpr(comando);
        interpr >> comando;

        if(comando == "dim"){
            interpr >> larg >> alt;
            s = Screen(larg,alt);
        }
        else if(comando == "brush"){
            interpr >> b;
            if(interpr.good())
                figuras.push_back(new Brush(b));
            else
                figuras.push_back(new Brush(' '));
        }
        else if(comando == "line"){
            interpr >> x0 >> y0 >> x >> y;
            figuras.push_back(new Reta(x0,y0,x,y));
        }
        else if(comando == "rectangle"){
            interpr >> x >> y >> larg >> alt;
            figuras.push_back(new Retangulo(x,y,larg,alt));
        }
        else if(comando == "circle"){
            interpr >> x0 >> y0 >> raio >> fillmode;
            figuras.push_back(new Circulo(x0,y0,raio,fillmode));
        }
    }

    for(it=figuras.begin(); it!=figuras.end(); it++){
        (*it)->draw(s);
    }
    cout << s;
    entrada.close();

    saida.open("C:/Users/Dany/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/saida.txt");
    //saida.open("C:/Users/do lar/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/saida.txt");
    //saida.open("C:/Users/D2/Desktop/DCA1202_Trat_de_Classes_Abstratas-master/saida.txt");

    saida << s;
    saida.close();

    return 0;
}
