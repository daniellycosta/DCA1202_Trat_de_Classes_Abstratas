#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**uma classe abstrata eh uma classe que possui
 * pelo menos uma função virtual pura.
 *
 * Classes abstratas NÃO podem ser INSTANCIADAS
 * e servem apenas como BASE para a criação de
 * classes derivadas.
 * */

class FiguraGeometrica{
public:
    FiguraGeometrica();
    /**função virtual pura: servem para
     * forçar as classes derivadas a implementarem
     * esse metodo, de forma que ele possa ser
     * chamado quando necessário for;
     **/
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
