#include "CVideo.hpp"
class CPelicula:public CVideo
{
    public:
    CPelicula();
    ~CPelicula();
    void inicia()
    {
        cout<<"Iniciando el reconocimiento de la pelicula"<<endl;
    }
    void play()
    {
        cout<<"Play video (pelicula)"<<endl;
    }
    void stop()
    {
        cout<<"Stop video (pelicula)"<<endl;
    }
    
    
};
