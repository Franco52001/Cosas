#include "Biblioteca.h"

sEquipos pedirEquipo()
{
    sEquipos unEquipo;
    printf("Ingrese nombre de su equipo: ");
    fflush(stdin);
    gets(unEquipo.nombre);
    while(onlyLetters(unEquipo.nombre) == -1)
    {
        printf("Ingrese nombre del equipo nuevamente: ");
        fflush(stdin);
        gets(unEquipo.nombre);
    }
    printf("Ingrese nombre de su localidad: ");
    fflush(stdin);
    gets(unEquipo.localidad);
    while(onlyLetters(unEquipo.localidad) == -1)
    {
        printf("Ingrese nombre de la localidad nuevamente: ");
        fflush(stdin);
        gets(unEquipo.localidad);
    }

    return unEquipo;
}
void mostrarUnEquipo(sEquipos unEquipo)
{
    printf("%d--%s--%s\n",unEquipo.codigo,unEquipo.nombre,unEquipo.localidad);
}

void mostrarTodosLosEquipos(sEquipos lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {

        mostrarUnEquipo(lista[i]);
    }

}
sJugadores pedirJugadores()
{
    sJugadores unJugador;
    printf("Ingrese nombre del jugador: ");
    fflush(stdin);
    gets(unJugador.nombre);
    while(onlyLetters(unJugador.nombre) == -1)
    {
        printf("Ingrese nombre nuevamente: ");
        fflush(stdin);
        gets(unJugador.nombre);
    }
    printf("Ingrese apellido del jugador: ");
    fflush(stdin);
    gets(unJugador.apellido);
    while(onlyLetters(unJugador.apellido) == -1)
    {
        printf("Ingrese apellido nuevamente: ");
        fflush(stdin);
        gets(unJugador.apellido);
    }
    printf("Ingrese genero del referi(\n1.Masculino\n2.Femenino\n3.Salir): ");
    {
            case 1:
                unReferi.sexo = "Masculino"
                break;
            case 2:
                unReferi.sexo = "Femenino"
                break;
            case 3:
                break;
            default:
                printf("Opcion no valida\n");
            }
    printf("\nIngrese la fecha de nacimiento del jugador:");
    printf("\nIngrese dia: ");
    scanf("%d",&unJugador.fechaDeNac.dia);
    printf("\nIngrese mes: ");
    scanf("%d",&unJugador.fechaDeNac.mes);
    printf("\nIngrese anio: ");
    scanf("%d",&unJugador.fechaDeNac.anio);
    printf("\nIngrese el codigo del equipo del jugador: ");
    scanf("%d",&unJugador.codigoDeEquipos.codigo);
    return unJugador;
}
void mostrarUnJugador(sJugadores unJugador)
{
    printf("%s--%s--%s--%d/%d/%d--%d\n",unJugador.nombre,unJugador.apellido,unJugador.sexo,unJugador.fechaDeNac.dia,unJugador.fechaDeNac.mes,unJugador.fechaDeNac.anio,unJugador.codigoDeEquipos.codigo);
}

void mostrarTodosLosjugadores(sJugadores lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {

        mostrarUnJugador(lista[i]);
    }

}

sReferi pedirReferi()
{
    sReferi unReferi;
    printf("Ingrese nombre del referi: ");
    fflush(stdin);
    gets(unReferi.nombre);
    while(onlyLetters(unReferi.nombre) == -1)
    {
        printf("Ingrese nombre nuevamente: ");
        fflush(stdin);
        gets(unReferi.nombre);
    }
    printf("Ingrese apellido del referi: ");
    fflush(stdin);
    gets(unReferi.apellido);
    while(onlyLetters(unReferi.apellido) == -1)
    {
        printf("Ingrese apellido nuevamente: ");
        fflush(stdin);
        gets(unReferi.apellido);
    }
    printf("Ingrese genero del referi(\n1.Masculino\n2.Femenino\n3.Salir): ");
    {
            case 1:
                unReferi.sexo = "Masculino"
                break;
            case 2:
                unReferi.sexo = "Femenino"
                break;
            case 3:
                break;
            default:
                printf("Opcion no valida\n");
            }
    printf("\nIngrese la fecha de nacimiento del referi");
    printf("\nIngrese dia: ");
    scanf("%d",&unReferi.fechaDeNac.dia);
    printf("\nIngrese mes: ");
    scanf("%d",&unReferi.fechaDeNac.mes);
    printf("\nIngrese anio: ");
    scanf("%d",&unReferi.fechaDeNac.anio);
    printf("\nIngrese eMail del referi: ");
    fflush(stdin);
    gets(unReferi.eMail);
    return unReferi;
}
void mostrarUnReferi(sReferi unReferi)
{
    printf("%s--%s--%s--%s--%d/%d/%d\n",unReferi.nombre,unReferi.apellido,unReferi.sexo,unReferi.eMail,unReferi.fechaDeNac.dia,unReferi.fechaDeNac.mes,unReferi.fechaDeNac.anio);
}
void mostrarTodosLosReferis(sReferi lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {

        mostrarUnReferi(lista[i]);
    }

}

sPartido pedirPartido()
{
    sPartido unPartido;
    printf("Ingrese codigo del equipo visitante: ");
    scanf("%d", &unPartido.codigoDeEquipoV.codigo);
    printf("Ingrese codigo del equipo local: ");
    scanf("%d", &unPartido.codigoDeEquipoL.codigo);
    printf("Ingrese codigo del referi: ");
    scanf("%d", &unPartido.codigoDeReferi.codigo);

    return unPartido;
}
void mostrarUnPartido(sPartido unPartido)
{
    printf("%d--%d--%d\n",unPartido.codigoDeEquipoL.codigo,unPartido.codigoDeEquipoV.codigo,unPartido.codigoDeReferi.codigo);
}
void mostrarTodosLosPartidos(sPartido lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {

        mostrarUnPartido(lista[i]);
    }

}
void cargarEquipos(sEquipos lista[],int codigo)
{
    int i = 0;
    lista[i] = pedirEquipo();

}

void cargarJugadores(sJugadores lista[],int codigo)
{
    int i = 0;
    lista[i] = pedirJugadores();

}

void cargarReferi(sReferi lista[],int codigo)
{
    int i = 0;
    lista[i] = pedirReferi();

}

void cargarPartido(sPartido lista[])
{
    int i = 0;
    lista[i] = pedirPartido();

}

void toLowerCase(char string[])
{
    int length;
    int i;
    length = strlen(string);
    for(i = 1; i < length; i++)
    {
        if(string[i] > 64 && string[i] < 91)
        {
            string[i] = string[i] + 32;
        }
    }
}
void firstLetterToUpperCase(char letter[])
{
    if(letter[0] > 96 && letter[0] < 123)
    {
        letter[0] = letter[0] -32;
    }
}
int onlyLetters(char string[])
{
    int length;
    int i;
    int retorno = 1;
    length = strlen(string);
    for(i = 0; i < length; i++)
    {
        if((string[i] > 90 && string[i] < 97) || string[i] < 65 || string[i] > 123)
        {
            retorno = -1;
        }
    }
    return retorno;
}
