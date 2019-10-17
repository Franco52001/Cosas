#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TRUE 1
#define FALSE 0

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
    int estado;
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
    int estado;
} sPartido;


int inicializarE(sEquipos[],int);
int inicializarJ(sJugadores[],int);
int inicializarR(sReferi[],int);
int inicializarP(sPartido[],int);
int hardcodeE(sEquipos[],int);
int hardcodeJ(sJugadores[],int);
int hardcodeR(sReferi[],int);
int hardcodeP(sPartido[],int);
sEquipos pedirEquipo();
sJugadores pedirJugadores();
sReferi pedirReferi();
sPartido pedirPartido();
int cargarEquipos(sEquipos lista[],int,int);
void mostrarUnEquipo(sEquipos unEquipo);
int mostrarTodosLosEquipos(sEquipos lista[],int cant);
int cargarJugadores(sJugadores lista[],sEquipos[],int,int,int);
void mostrarUnJugador(sJugadores unJugador);
int mostrarTodosLosjugadores(sJugadores lista[],int cant);
int cargarReferi(sReferi lista[],int,int);
void mostrarUnReferi(sReferi unReferi);
int mostrarTodosLosReferis(sReferi lista[],int cant);
int cargarPartido(sPartido lista[],int);
void mostrarUnPartido(sPartido unPartido);
int mostrarTodosLosPartidos(sPartido lista[],int cant);
int ordenarE(sEquipos[],int);
int ordenarJ(sJugadores[],int);
int ordenarR(sReferi[],int);
int ordenarP(sPartido[],int);
int sortByTeam(sJugadores[],int length);
int findCode(sJugadores,sEquipos[],int length);
int modE(sEquipos[],int length);
int removeE(sEquipos[],int length);
int removeJ(sJugadores[],int length);
void toLowerCase(char[]);
void firstLetterToUpperCase(char[]);
int onlyLetters(char[]);
int genderVal(char);
int dayVal(int);
int monthVal(int);
int yearVal(int);
