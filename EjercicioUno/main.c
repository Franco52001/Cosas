#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroUno;

    float numeroDos;


    printf("Ingrese dos numeros \n");
    scanf("%f", &numeroUno);
    scanf("%f", &numeroDos);

    float resultadoS;
    resultadoS = numeroUno + numeroDos;
    float resultadoN;
    resultadoN = numeroUno - numeroDos;
    float resultadoM;
    resultadoM = numeroUno * numeroDos;
    float resultadoD;
    if(numeroDos !=0)
    {
        resultadoD = numeroUno / numeroDos;
    }

    float factorialA;
    factorialA = 1;
    float resultadoFuno;
    for(float factorialUno = numeroUno ; factorialUno > 0; factorialUno--)
    {
        factorialA = factorialA * factorialUno;                                        // 1 = 4* 1 -----> 4 = 4 * 3 -----> 12 = 12 * 2 ----> 24 = 24 *
    }
    resultadoFuno = factorialA;

    float factorialB;
    factorialB = 1;
    float resultadoFdos;
    for(float factorialDos = numeroDos ; factorialDos > 0; factorialDos--)
    {
        factorialB = factorialB * factorialDos;

    }
    resultadoFdos = factorialB;

    printf("La suma de %f y %f es %f \n", numeroUno,numeroDos,resultadoS);
    printf("La resta de %f y %f es %f \n", numeroUno,numeroDos,resultadoN);
    printf("La multiplicacion de %f y %f es %f \n", numeroUno,numeroDos,resultadoM);
    if(numeroDos !=0)
    {
        printf("La division de %f y %f es %f \n", numeroUno,numeroDos,resultadoD);
    }
    else
    {
        printf("No es posible dividir por cero \n");
    }
    printf("El factorial de %f es %f y el factorial de %f es %f \n", numeroUno,resultadoFuno,numeroDos,resultadoFdos);





}
