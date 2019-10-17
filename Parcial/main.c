#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Biblioteca.h"
#define E 10
#define J 100
#define R 6
#define P 25
int main()
{
    sEquipos unEquipo[E];
    sJugadores unJugador[J];
    sReferi unReferi[R];
    sPartido unPartido[P];
    int opcion;
    int menuJ;
    int menuE;
    int menuR;
    int menuP;
    int codigoDeEquipo = 1;
    int retorno;
    int mostrar;
    int mod;
    int baja;
    if(inicializarE(unEquipo,E) == 0 && inicializarJ(unJugador,J) == 0 && inicializarR(unReferi,R) == 0 && inicializarP(unPartido,P) == 0)
    {
        do
        {
            printf("1.EQUIPOS");
            printf("\n2.JUGADORES\n");
            printf("3.REFERI\n");
            printf("4.PARTIDO\n");
            printf("5.Salir\n");
            printf("Elija una opcion\n");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                do
                {
                    printf("\n1.Alta\n2.Listar\n3.Modificar\n4.Baja\n5.Salir\n");
                    scanf("%d",&menuE);
                    switch(menuE)
                    {
                    case 1:
                        //retorno = cargarEquipos(unEquipo,codigoDeEquipo,E);
                        retorno = hardcodeE(unEquipo,E);
                        if(retorno == 1)
                        {
                            //codigoDeEquipo++;
                            printf("Cargado con exito\n");

                        }
                        else
                        {
                            printf("No hay espacio disponible\n");
                        }
                        break;
                    case 2:
                        mostrar = ordenarE(unEquipo,E);
                        if(mostrar == 0)
                        {
                            mostrarTodosLosEquipos(unEquipo,E);
                        }
                        else
                        {
                            printf("No hay datos cargados\n");
                        }
                        break;
                    case 3:
                        mod  = modE(unEquipo,E);
                        switch(mod)
                        {
                        case 0:
                            printf("\nDatos modificados\n");
                            mostrarTodosLosEquipos(unEquipo,E);
                            break;
                        case 1:
                            printf("\nAccion terminada\n");
                            mostrarTodosLosEquipos(unEquipo,E);
                            break;
                        case -1:
                            printf("\nDatos no encontardos\n");
                            break;
                        }
                        break;
                    case 4:
                        baja  = removeE(unEquipo,E);
                        switch(baja)
                        {
                        case 0:
                            printf("\nDatos modificados\n");
                            mostrarTodosLosEquipos(unEquipo,E);
                            break;
                        case 1:
                            printf("\nAccion terminada\n");
                            mostrarTodosLosEquipos(unEquipo,E);
                            break;
                        case -1:
                            printf("\nDatos no encontardos\n");
                        }
                        break;
                    case 5:
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                while(menuE != 5);
                break;
            case 2:
                do
                {
                    printf("\n1.Alta\n2.Listar\n3.Modificar\n4.Baja\n");
                    scanf("%d",&menuJ);
                    switch(menuJ)
                    {
                    case 1:
                        //retorno = cargarJugadores(unJugador,unEquipo,codigoDeEquipo,J,E);
                        retorno = hardcodeJ(unJugador,J);
                        if(retorno == 1)
                        {

                            printf("Cargado con exito\n");
                        }
                        else
                        {
                            printf("No hay espacio disponible\n");
                        }
                        break;
                    case 2:
                        mostrar = ordenarJ(unJugador,J);
                        if(mostrar == 0)
                        {
                            mostrarTodosLosjugadores(unJugador,J);
                        }
                        else
                        {
                            printf("No hay datos cargados\n");
                        }
                        break;
                    case 3:
                        mod  = modJ(unJugador,J);
                        switch(mod)
                        {
                        case 0:
                            printf("\nDatos modificados\n");
                            mostrarTodosLosjugadores(unJugador,J);
                            break;
                        case 1:
                            printf("\nAccion terminada\n");
                            mostrarTodosLosjugadores(unJugador,J);
                            break;
                        case -1:
                            printf("\nDatos no encontardos\n");
                            break;
                        }
                        break;
                    case 4:
                        baja  = removeJ(unJugador,J);
                        switch(baja)
                        {
                        case 0:
                            printf("\nDatos Eliminados\n");
                            mostrarTodosLosjugadores(unJugador,J);
                            break;
                        case 1:
                            printf("\nAccion terminada\n");
                            mostrarTodosLosjugadores(unJugador,J);
                            break;
                        case -1:
                            printf("\nDatos no encontardos\n");
                            break;
                        }
                        break;
                    case 5:
                        break;
                    default:
                        printf("\nOpcion no valida\n");
                        break;
                    }
                }
                while(menuJ != 5);
                break;
            case 3:
                do
                {
                    printf("\n1.Alta\n2.Listar\n3.Listar arbitros en mas de 4 partidos\n4.Salir\n");
                    scanf("%d",&menuR);
                    switch(menuR)
                    {
                    case 1:
                        retorno = cargarReferi(unReferi,codigoDeEquipo,R);
                        //retorno = hardcodeR(unReferi,R);
                        if(retorno == 1)
                        {
                            printf("Cargado con exito\n");
                        }
                        else
                        {
                            printf("No hay espacio disponible\n");
                        }
                        break;
                    case 2:
                        mostrar = ordenarR(unReferi,R);
                        if(mostrar == 0)
                        {
                            mostrarTodosLosReferis(unReferi,R);
                        }
                        else
                        {
                            printf("No hay datos cargados\n");
                        }
                        break;
                    case 3:

                        break;
                    case 4:
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                while(menuR != 4);
                break;
            case 4:
                do
                {
                    printf("\n1.Alta\n2.Listar\n3.Listar por arbitro\n4.Salir\n");
                    scanf("%d",&menuP);
                    switch(menuP)
                    {
                    case 1:
                        //retorno = cargarPartido(unPartido,P);
                        retorno = hardcodeP(unPartido,P);
                        if(retorno == 1)
                        {
                            printf("Cargado con exito\n");

                        }
                        else
                        {
                            printf("No hay espacio disponible\n");
                        }
                        break;
                    case 2:
                        mostrar = ordenarP(unPartido,P);
                        if(mostrar == 0)
                        {
                            mostrarTodosLosPartidos(unPartido,P);
                        }
                        else
                        {
                            printf("No hay datos cargados\n");
                        }
                        break;
                    case 3:
                        mostrar = ordenarPR(unPartido,P);
                        if(mostrar == 0)
                        {
                            mostrarTodosLosPartidos(unPartido,P);
                        }
                        else
                        {
                            printf("No hay datos cargados\n");
                        }
                        break;
                    case 4:
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                while(menuP != 4);
                break;
            case 5:
                break;
            default:
                printf("Opcion no valida, ingrese nuevamnete\n");
                break;
            }
            system("pause");
            system("cls");

        }
        while(opcion!=5);

    }
    return 0;

}



