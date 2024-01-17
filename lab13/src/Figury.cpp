#include "Figury.h"
#include <iostream>

Figury::Figury() {}

void Figury::DodajFigure(Figura *figura)
{
    fig.push_back(figura);
}

void Figury::Rysuj()
{
    for (int i=0; i < fig.size(); i++)
    {
        fig[i]->fun();
    }
}