//Polimorfismo de Inclusion
#include <iostream>
#include "CAuto.hpp"
#include "CAvion.hpp"
#include "CCaballo.hpp"
int main()
{
   
    
    CTransporte *todas[4];
    todas[0] = new CTransporte();
    todas[1] = new CAuto();
    todas[2] = new CAvion();
    todas[3] = new CCaballo();
    
    int i;
    for (i=0; i<4; i++)
        todas[i]->acelera();
    CTransporte grande;
    grande.frenar();
    CAuto ford;
    ford.frenar();
    CAvion blanco;
    blanco.frenar();
    CCaballo cafe;
    cafe.frenar();
    
}
