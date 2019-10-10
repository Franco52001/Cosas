#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"
#define SIZE 5

int main()
{
    sEquipos unEquipo[SIZE];
    sJugadores unJugador[SIZE];
    sReferi unReferi[SIZE];
    sPartido unPartido[SIZE];
    int opcion;
    int menuJ;
    int menuE;
    int menuR;
    int menuP;
    int codigoDeEquipo = 0;
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
            do{
            printf("\n1.Alta\n2.Listar\n3.Salir\n");
            scanf("%d",&menuE);
            switch(menuE)
            {
            case 1:
                cargarEquipos(unEquipo,codigoDeEquipo);
                codigoDeEquipo++;
                break;
            case 2:
                mostrarTodosLosEquipos(unEquipo,SIZE);
                break;
            case 3:
                break;
            default:
                printf("Opcion no valida\n");
            }
            }while(menuE != 3);
            break;
        case 2:
            do{
            printf("\n1.Alta\n2.Listar\n3.Salir\n");
            scanf("%d",&menuJ);
            switch(menuJ)
            {
            case 1:
                cargarJugadores(unJugador,codigoDeEquipo);
                break;
            case 2:
                mostrarTodosLosjugadores(unJugador,SIZE);
                break;
            case 3:
                break;
            default:
                printf("\nOpcion no valida\n");
            }
            }while(menuJ != 3);
            break;
        case 3:
            do{
            printf("\n1.Alta\n2.Listar\n3.Salir\n");
            scanf("%d",&menuR);
            switch(menuR)
            {
            case 1:
                cargarReferi(unReferi,codigoDeEquipo);
                break;
            case 2:
                mostrarTodosLosReferis(unReferi,SIZE);
                break;
            case 3:
                break;
            default:
                printf("Opcion no valida\n");
            }
            }while(menuR != 3);
            break;
        case 4:
            do{
            printf("\n1.Alta\n2.Listar\n3.Salir\n");
            scanf("%d",&menuP);
            switch(menuP)
            {
            case 1:
                cargarPartido(unPartido);
                break;
            case 2:
                mostrarTodosLosPartidos(unPartido,SIZE);
                break;
            case 3:
                break;
            default:
                printf("Opcion no valida\n");
            }
            }while(menuP != 3);
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
    return 0;

}



