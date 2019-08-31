#include "Aritmetica.h"
void calcular(int numUno, int numDos, int operacion)
{
    float resultado;
    switch(operacion)
    {
    case 1:
        resultado = sumar(numUno, numDos);
        break;
    case 2:
        resultado = restar(numUno, numDos);
        break;
    case 3:
        resultado = multiplicar(numUno, numDos);
        break;
    case 4:
        resultado = dividir(numUno, numDos);

    }

    mostrar(resultado);
}
int sumar(int numUno, int numDos)
{
    return numUno + numDos;
}

int restar(int numUno, int numDos)
{
    return numUno - numDos;
}

int multiplicar(int numUno, int numDos)
{
    return numUno * numDos;
}

int dividir(int numUno, int numDos)
{
    return numUno / numDos;
}

void mostrar(float resultado)
{
    printf(" \nEl resultado es %.2f", resultado);

}

int pedirDato(int numeroPedido)
{
    scanf("%d", &numeroPedido);
    return numeroPedido;
}
