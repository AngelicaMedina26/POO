#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#include "CPelicula.hpp"
#include "CCapitulo.hpp"

#include <iostream>

int main()


{
    
    int opcion1, opcion2, opcion3, opcion4, a, b, c, f,h;
    h=0;
    
    CVideo* videos[20];
    videos[0]=new CVideo(2001, " Diario de una pasion ", " 1 hora 50 minutos ", " Drama ", " Pelicula ", 5);
    videos[1]=new CVideo(2002, " Rapidos y furiosos ", " 2 horas 10 minutos ", " Accion ", " Pelicula ", 5);
    videos[2]=new CVideo(2003, " El código Da Vinci ", " 1 hora 30 minutos ", " Misterio ", " Pelicula ", 4);
    videos[3]=new CVideo(2004, " Vampire diaries ", " 13 horas ", " Drama ", " Serie ", 3);
    videos[4]=new CVideo(2005, " Juego de tronos ", " 5 horas ", " Accion ", " Serie ", 4);
    videos[5]=new CVideo(2006, " How to get away with murder ", " 3 horas ", " Misterio ", " Serie ", 4);
    videos[6]=new CVideo(2007, "", "", "", "", 0);
    
    CCapitulo* capitulosVD[30];
    capitulosVD[0]=new CCapitulo("Vampire Diaries", 1, "Capitulo 1", 5);
    capitulosVD[1]=new CCapitulo("Vampire Diaries",1, "Capitulo 2", 5);
    capitulosVD[2]=new CCapitulo("Vampire Diaries",1, "Capitulo 3", 5);
    capitulosVD[3]=new CCapitulo("Vampire Diaries",1, "Capitulo 4", 5);
    capitulosVD[4]=new CCapitulo("Vampire Diaries",2, "Capitulo 1", 5);
    capitulosVD[5]=new CCapitulo("Vampire Diaries",3, "Capitulo 2", 5);
    capitulosVD[6]=new CCapitulo("Vampire Diaries",4, "Capitulo 3", 5);
    capitulosVD[7]=new CCapitulo("Vampire Diaries",5, "Capitulo 4", 5);
    
    CCapitulo* capitulosJT[30];
    capitulosJT[0]=new CCapitulo("Juego de tronos", 1, "Capitulo 1", 4);
    capitulosJT[1]=new CCapitulo("Juego de tronos",1, "Capitulo 2", 5);
    capitulosJT[2]=new CCapitulo("Juego de tronos",1, "Capitulo 3", 4);
    
    CCapitulo* capitulosHM[30];
    capitulosHM[0]=new CCapitulo("How to get away with murder",1, "Capitulo 1", 3);
    capitulosHM[1]=new CCapitulo("How to get away with murder",1, "Capitulo 2", 5);
    capitulosHM[2]=new CCapitulo("How to get away with murder",1, "Capitulo 3", 3);
    capitulosHM[3]=new CCapitulo("How to get away with murder",1, "Capitulo 4", 5);
    
    while(h==0)
    {
    cout<<"Bienvenido a este nuevo servicio de streaming porfavor elija el número de la opción que desea realizar "<<endl;
    cout<<"Cargar archivo de datos----------------------------------------------------------1"<<endl;
    cout<<"Mostrar los videos en general con una cierta calificación o de un cierto género--2"<<endl;
    cout<<"Mostrar los episodios de una determinada serie con una calificacion determinada--3"<<endl;
    cout<<"Mostrar las películas con cierta calificacion------------------------------------4"<<endl;
    cout<<"Calificar un video---------------------------------------------------------------5"<<endl;
    cout<<"Salir----------------------------------------------------------------------------6"<<endl;
    cout<<"Ingrese el número: "<<endl;
    cin>>opcion1;
        try {
        if (opcion1<0)
            throw "Favor de no introducir números negativos";
    if (opcion1==1)
    {
        cout<<"Cargar archivo de datos "<<endl;
        cout<<"Ingresa el nombre del nuevo video: "<<endl;
        cin.clear();
        cin.ignore();
        getline(cin, videos[6]->nombre);
        cout<<"Ingresa la duracion del nuevo video (x horas y minutos): "<<endl;
        getline(cin, videos[6]->duracion);
        cout<<"Ingresa el genero del nuevo video (Drama, Acción, o Misterio: "<<endl;
        getline(cin, videos[6]->clasificacion);
        cout<<"Ingresa el tipo del nuevo video (Serie o Pelicula): "<<endl;
        getline(cin, videos[6]->tipo);
        videos[6]->leer();
        
    }
    else if (opcion1==2)
    {
        
        cout<<"Mostrar los videos en general con una cierta calificación o de un cierto género "<<endl;
        cout<<"Si desea ver los videos por genero presione 1"<<endl;
        cout<<"Si desea ver los videos por calificación presione 2"<<endl;
        cin>>opcion2;
        if (opcion2==1)
        {
            cout<<"Si desea ver los videos de DRAMA presione 1 "<<endl;
            cout<<"Si desea ver los videos de ACCIÓN presione 2 "<<endl;
            cout<<"Si desea ver los videos de MISTERIO presione 3"<<endl;
            cin>>opcion3;
            if (opcion3==1)
            {
                cout<<"-------------Videos de drama--------------"<<endl;
                videos[0]->leer();
                cout<<"------------------------------------------"<<endl;
                videos[3]->leer();
                cout<<"Esta serie cuanta con los siguientes capitulos y temporadas: "<<endl;
                capitulosVD[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[2]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[3]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[4]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[5]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[6]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[7]->capitulos();
                
                
                
            }
            else if (opcion3==2)
            {
                cout<<"-------------Videos de acción--------------"<<endl;
                videos[1]->leer();
                cout<<"------------------------------------------"<<endl;
                videos[4]->leer();
                cout<<"Esta serie cuanta con los siguientes capitulos y temporadas: "<<endl;
                capitulosJT[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosJT[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosJT[2]->capitulos();
            }
            else if (opcion3==3)
            {
                cout<<"-------------Videos de misterio--------------"<<endl;
                videos[2]->leer();
                cout<<"------------------------------------------"<<endl;
                videos[5]->leer();
                capitulosHM[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[2]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[3]->capitulos();
            }
            else
            {
              cout<<"Esta opción no es valida, porfavor solo use las opciones mencionadas"<<endl;
            }
            
        }
        else if(opcion2==2)
        {
            cout<<"Por su comodidad solo contamos con videos de 3 estrellas en adelante"<<endl;
            cout<<"Si desea ver los videos de 3 estrellas presione 3 "<<endl;
            cout<<"Si desea ver los videos de 4 estrellas presione 4 "<<endl;
            cout<<"Si desea ver los videos de 5 estrellas presione 5"<<endl;
            cin>>opcion3;
            if (opcion3==3)
            {
                cout<<"-------------3 estrellas--------------"<<endl;
                
                cout<<"------------------------------------------"<<endl;
                capitulosHM[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[2]->capitulos();
            }
            else if (opcion3==4)
            {
                cout<<"-------------4 estrellas--------------"<<endl;
                videos[2]->leer();
                cout<<"------------------------------------------"<<endl;
                capitulosJT[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosJT[2]->capitulos();
                
                
            }
            else if (opcion3==5)
            {
                cout<<"-------------5 estrellas--------------"<<endl;
                videos[0]->leer();
                cout<<"------------------------------------------"<<endl;
                videos[1]->leer();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[2]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[3]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[4]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[5]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[6]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[7]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosJT[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[3]->capitulos();
            }
            else
            {
              cout<<"Esta opción no es valida, porfavor solo use las opciones mencionadas"<<endl;
            }
            
        }
        else
        {
            cout<<"Esta opción no es valida, porfavor solo use las opciones mencionadas"<<endl;
        }
    
    }
    else if (opcion1==3)
    {
        cout<<"Mostrar los episodios de una determinada serie con una calificacion determinada "<<endl;
        cout<<"Si deseas escoger una calificacion de la serie VAMPIRE DIARIES presiona 1"<<endl;
        cout<<"Si deseas escoger una calificacion de la serie JUEGO DE TRONOS presiona 2"<<endl;
        cout<<"Si deseas escoger una calificacion de la serie HOW TO GET AWAY WITH MURDER presiona 3"<<endl;
        cin>>a;
        if (a==1)
        {
            cout<<"------------------------VAMPRE DIARIES-------------------------"<<endl;
            cout<<"¿De cuantas estrellas busca que sea su capitulo? (Solo contamos con titulos de 5 a 3 estrellas): "<<endl;
            cin>>b;
            if (b==5)
            {
               capitulosVD[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[2]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[3]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[4]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[5]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[6]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosVD[7]->capitulos();
            }
            else
            {
                cout<<"Esta serie no cuenta con capitulos de esa calificación"<<endl;
            }
        }
        else if (a==2)
        {
            cout<<"------------------------JUEGO DE TRONOS-------------------------"<<endl;
            cout<<"¿De cuantas estrellas busca que sea su capitulo? (Solo contamos con titulos de 5 a 3 estrellas): "<<endl;
            cin>>b;
            if (b==5)
            {
                capitulosJT[1]->capitulos();
            }
            else if (b==4)
            {
                capitulosJT[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosJT[2]->capitulos();
            }
            else
            {
                cout<<"Esta serie no cuenta con capitulos de esa calificación"<<endl;
            }
            
        }
        else if (a==3)
        {
            cout<<"-----------------------HOW TO GET AWAY WITH MURDER-------------------------"<<endl;
            cout<<"¿De cuantas estrellas busca que sea su capitulo? (Solo contamos con titulos de 5 a 3 estrellas): "<<endl;
            cin>>b;
            if (b==5)
            {
                capitulosHM[1]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[3]->capitulos();
            }
            else if (b==3)
            {
                capitulosHM[0]->capitulos();
                cout<<"------------------------------------------"<<endl;
                capitulosHM[2]->capitulos();
            }
            else
            {
                cout<<"Esta serie no cuenta con capitulos de esa calificación"<<endl;
            }
        }
        else
        {
          cout<<"Esta opción no es valida, porfavor solo use las opciones mencionadas"<<endl;
        }
        
    }
    else if (opcion1==4)
    {
        cout<<"Mostrar las películas con cierta calificacion "<<endl;
        cout<<"¿De cuantas estrellas busca que sea su pelicula? (Solo contamos con titulos de 5 a 3 estrellas): "<<endl;
        cin>>c;
        if (c==3)
        {
            cout<<"No contamos peliculas con esta calificación"<<endl;
        }
        else if (c==4)
        {
            videos[2]->leer();
        }
        else if (c==5)
        {
            videos[0]->leer();
            cout<<"------------------------------------------"<<endl;
            videos[1]->leer();
        }
        else
        {
          cout<<"Esta opción no es valida, porfavor solo use las opciones mencionadas"<<endl;
        }
    }
    else if (opcion1==5)
    {
        cout<<"Calificar un video "<<endl;
        cout<<"¿Qué video desea calificar?"<<endl;
        cout<<"Para calificar DIARIO DE UNA PASION       presione 1"<<endl;
        cout<<"Para calificar EL CODIFO DA VINCI         presione 2"<<endl;
        cout<<"Para calificar RAPIDOS Y FURIOSOS         presione 3"<<endl;
        cout<<"Para calificar VAMPIRE DIARIES            presione 4"<<endl;
        cout<<"Para calificar JUEGO DE TRONOS            presione 5"<<endl;
        cout<<"Para calificar HOW TO GET AWAY WITH MUDER presione 6"<<endl;
        cin>>opcion4;
        if (opcion4==1)
        {
            cout<<"------------DIARIO DE UNA PASION---------"<<endl;
            videos[0]->calificacion();
        }
        else if (opcion4==2)
        {
           cout<<"------------EL CODIGO DA VINCI---------"<<endl;
           videos[1]->calificacion();
        }
        else if (opcion4==3)
        {
            cout<<"------------RAPIDOS Y FURIOSOS---------"<<endl;
            videos[2]->calificacion();
        }
        else if (opcion4==4)
        {
           cout<<"------------VAMPIRE DIARIES---------"<<endl;
            cout<<"Esta serie cuenta con 2 temporadas de 4 capitulos cada una. ¿Cuál capitulo desea calificar? Seleccione un número del 1 al 8"<<endl;
            cin>>f;
            if (f==1)
            {
                capitulosVD[0]->calificacion();
            }
           else if (f==2)
           {
              capitulosVD[1]->calificacion();
           }
            else if (f==3)
            {
               capitulosVD[2]->calificacion();
            }
            else if (f==4)
            {
                capitulosVD[3]->calificacion();
            }
            else if (f==5)
            {
               capitulosVD[4]->calificacion();
            }
            else if (f==6)
            {
                capitulosVD[5]->calificacion();
            }
            else if (f==7)
            {
                capitulosVD[6]->calificacion();
            }
            else if (f==8)
            {
                capitulosVD[7]->calificacion();
            }
            else
            {
                cout<<"No contamos con ese capitulo"<<endl;
            }
        }
        else if (opcion4==5)
        {
            cout<<"------------JUEGO DE TRONOS---------"<<endl;
            cout<<"Esta serie cuenta con una temporada de 3 capitulos. ¿Cuál desea calificar? Seleccione un número del 1 al 3: "<<endl;
            cin>>f;
            if (f==1)
             {
                 capitulosJT[0]->calificacion();
             }
            else if (f==2)
            {
               capitulosJT[1]->calificacion();
            }
             else if (f==3)
             {
                capitulosJT[2]->calificacion();
             }
            else
            {
                cout<<"No contamos con ese capitulo"<<endl;
            }
        }
        else if (opcion4==6)
        {
            cout<<"------------HOW TO GET AWAY WITH MURDER---------"<<endl;
            cout<<"Esta serie cuenta con 1 temporada de 4 capitulos. ¿Cuál desea calificar? Seleccione un número del 1 al 4: "<<endl;
            cin>>f;
             if (f==1)
            {
                capitulosHM[0]->calificacion();
            }
            else if (f==2)
            {
                capitulosHM[1]->calificacion();
            }
            else if (f==3)
            {
                capitulosHM[2]->calificacion();
            }
            else if (f==4)
            {
                capitulosHM[3]->calificacion();
            }
            else
            {
                cout<<"No contamos con ese capitulo"<<endl;
            }
        }
        else
        {
            cout<<"Esta opción no es valida, porfavor solo use las opciones mencionadas"<<endl;
        }
        
    }
    else if (opcion1==6)
    {
        cout<<"Gracias por su visita, usted ha salido"<<endl;
        break;
    }
    else
    {
        cout<<"El número que ingreso no es valido, porfavor solo use los números desplegados en el menu principal"<<endl;
    }
  
}
        catch(...)
        {
            cout<<"Error: No introducir números negativos. Porfavor intentelo de nuevo con un número positivo"<<endl;
        }
}
}
    

