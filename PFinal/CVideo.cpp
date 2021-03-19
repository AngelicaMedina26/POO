
#include "CVideo.hpp"
CVideo::CVideo()
{
    
}
CVideo::CVideo(int _id, string _nombre, string _duracion, string _clasificacion, string _tipo, int _cal)
{
   id=_id;
   nombre=_nombre;
   duracion=_duracion;
   tipo=_tipo;
   clasificacion=_clasificacion;
    cal=_cal;
    
        
}

CVideo::~CVideo()
{
    
}
int CVideo::obtener_id()
{
    return id;
    
}

