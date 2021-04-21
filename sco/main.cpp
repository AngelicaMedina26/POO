
#include <iostream>
using namespace std;
#include "CFraccion.hpp"

int main()
{

       CFraccion f1(1,3), f2(3,4), f3(1,5), f4,f5;


       // la suma de las fracciones 1/3 y 3/4
       cout << endl;
       cout << "Suma de las fracciones 1 y 2 " << endl<<endl;
       cout<<"Fraccion 1 --> ";
       f1.muestra();
       cout<<endl;
       cout<<"Fraccion 2 --> ";
       f2.muestra();
       cout<<endl;
       cout<<"Resultado --> ";
       f4 = f1 + f2;
       f4.muestra();
       cout<<endl<<endl;
       cout<<"*************************************************************************************"<<endl;

       // el valor en decimal de la fracción 1/3
       cout << endl;
       cout << "El valor decimal de la fraccion 1 es: "<< endl;
       cout << !f1;
       cout<<endl<<endl;
       cout<<"*************************************************************************************"<<endl;

       // la multiplicacion de las fracciones 1/3 y 3/4
       cout<<endl;
       cout<<"La multiplicacion de las fracciones 1 y 2 es: "<<endl<<endl;
       cout<<"Fraccion 1 --> ";
       f1.muestra();
       cout<<endl;
       cout<<"Fraccion 2 --> ";
       f2.muestra();
       cout<<endl;
       cout<<"Resultado --> ";
       f4 = f1 * f2;
       f4.muestra();
       cout<<endl<<endl;
       cout<<"*************************************************************************************"<<endl;

       // comprobar si 1/3 es > que 3/4
       cout<<endl;
       cout<<"Fraccion 1 --> ";
       f1.muestra();
       cout<<endl;
       cout<<"Fraccion 2 --> ";
       f2.muestra();
       cout<<endl;
       cout<<endl;
       if(f1>f2)
           cout<<"La ecuacion 1 es mayor que la ecuacion 2"<<endl;
       else
           cout<<"La ecuacion 1 NO es mayor que la ecuacion 2"<<endl;
       cout<<endl;
       cout<<"*************************************************************************************"<<endl;

       //incremento
       cout<< "Fraccion 3: "<<endl;
       f3.muestra();
       cout<<endl;
       f4 = ++f3;
       cout<<endl;
       cout<<"Incrementando 1/1"<<endl;
       f4.muestra();
       cout<<endl<<endl;;
       cout<<"*************************************************************************************"<<endl;

       //signo cambiado
       cout<< "Fraccion 3: "<<endl;
       f3.muestra();
       cout<<endl<<endl;;
       cout<<"Con signo cambiado: "<<endl;
       f4 = f3 - f3;
       f4.muestra();
       cout<<endl<<endl;
       cout<<"*************************************************************************************"<<endl;

       //resta
       cout<<"Resta de la fraccion 1 con la 3 de signo cambiado"<<endl<<endl;
       cout<<"Fraccion 1 --> ";
       f1.muestra();
       cout<<endl;
       cout<<"Fraccion 2 --> ";
       f4.muestra();
       cout<<endl;
       cout<<"Resultado --> ";
       f5 = f1 + f4;
       f5.muestra();
       cout<<endl<<endl;
       cout<<"*************************************************************************************"<<endl;

       //multiplicacion por un numero entero
       cout<<"Multiplica la fraccion 2 por un numero entero"<<endl<<endl;
       cout<<"Fraccion 2 --> ";
       f2.muestra();
       cout<<endl;
       cout<<"Fraccion 2 multiplicada por 2 --> ";
       f4 = f2 * 2;
       f4.muestra();
       cout<<endl;

       return 0;
   }


    

