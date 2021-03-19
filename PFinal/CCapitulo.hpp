#include "CVideo.hpp"
#pragma once

class CCapitulo: public CVideo

{
    public:
    CCapitulo(string _serie, int temporada, string nombre_capitulo, int _cal);
    CCapitulo();
    ~CCapitulo();
    int _temporada;
    string serie;
    string _nombrecapitulo;
    void capitulos();
    int cal;
    void play()
    {
        cout<<"Play video (capitulo)"<<endl;
    }
    void stop()
    {
        cout<<"Stop video (capitulo)"<<endl;
    }
};
