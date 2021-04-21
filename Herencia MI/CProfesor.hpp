#include "CPersonalEscuela.hpp"
class CProfesor:public CPersonalEscuela
{
public:
    CProfesor();
    ~CProfesor();
    string horario_disponibilidad;
    string matricula;
    void prep_clase();
    void cal_ex();

};
