#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

class FiguraGeometrica{
public:
    FiguraGeometrica();
    /**
     * @brief Método draw(Screen &t)=0
     * @details Função virtual a ser implementada nas classes derivadas
     *  com isso, ao chamar o método, o programa identificará de qual figura
     *  geometrica se trata para desenhá-la de acordo com sua especificidade.
     */
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
