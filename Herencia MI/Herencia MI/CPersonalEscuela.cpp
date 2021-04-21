
#include "CPersonalEscuela.hpp"
#include<iostream>
CPersonalEscuela::CPersonalEscuela()
{
    grado_estudios="";
    sueldo=0;
    
}

CPersonalEscuela::~CPersonalEscuela()
{
    
}
void CPersonalEscuela::llega()
{
    cout<<"Esta llegando a la escuela "<<endl;
}

void CPersonalEscuela::retira()
{
    cout<<"Se esta retirando de la escuela "<<endl;
}
