
#include "CTransporte.hpp"
class CAuto:public CTransporte
{
    public:
    void acelera()
    {
        cout<<"Acelerando en cuatro ruedas"<<endl;
    }
    void frenar()
    {
        cout<<"Frenando las 4 ruedas"<<endl;
    }
    
    
};
