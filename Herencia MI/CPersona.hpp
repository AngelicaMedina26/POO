#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
using namespace std;

class CPersona
{
public:
    
    CPersona();
    ~CPersona();
    string sexo;
    int edad;
    string nombre;
    void despierta();
    void duerme();
    
};
