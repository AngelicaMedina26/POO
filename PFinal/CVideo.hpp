#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
#include "COperaciones.hpp"
using namespace std;

class CVideo: public COperaciones
{
private:
    int id;
public:
    CVideo();
    CVideo(int _id, string _nombre, string _duracion, string _clasificacion, string _tipo, int _cal);
    ~CVideo();
    string nombre;
    string duracion;
    string genero;
    string clasificacion;
    string tipo;
    int obtener_id();
    int cal;
    int y;
    int neww;
    void play()
    {
        cout<<"Play video"<<endl;
    }
    void stop()
    {
        cout<<"Stop video"<<endl;
    }
    void leer()
    {
        cout<<"Id: "<<obtener_id()<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Duración: "<<duracion<<endl;
        cout<<"Genero: "<<clasificacion<<endl;
        cout<<"Tipo: "<<tipo<<endl;
        cout<<"Califiación: "<<cal<<" estrellas "<<endl;
    }
    virtual void inicia()
    {
        cout<<"Iniciando"<<endl;
    }
    void calificacion()
    {
        cout<<"¿Cuál es su calififcación para este video? 5 siendo la mejor calificación y 1 la peor: "<<endl;
        cin>>y;
        neww=(cal+y)/(2);
        cal=neww;
        cout<<"La nueva calificación de este titulo es: "<<neww<<" estrellas"<<endl;
    }
  
};

