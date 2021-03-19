
#include "CCapitulo.hpp"

CCapitulo::CCapitulo()
{
   
        
}
CCapitulo::CCapitulo(string _serie, int temporada, string nombre_capitulo, int _cal)
{
    serie=_serie;
    _temporada=temporada;
    _nombrecapitulo=nombre_capitulo;
    cal=_cal;
    
}
CCapitulo::~CCapitulo()
{
}
void CCapitulo::capitulos()
{
    
    cout<<"Serie: "<<serie<<endl;
    cout<<"Temporada: "<<_temporada<<endl;
    cout<<"Nombre del capitulo: "<<_nombrecapitulo<<endl;
    cout<<"Calificación del capitulo: "<<cal<<endl;
    
}

