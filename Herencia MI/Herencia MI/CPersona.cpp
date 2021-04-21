
#include "CPersona.hpp"
CPersona::CPersona()
{
    sexo="";
    edad=0;
    nombre="";
        
}

CPersona::~CPersona()
{
}
void CPersona::despierta()
{
    cout<<"Este persona despertó "<<endl;

}

void CPersona::duerme()
{
    cout<<"Este persona se durmió "<<endl;

}
