#include "CCapitulo.hpp"
#pragma once

class CSerie: public CCapitulo

{
    public:
    CSerie();
    ~CSerie();
    string temporada;
    void inicia()
    {
        cout<<"Iniciando el reconocimiento de la serie"<<endl;
    }
    
};
