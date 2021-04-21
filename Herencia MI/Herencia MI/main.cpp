
#include <iostream>
#include "CProfesor.hpp"

int main()
{
    CProfesor Alberto;
    Alberto.nombre=" Alberto";
    Alberto.sexo=" Masculino";
    Alberto.edad=40;
    Alberto.grado_estudios=" Doctorado";
    Alberto.sueldo=3000;
    Alberto.matricula=" A0789";
    Alberto.horario_disponibilidad=" 7:00 am - 1:00 pm";
    
    cout<<"Nombre: "<<Alberto.nombre<<endl;
    cout<<"Sexo: "<<Alberto.sexo<<endl;
    cout<<"Edad: "<<Alberto.edad<<endl;
    cout<<"Grado de estudios: "<<Alberto.grado_estudios<<endl;
    cout<<"Sueldo: "<<Alberto.sueldo<<endl;
    cout<<"Matricula: "<<Alberto.matricula<<endl;
    cout<<"Horario de disponibilidad: "<<Alberto.horario_disponibilidad<<endl;
    Alberto.despierta();
    Alberto.llega();
    Alberto.prep_clase();
    Alberto.cal_ex();
    Alberto.retira();
    Alberto.duerme();
}
