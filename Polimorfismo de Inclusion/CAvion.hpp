#include "CTransporte.hpp"
class CAvion:public CTransporte
{
    public:
    void acelera()
    {
        cout<<"Acelerando en el aire"<<endl;
    }
    void frenar()
    {
        cout<<"Frenando hacia el suelo"<<endl;
    }
    
};
