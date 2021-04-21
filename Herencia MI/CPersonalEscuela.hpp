#include "CPersona.hpp"
class CPersonalEscuela:public CPersona
{
public:
    CPersonalEscuela();
    ~CPersonalEscuela();
    string grado_estudios;
    int sueldo;
    void llega();
    void retira();

};
