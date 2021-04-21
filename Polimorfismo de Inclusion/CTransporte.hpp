
#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
using namespace std;

class CTransporte
{
public:
    virtual void acelera()
    {
        cout<<"Acelerando"<<endl;
    }
    virtual void frenar()
    {
        cout<<"Frenando"<<endl;
    }
    
   
};
