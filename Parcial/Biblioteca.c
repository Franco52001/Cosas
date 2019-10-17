#include "Biblioteca.h"

int inicializarE(sEquipos listaE[],int cant)
{
    int i;
    int retorno = -1;
    if(listaE != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            listaE[i].estado = FALSE;
        }
        retorno = 0;
    }
    return retorno;
}

int inicializarJ(sJugadores listaJ[],int cant)
{
    int i;
    int retorno = -1;
    if(listaJ != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            listaJ[i].estado = FALSE;
        }
        retorno = 0;
    }
    return retorno;
}

int inicializarR(sReferi listaR[],int cant)
{
    int i;
    int retorno = -1;
    if(listaR != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {

            listaR[i].estado = FALSE;
        }
        retorno = 0;
    }
    return retorno;
}

int inicializarP(sPartido listaP[],int cant)
{
    int i;
    int retorno = -1;
    if(listaP != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            listaP[i].estado = FALSE;
        }
        retorno = 0;
    }
    return retorno;
}
int searchFreeE(sEquipos list[],int length)
{
    int i;
    int index = -1;
    for(i = 0; i < length; i++)
    {
        if(list[i].estado == FALSE)
        {
            index = i;
            break;
        }
    }
    return index;
}
int searchFreeJ(sJugadores list[],int length)
{
    int i;
    int index = -1;
    for(i = 0; i < length; i++)
    {
        if(list[i].estado == FALSE)
        {
            index = i;
            break;
        }
    }
    return index;
}
int searchFreeR(sReferi list[],int length)
{
    int i;
    int index = -1;
    for(i = 0; i < length; i++)
    {
        if(list[i].estado == FALSE)
        {
            index = i;
            break;
        }
    }
    return index;
}
int searchFreeP(sPartido list[],int length)
{
    int i;
    int index = -1;
    for(i = 0; i < length; i++)
    {
        if(list[i].estado == FALSE)
        {
            index = i;
            break;
        }
    }
    return index;
}

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
    unEquipo.estado = TRUE;
    return unEquipo;
}
void mostrarUnEquipo(sEquipos unEquipo)
{
    printf("%d--%s--%s\n",unEquipo.codigo,unEquipo.nombre,unEquipo.localidad);
}

int mostrarTodosLosEquipos(sEquipos lista[],int cant)
{
    int i;
    int retorno = -1;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estado == TRUE)
        {
            mostrarUnEquipo(lista[i]);
            retorno = 1;
        }
    }
    return retorno;
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
    printf("Ingrese genero del jugador(F/M): ");
    fflush(stdin);
    unJugador.sexo = getchar();
    while(genderVal(unJugador.sexo) == -1)
    {
        printf("Ingrese genero nuevamente: ");
        fflush(stdin);
        unJugador.sexo = getchar();
    }
    printf("\nIngrese la fecha de nacimiento del jugador:");
    printf("\nIngrese dia: ");
    scanf("%d",&unJugador.fechaDeNac.dia);
    while(dayVal(unJugador.fechaDeNac.dia) == -1)
    {
        printf("\n Dia no valido,Ingrese nuevamente: ");
        scanf("%d",&unJugador.fechaDeNac.dia);
    }
    printf("\nIngrese mes: ");
    scanf("%d",&unJugador.fechaDeNac.mes);
    while(monthVal(unJugador.fechaDeNac.mes) == -1)
    {
        printf("\n Mes no valido,Ingrese nuevamente: ");
        scanf("%d",&unJugador.fechaDeNac.mes);
    }
    printf("\nIngrese anio: ");
    scanf("%d",&unJugador.fechaDeNac.anio);
    while(yearVal(unJugador.fechaDeNac.anio) == -1)
    {
        printf("\n Anio no valido,Ingrese nuevamente: ");
        scanf("%d",&unJugador.fechaDeNac.anio);
    }
    unJugador.estado = TRUE;
    return unJugador;
}
void mostrarUnJugador(sJugadores unJugador)
{
    printf("%s--%s--%c--%d/%d/%d--%d\n",unJugador.nombre,unJugador.apellido,unJugador.sexo,unJugador.fechaDeNac.dia,unJugador.fechaDeNac.mes,unJugador.fechaDeNac.anio,unJugador.codigo);
}

int mostrarTodosLosjugadores(sJugadores lista[],int cant)
{
    int i;
    int retorno = -1;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estado == TRUE)
        {
            mostrarUnJugador(lista[i]);
            retorno = 1;
        }
    }
    return retorno;
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
    printf("Ingrese genero del referi(F/M): ");
    fflush(stdin);
    unReferi.sexo = getchar();
    while(genderVal(unReferi.sexo) == -1)
    {
        printf("Ingrese genero nuevamente: ");
        fflush(stdin);
        unReferi.sexo = getchar();
    }
    printf("\nIngrese la fecha de nacimiento del referi");
    printf("\nIngrese dia: ");
    scanf("%d",&unReferi.fechaDeNac.dia);
    while(dayVal(unReferi.fechaDeNac.dia) == -1)
    {
        printf("\n Dia no valido,Ingrese nuevamente: ");
        scanf("%d",&unReferi.fechaDeNac.dia);
    }
    printf("\nIngrese mes: ");
    scanf("%d",&unReferi.fechaDeNac.mes);
    while(monthVal(unReferi.fechaDeNac.dia) == -1)
    {
        printf("\n Dia no valido,Ingrese nuevamente: ");
        scanf("%d",&unReferi.fechaDeNac.dia);
    }
    printf("\nIngrese anio: ");
    scanf("%d",&unReferi.fechaDeNac.anio);
    while(yearVal(unReferi.fechaDeNac.anio) == -1)
    {
        printf("\n Dia no valido,Ingrese nuevamente: ");
        scanf("%d",&unReferi.fechaDeNac.anio);
    }
    printf("\nIngrese eMail del referi: ");
    fflush(stdin);
    gets(unReferi.eMail);
    unReferi.estado = TRUE;
    return unReferi;
}
void mostrarUnReferi(sReferi unReferi)
{
    printf("%s--%s--%c--%s--%d/%d/%d\n",unReferi.nombre,unReferi.apellido,unReferi.sexo,unReferi.eMail,unReferi.fechaDeNac.dia,unReferi.fechaDeNac.mes,unReferi.fechaDeNac.anio);
}
int mostrarTodosLosReferis(sReferi lista[],int cant)
{
    int i;
    int retorno = -1;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estado == TRUE)
        {
            mostrarUnReferi(lista[i]);
            retorno = 1;
        }
    }
    return retorno;
}

sPartido pedirPartido()
{
    sPartido unPartido;
    printf("Ingrese codigo del equipo visitante: ");
    scanf("%d", &unPartido.codigoDeEquipoV);
    printf("Ingrese codigo del equipo local: ");
    scanf("%d", &unPartido.codigoDeEquipoL);
    printf("Ingrese codigo del referi: ");
    scanf("%d", &unPartido.codigoDeReferi);
    unPartido.estado = TRUE;
    return unPartido;
}
void mostrarUnPartido(sPartido unPartido)
{
    printf("%d--%d--%d\n",unPartido.codigoDeEquipoL,unPartido.codigoDeEquipoV,unPartido.codigoDeReferi);
}
int mostrarTodosLosPartidos(sPartido lista[],int cant)
{
    int i;
    int retorno = -1;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estado == TRUE)
        {
            mostrarUnPartido(lista[i]);
            retorno = 1;
        }
    }
    return retorno;
}

int cargarEquipos(sEquipos lista[],int codigo,int length)
{
    int i;
    i = searchFreeE(lista,length);
    int retorno = -1;
    if((length > 0 && length < 1001) && lista != NULL)
    {
        if(i != -1)
        {
            lista[i] = pedirEquipo();
            lista[i].codigo = codigo;
            lista[i].estado = TRUE;
            retorno = 1;
        }
    }
    return retorno;
}

int cargarJugadores(sJugadores listaJ[],sEquipos listaE[],int codigo,int lengthJ,int lengthE)
{
    int i;
    int r;
    i = searchFreeJ(listaJ,lengthJ);
    int retorno = -1;
    if((lengthJ > 0 && lengthJ < 1001) && listaJ != NULL)
    {
        if(i != -1)
        {
            listaJ[i] = pedirJugadores();
            listaJ[i].estado = TRUE;
            printf("\nIngrese el codigo del equipo del jugador: ");
            scanf("%d",&listaJ[i].codigo);
            r = findCode(listaJ[i],listaE,lengthE);
            while(r == -1)
            {
                printf("\nCodigo de equipo no valido,Ingrese nuevamente: ");
                scanf("%d",&listaJ[i].codigo);
                r = findCode(listaJ[i],listaE,lengthE);
            }
            retorno = 1;
        }
    }
    return retorno;
}

int cargarReferi(sReferi lista[],int codigo,int length)
{
    int i;
    i = searchFreeR(lista,length);
    int retorno = -1;
    if((length > 0 && length < 1001) && lista != NULL)
    {
        if(i != -1)
        {
            lista[i] = pedirReferi();
            lista[i].estado = TRUE;
            retorno = 1;
        }
    }
    return retorno;
}

int cargarPartido(sPartido lista[],int length)
{
    int i;
    i = searchFreeP(lista,length);
    int retorno = -1;
    if((length > 0 && length < 1001) && lista != NULL)
    {
        if(i != -1)
        {
            lista[i] = pedirPartido();
            lista[i].estado = TRUE;
            retorno = 1;
        }
    }
    return retorno;
}
int findCodeE(sEquipos list[], int length,int codigo)
{
    int i;
    int retorno = -1;
    if(list != NULL && length > 0)
    {
        for(i = 0; i < length; i++)
        {
            if(list[i].codigo == codigo)
            {
                retorno = i;
            }
        }
    }
    return retorno;
}
int findCodeJ(sJugadores list[], int length,int codigo)
{
    int i;
    int retorno = -1;
    if(list != NULL && length > 0)
    {
        for(i = 0; i < length; i++)
        {
            if(list[i].codigo == codigo)
            {
                retorno = i;
            }
        }
    }
    return retorno;
}

int ordenarE(sEquipos list[],int length)
{
    int i = 0;
    int j;
    sEquipos aux;
    int retorno = -1;
    if((length > 0 && length < 10) || list != NULL)
    {
        if(list[i].estado == TRUE)
        {
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].estado == TRUE)
                    {
                        if(strcmp(list[i].nombre,list[j].nombre) > 0)
                        {
                            aux = list[i];
                            list[i] = list[j];
                            list[j] = aux;
                        }
                    }
                }
            }
            retorno = 0;
        }
    }
    return retorno;
}

int ordenarJ(sJugadores list[],int length)
{
    int i = 0;
    int j;
    sJugadores aux;
    int retorno = -1;
    if((length > 0 && length < 10) || list != NULL)
    {
        if(list[i].estado == TRUE)
        {
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].estado == TRUE)
                    {
                        if(strcmp(list[i].nombre,list[j].nombre) > 0)
                        {
                            aux = list[i];
                            list[i] = list[j];
                            list[j] = aux;
                        }
                    }
                }
            }
            retorno = 0;
        }
    }
    return retorno;
}
int ordenarR(sReferi list[],int length)
{
    int i = 0;
    int j;
    sReferi aux;
    int retorno = -1;
    if((length > 0 && length < 10) || list != NULL)
    {
        if(list[i].estado == TRUE)
        {
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].estado == TRUE)
                    {
                        if(strcmp(list[i].nombre,list[j].nombre) > 0)
                        {
                            aux = list[i];
                            list[i] = list[j];
                            list[j] = aux;
                        }
                    }
                }
            }
            retorno = 0;
        }
    }
    return retorno;
}
int ordenarP(sPartido list[],int length)
{
    int i = 0;
    int j;
    sPartido aux;
    int retorno = -1;
    if((length > 0 && length < 10) || list != NULL)
    {
        if(list[i].estado == TRUE)
        {
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].fecha.anio < list[j].fecha.anio && list[i].estado == TRUE )
                    {
                        aux = list[i];
                        list[i] = list[j];
                        list[j] = aux;
                    }
                }
            }
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].fecha.anio == list[j].fecha.anio && list[i].estado == TRUE)
                    {
                        if(list[i].fecha.mes < list[j].fecha.mes)
                        {
                            aux = list[i];
                            list[i] = list[j];
                            list[j] = aux;
                        }
                    }
                }
            }
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].fecha.mes == list[j].fecha.mes && list[i].estado == TRUE)
                    {
                        if(list[i].fecha.dia < list[j].fecha.dia)
                        {
                            aux = list[i];
                            list[i] = list[j];
                            list[j] = aux;
                        }
                    }
                }
            }
            retorno = 0;
        }
    }
    return retorno;
}

int ordenarPR(sPartido list[],int length)
{
    int i = 0;
    int j;
    sPartido aux;
    int retorno = -1;
    if((length > 0 && length < 10) || list != NULL)
    {
        if(list[i].estado == TRUE)
        {
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].estado == TRUE)
                    {
                        if(list[i].codigoDeReferi > list[j].codigoDeReferi)
                        {
                            aux = list[i];
                            list[i] = list[j];
                            list[j] = aux;
                        }
                    }
                }
            }
            retorno = 0;
        }
    }
    return retorno;
}

int sortByTeam(sJugadores list[],int length)
{
    int i = 0;
    int j;
    sJugadores aux;
    int retorno = -1;
    if((length > 0 && length < 10) || list != NULL)
    {
        if(list[i].estado == TRUE)
        {
            for(i = 0; i < length-1; i++)
            {
                for(j = i+1; j < length; j++)
                {
                    if(list[i].codigoDeEquipos.codigo < list[j].codigoDeEquipos.codigo && list[i].estado == TRUE )
                    {
                        aux = list[i];
                        list[i] = list[j];
                        list[j] = aux;
                    }
                }
            }
            retorno = 0;
        }
    }
    return retorno;
}

int modE(sEquipos list[],int length)
{
    int id;
    int index;
    int mod;
    int retorno = -1;
    if((length > 0 && length < 1001) || list != NULL)
    {
        mostrarTodosLosEquipos(list,length);
        printf("\nIngrese codigo: ");
        scanf("%d",&id);
        index = findCodeE(list,length,id);
        if(index != -1)
        {
            while(mod !=3)
            {
                mostrarUnEquipo(list[index]);
                printf("\nQue desea modificar?\n1.Nombre\n2.Localidad\n3.Terminar ");
                scanf("%d",&mod);
                switch(mod)
                {
                case 1:
                    printf("\nIngrese nuevo nombre: ");
                    fflush(stdin);
                    gets(list[index].nombre);
                    toLowerCase(list[index].nombre);
                    firstLetterToUpperCase(list[index].nombre);
                    retorno = 0;
                    break;

                case 2:
                    printf("\nIngrese nueva localidad: ");
                    fflush(stdin);
                    gets(list[index].localidad);
                    toLowerCase(list[index].localidad);
                    firstLetterToUpperCase(list[index].localidad);
                    retorno = 0;
                    break;
                case 3:
                    retorno = 1;
                    break;
                default:
                    printf("Opcion no valida\n");
                    break;
                }
            }
        }
    }
    return retorno;
}
int modJ(sJugadores list[],int length)
{
    int id;
    int index;
    int mod;
    int retorno = -1;
    if((length > 0 && length < 1001) || list != NULL)
    {
        mostrarTodosLosjugadores(list,length);
        printf("\nIngrese codigo: ");
        scanf("%d",&id);
        index = findCodeJ(list,length,id);
        if(index != -1)
        {
            while(mod !=5)
            {
                mostrarUnJugador(list[index]);
                printf("\nQue desea modificar?\n1.Nombre\n2.Apellido\n3.Fecha de nacimiento\n4.Genero\n5.Terminar");
                scanf("%d",&mod);
                switch(mod)
                {
                case 1:
                    printf("\nIngrese nuevo nombre: ");
                    fflush(stdin);
                    gets(list[index].nombre);
                    toLowerCase(list[index].nombre);
                    firstLetterToUpperCase(list[index].nombre);
                    retorno = 0;
                    break;

                case 2:
                    printf("\nIngrese nuevo apellido: ");
                    fflush(stdin);
                    gets(list[index].apellido);
                    toLowerCase(list[index].apellido);
                    firstLetterToUpperCase(list[index].apellido);
                    retorno = 0;
                    break;
                case 3:
                    printf("\nIngrese nueva fecha de nacimiento: ");
                    printf("\nIngrese nuevo dia: ");
                    scanf("%d",&list[index].fechaDeNac.dia);
                    while(dayVal(list[index].fechaDeNac.dia) == -1)
                    {
                        printf("\n Dia no valido,Ingrese nuevamente: ");
                        scanf("%d",&list[index].fechaDeNac.dia);
                    }
                    printf("\nIngrese nuevo mes: ");
                    scanf("%d",&list[index].fechaDeNac.mes);
                    while(monthVal(list[index].fechaDeNac.mes) == -1)
                    {
                        printf("\n Mes no valido,Ingrese nuevamente: ");
                        scanf("%d",&list[index].fechaDeNac.mes);
                    }
                    printf("\nIngrese nuevo anio: ");
                    scanf("%d",&list[index].fechaDeNac.anio);
                    while(yearVal(list[index].fechaDeNac.anio) == -1)
                    {
                        printf("\n Anio no valido,Ingrese nuevamente: ");
                        scanf("%d",&list[index].fechaDeNac.anio);
                    }
                    break;
                case 4:
                    printf("Ingrese nuevo genero");
                    fflush(stdin);
                    list[index].sexo = getchar();
                    while(genderVal(list[index].sexo) == -1)
                    {
                        printf("Ingrese genero nuevamente: ");
                        fflush(stdin);
                        list[index].sexo = getchar();
                    }
                    break;
                case 5:
                    retorno = 1;
                    break;
                default:
                    printf("Opcion no valida\n");
                    break;
                }
            }
        }
    }
    return retorno;
}

int removeE(sEquipos list[], int length)
{
    int id;
    int index;
    int remove;
    int retorno = -1;
    if(list != NULL && length > 0)
    {
        mostrarTodosLosEquipos(list,length);
        printf("\nIngrese codigo: ");
        scanf("%d",&id);
        index = findCodeE(list,length,id);
        if(index != -1)
        {
            printf("\nEsta seguro que desea eliminar los siguientes datos?: ");
            mostrarUnEquipo(list[index]);
            printf("\n1.Si\n2.No\n");
            scanf("%d",&remove);
            if(remove == 1)
            {
                list[index].estado = FALSE;
                retorno = 0;
            }
            else if(remove == 2)
            {
                retorno = 1;
            }
            else
            {
                printf("Opcion no valida,Ingrese nuevamente");
                scanf("%d",&remove);
            }
        }
    }
    return retorno;
}

int removeJ(sJugadores list[], int length)
{
    int id;
    int index;
    int remove;
    int retorno = -1;
    if(list != NULL && length > 0)
    {
        mostrarTodosLosjugadores(list,length);
        printf("\nIngrese codigo: ");
        scanf("%d",&id);
        index = findCodeJ(list,length,id);
        if(index != -1)
        {
            printf("\nEsta seguro que desea eliminar los siguientes datos?: ");
            mostrarUnJugador(list[index]);
            printf("\n1.Si\n2.No\n");
            scanf("%d",&remove);
            if(remove == 1)
            {
                list[index].estado = FALSE;
                retorno = 0;
            }
            else if(remove == 2)
            {
                retorno = 1;
            }
            else
            {
                printf("Opcion no valida,Ingrese nuevamente");
                scanf("%d",&remove);
            }
        }
    }
    return retorno;
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

int genderVal(char letter)
{
    int retorno = 1;

    if((letter != 70 && letter != 102) && (letter != 77 && letter != 109))
    {
        retorno = -1;
    }

    return retorno;
}

int dayVal(int day)
{
    int retorno = 1;

    if(day < 1 || day > 31)
    {
        retorno = -1;
    }

    return retorno;
}

int monthVal(int month)
{
    int retorno = 1;

    if(month < 1 || month > 12)
    {
        retorno = -1;
    }

    return retorno;
}

int yearVal(int year)
{
    int retorno = 1;

    if(year < 1930 || year > 2019)
    {
        retorno = -1;
    }

    return retorno;
}

int findCode(sJugadores listJ, sEquipos listE[],int length)
{
    int i;
    int retorno = -1;
    if(listE != NULL && length > 0)
    {
        for(i = 0; i < length; i++)
        {
            if(listJ.codigo == listE[i].codigo )
            {
                retorno = 1;
                break;
            }
        }
    }
    return retorno;
}

int hardcodeE(sEquipos list[],int cant)
{
    char equipos[][51] = {"Cambios FC","Camboya","Dep Muy Caliente","Hacha y Birra","Bidon de Branco","Real Coholicos","Suc. Congreso","Sucursal Flores","Los Isotopos","Ornad + 4"};
    char localidades[][33] = {"Lanus","Banfield","Avellaneda","CABA","Lanus","Banfield","Avellaneda","CABA","Lanus","Banfield","Avellaneda","CABA"};
    int codigo[] = {1,2,3,4,5,6,7,8,9,10};
    int retorno = 0;
    int i;
    for(i = 0; i < cant ; i++)
    {
        strcpy(list[i].nombre,equipos[i]);
        strcpy(list[i].localidad,localidades[i]);
        list[i].codigo = codigo[i];
        list[i].estado = TRUE;
        retorno = 1;
    }

    return retorno;

}

int hardcodeJ(sJugadores list[],int cant)
{
    char Nombres[][50]= {"JUAN","JOSE LUIS","JOSE","MARIA GUADALUPE","FRANCISCO","GUADALUPE","MARIA","JUANA","ANTONIO","JESUS","MIGUEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARIA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTIN","RAUL","DAVID","JOSEFINA","JOSE ANTONIO","ARTURO","MARCO ANTONIO","JOSE MANUEL","JUAN","JOSE LUIS","JOSE","MARIA GUADALUPE","FRANCISCO","GUADALUPE","MARIA","JUANA","ANTONIO","JESUS","MIGUEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARIA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTIN","RAUL","DAVID","JOSEFINA","JOSE ANTONIO","ARTURO","MARCO ANTONIO","JOSE MANUEL","JUAN","JOSE LUIS","JOSE","MARIA GUADALUPE","FRANCISCO","GUADALUPE","MARIA","JUANA","ANTONIO","JESUS","MIGUEL ANGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARIA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTIN","RAUL","DAVID","JOSEFINA","JOSE ANTONIO","ARTURO","MARCO ANTONIO","JOSE MANUEL","JUAN","JOSE LUIS","JOSE","MARIA GUADALUPE","FRANCISCO","GUADALUPE","MARIA","JUANA","ANTONIO","JESUS","MIGUEL ANGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARIA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTIN","RAUL","DAVID","JOSEFINA","JOSE ANTONIO","ARTURO","MARCO ANTONIO","JOSE MANUEL","JUAN","JOSE LUIS","JOSE","MARIA GUADALUPE","FRANCISCO","GUADALUPE","MARIA","JUANA","ANTONIO","JESUS","MIGUEL ANGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARIA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTIN","RAUL","DAVID","JOSEFINA","JOSE ANTONIO","ARTURO","MARCO ANTONIO","JOSE MANUEL"};
    char Sexo[][1]= {"M","M","M","F","M","F","F","F","M","M","M","M","M","M","F","F","M","M","M","M","M","M","M","M","M","M","M","M","M","M","F","M","M","M","M"};
    char Apellido[][50]= {"Gonzalez","Rodriguez","Gomez","Fernandez","Lopez","Diaz","Martinez","Perez","Romero","Sanchez","Garcia","Sosa","Torres","Ramirez","Alvarez","Benitez","Acosta","Flores","Medina","Ruiz","Gonzalez","Rodriguez","Gomez","Fernandez","Lopez","Diaz","Martinez","Perez","Romero","Sanchez","Garcia","Sosa","Torres","Ramirez","Alvarez","Benitez","Acosta","Flores","Medina","Ruiz","Gonzalez","Rodriguez","Gomez","Fernandez","Lopez","Diaz","Martinez","Perez","Romero","Sanchez","Garcia","Sosa","Torres","Ramirez","Álvarez","Benitez","Acosta","Flores","Medina","Ruiz"};
    int codigoEquipos[] = { 1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,9,9,9,9,9,9,9,9,9,9,10,10,10,10,10,10,10,10,10,10};
    int anios[]= { 2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995};
    int mes[]= { 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1};
    int dia[]= { 25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22};
    int retorno = 0;
    int i;
    for(i = 0; i < cant ; i++)
    {
        strcpy(list[i].nombre,Nombres[i]);
        strcpy(list[i].apellido,Apellido[i]);
        list[i].sexo = Sexo[i];
        list[i].codigo = codigoEquipos[i];
        list[i].fechaDeNac.anio = anios[i];
        list[i].fechaDeNac.mes = mes[i];
        list[i].fechaDeNac.dia = dia[i];
        list[i].estado = TRUE;
        retorno = 1;
    }

    return retorno;

}

int hardcodeR(sReferi list[],int cant)
{
    char Nombres[][50]={"Nicolas","Nazareno","Dario","Fernando","Gisella","Yael"};
    char Apellido[][50]={"Lamolina","Arasa","Herrera","Espinoza","Trucco","Falcon Perez"};
    char Sexo[] [1] = {"M","M","M","M","F","F"};
    int anios[]={1980,1981,1975,1970,1986,1989};
    int mes[]={8,10,5,6,6,2};
    int dia[]={15,5,20,22,12,1};
    int retorno = 0;
    int i;
    for(i = 0; i < cant ; i++)
    {
        strcpy(list[i].nombre,Nombres[i]);
        strcpy(list[i].apellido,Apellido[i]);
        list[i].sexo = Sexo[i];
        list[i].fechaDeNac.anio = anios[i];
        list[i].fechaDeNac.mes = mes[i];
        list[i].fechaDeNac.dia = dia[i];
        list[i].estado = TRUE;
        retorno = 1;
    }

    return retorno;

}

int hardcodeP(sPartido list[],int cant)
{
    int visitante[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5};
    int local[]= {10,9,8,7,6,4,3,2,1,5,8,7,6,10,9,2,1,5,4,3,6,10,9,8,7};
    int dia[]= {21,21,21,21,21,28,28,28,28,28,5,5,5,5,5,12,12,12,12,12,19,19,19,19,19 };
    int mes[]= {9,9,9,9,9,9,9,9,9,9,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    int anios[]= {2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019,2019};
    int referi[]= {1,2,6,4,5,1,2,3,4,6,6,2,3,4,5,1,6,3,4,5,1,2,3,6,5};

    int retorno = 0;
    int i;
    for(i = 0; i < cant ; i++)
    {
        list[i].codigoDeEquipoV = visitante[i];
        list[i].codigoDeEquipoL = local[i];
        list[i].codigoDeReferi = referi[i];
        list[i].fecha.anio = anios[i];
        list[i].fecha.mes = mes[i];
        list[i].fecha.dia = dia[i];
        list[i].estado = TRUE;
        retorno = 1;
    }

    return retorno;

}
