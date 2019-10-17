#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Biblioteca.h"
#define E 10
#define J 35
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
                    printf("\n1.Alta\n2.Listar\n3.Salir\n");
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
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                while(menuE != 3);
                break;
            case 2:
                do
                {
                    printf("\n1.Alta\n2.Listar\n3.Salir\n");
                    scanf("%d",&menuJ);
                    switch(menuJ)
                    {
                    case 1:
                        retorno = cargarJugadores(unJugador,unEquipo,codigoDeEquipo,J,E);
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
                        break;
                    default:
                        printf("\nOpcion no valida\n");
                        break;
                    }
                }
                while(menuJ != 3);
                break;
            case 3:
                do
                {
                    printf("\n1.Alta\n2.Listar\n3.Salir\n");
                    scanf("%d",&menuR);
                    switch(menuR)
                    {
                    case 1:
                        retorno = cargarReferi(unReferi,codigoDeEquipo,R);
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
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                while(menuR != 3);
                break;
            case 4:
                do
                {
                    printf("\n1.Alta\n2.Listar\n3.Salir\n");
                    scanf("%d",&menuP);
                    switch(menuP)
                    {
                    case 1:
                        retorno = cargarPartido(unPartido,P);
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
                        break;
                    case 3:
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                while(menuP != 3);
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



