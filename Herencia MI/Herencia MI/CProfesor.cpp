
#include "CProfesor.hpp"
#include<iostream>
CProfesor::CProfesor()
{
    horario_disponibilidad="";
    matricula="";
    
}

CProfesor::~CProfesor()
{
    
}
void CProfesor::prep_clase()
{
    cout<<"El profesor terminó de preparar sus clases pendientes. "<<endl;
}

void CProfesor::cal_ex()
{
    cout<<"El profesor terminó de calificar sus examenes pendientes "<<endl;
}
