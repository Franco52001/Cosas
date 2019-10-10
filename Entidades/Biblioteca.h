#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} sFecha;

typedef struct
{
    int codigo;
    char nombre[51];
    char localidad[33];
} sEquipos;


typedef struct
{
    int codigo;
    char apellido[50];
    char nombre[50];
    sEquipos codigoDeEquipos;
    char sexo;
    sFecha fechaDeNac;
    int estado;
} sJugadores;

typedef struct
{
    int codigo;
    char apellido[50];
    char nombre[50];
    char eMail[31];
    char sexo;
    sFecha fechaDeNac;
    int estado;
} sReferi;

typedef struct
{
    int codigo;
    sEquipos codigoDeEquipoV;
    sEquipos codigoDeEquipoL;
    sReferi codigoDeReferi;
    sFecha fecha;
} sPartido;


sEquipos pedirEquipo();
sJugadores pedirJugadores();
sReferi pedirReferi();
sPartido pedirPartido();
void cargarEquipos(sEquipos lista[],int);
void mostrarUnEquipo(sEquipos unEquipo);
void mostrarTodosLosEquipos(sEquipos lista[],int cant);
void cargarJugadores(sJugadores lista[],int);
void mostrarUnJugador(sJugadores unJugador);
void mostrarTodosLosjugadores(sJugadores lista[],int cant);
void cargarReferi(sReferi lista[],int);
void mostrarUnReferi(sReferi unReferi);
void mostrarTodosLosReferis(sReferi lista[],int cant);
void cargarPartido(sPartido lista[]);
void mostrarUnPartido(sPartido unPartido);
void mostrarTodosLosPartidos(sPartido lista[],int cant);
void toLowerCase(char[]);
void firstLetterToUpperCase(char[]);
int onlyLetters(char[]);


