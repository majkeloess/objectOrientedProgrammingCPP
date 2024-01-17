#ifndef FIGURY_H
#define FIGURY_H
#include <vector>

#include "Figura.h"

class Figury {
public:
    Figury();
    void DodajFigure(Figura *figura);
    void Rysuj();

    std::vector<Figura*> fig;
    
};

#endif