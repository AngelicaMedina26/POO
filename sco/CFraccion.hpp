#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
using namespace std;
class CFraccion
{
public:
    friend double operator !(CFraccion f);
    public:
        // Constructores
        CFraccion();
        CFraccion(int n, int d);
        // metodos de acceso
        int getNum();
        int getDen();
        // metodos de modificacion
        void setNum(int n);
        void setDen(int d);
        // metodos
        CFraccion operator + (CFraccion f);
        CFraccion operator*(CFraccion d);
        bool operator>(CFraccion e);
        CFraccion operator++();
        CFraccion operator - (CFraccion h);
        CFraccion operator - (int z);
        CFraccion operator*(int k);
        void muestra();

    private:
        int num, den;
    };

    CFraccion::CFraccion()
    {
        num = 1;
        den = 2;
    }

    CFraccion::CFraccion(int n, int d)
    {
        num = n;
        den = d;
    }

    int CFraccion::getNum()
    {
        return num;
    }

    int CFraccion::getDen()
    {
        return den;
    }

    void CFraccion::setNum(int n)
    {
        num = n;
    }

    void CFraccion::setDen(int d)
    {
        den = d;
    }

    void CFraccion::muestra()
    {
        cout << num << "/" << den;
    }

    double operator !(CFraccion f)
    {
        return  (double)f.num/f.den;
    }

    CFraccion CFraccion:: operator + (CFraccion f)
    {   CFraccion res;
        res.num = this->num * f.den + this->den * f.num;
        res.den = this->den * f.den;
        return res;
    }

    CFraccion CFraccion::operator*(CFraccion d)
    { CFraccion res2;
        res2.num = this->num * d.num ;
        res2.den = this->den * d.den ;

        return res2;
    }

    bool CFraccion::operator>(CFraccion e)
    {

        if(this->num/e.num > this->den/e.den)
            return true;
        else
            return false;
    }

    CFraccion CFraccion::operator++()
    {CFraccion res3;

        res3.num = this->num + this->den;
        res3.den = this->den;

        return res3;
    }

    CFraccion CFraccion:: operator - (CFraccion h)
    {CFraccion res4;

        res4.num = this->num - (2*this->num);
        res4.den = this->den;

        CFraccion nuevo(res4.num,res4.den);
        return nuevo;
    }

    CFraccion CFraccion::operator - (int z)
    {
        CFraccion res9;
        res9.num = this->num * den + this->den * num;
        res9.den = this->den * den;
        return res9;
    }


    CFraccion CFraccion::operator*(int k)
    {CFraccion res6;

        res6.num = this->num * k;
        res6.den = this->den;

        return res6;
    }

