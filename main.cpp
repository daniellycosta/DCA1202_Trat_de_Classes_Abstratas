#include <iostream>
<<<<<<< HEAD
#include <vector>
=======
#include<vector>
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
#include <string>
#include <cstdio>
#include <cstring>
#include <fstream>
<<<<<<< HEAD
#include <sstream>


#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "brush.h"
=======
#include <string>

#include<screen.h>
#include<reta.h>
#include<retangulo.h>
#include<circulo.h>
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097

using namespace std;

int main(){

    vector <FiguraGeometrica*> figuras;
    vector <FiguraGeometrica*>::iterator it;

    ifstream entrada;
<<<<<<< HEAD
    ofstream saida;
=======
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
    string comando;
    int x, y, larg, alt,x0,y0,raio;
    char b;
    bool fillmode;
<<<<<<< HEAD
    Screen s;

    //entrada.open("C:/Users/do lar/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/entrada.txt");
    entrada.open("C:/Users/D2/Desktop/DCA1202_Trat_de_Classes_Abstratas-master/entrada.txt");

    if(entrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }

    while(entrada.good()){

=======

    entrada.open("C:/Users/do lar/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/entrada.txt");
    if(entrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
        getline(entrada, comando);
        stringstream interpr(comando);
        interpr >> comando;

        if(comando == "dim"){
<<<<<<< HEAD
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
=======
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
>>>>>>> 29c0f4aacef564d481a8dc9a8869a4ea6fc27097
    cout << s;
    entrada.close();

    //saida.open("C:/Users/do lar/Documents/GitHub/DCA1202_Trat_de_Classes_Abstratas/saida.txt");
    saida.open("C:/Users/D2/Desktop/DCA1202_Trat_de_Classes_Abstratas-master/saida.txt");
    saida << s;
    saida.close();

    return 0;
}
