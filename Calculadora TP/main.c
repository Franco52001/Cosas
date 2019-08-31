#include <stdio.h>
#include <stdlib.h>
#include "Aritmetica.h"

int main()
{

    printf("Ingrese el tipo de operacion que desea realizar \n1-Sumar \n2-Restar \n3-Multiplicar \n4-Dividir \n");
    int operacion =  pedirDato(operacion);

    printf("\nIngrese el primer numero \n");
    int numUno = pedirDato(numUno);

    printf("\nIngrese el segundo numero \n");
    int numDos = pedirDato(numDos);

    calcular (numUno, numDos, operacion);
}

