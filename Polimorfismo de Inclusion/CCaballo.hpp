#include "CTransporte.hpp"
class CCaballo:public CTransporte
{
    public:
    void acelera()
    {
        cout<<"Acelerando en cuatro patas"<<endl;
    }
    void frenar()
    {
        cout<<"Frenando las 4 patas"<<endl;
    }
};
