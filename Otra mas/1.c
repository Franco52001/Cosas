#include "1.h"
float pedirNum(char msj[])
{
    float num;
    printf("%s", msj);
    scanf("%f", &num);
    return num;
}

void calcular(float numUno,float numDos)
{
    float resultadoS;
    float resultadoR;
    float resultadoM;
    float resultadoD;
    float resultadoFuno;
    float resultadoFdos;
    int menu;
    int flag = 0;
    int flagNumUno = 0;
    int flagNumDos = 0;


    while(flag == 0)
    {
        printf("\nElija una opcion \n1-Ingresar primer numero \n2-Ingresar segundo numero  \n3-Realizar operaciones  \n4-Mostrar resultados \n5-Salir\n");
        scanf("%d", &menu);
        switch(menu)
        {
        case 1:
            numUno = pedirNum("\nIngrese primer numero\n");
            flagNumUno = 1;

            break;
        case 2:
            numDos = pedirNum("\nIngrese segundo numero\n");
            flagNumDos = 1;

            break;
            if(flagNumUno == 1 && flagNumDos == 1)
            {
            case 3:

                printf("\nOperaciones realizadas\n");
                resultadoS = sumar(numUno, numDos);
                resultadoR = restar(numUno, numDos);
                resultadoM = multiplicar(numUno, numDos);
                resultadoD = dividir(numUno, numDos);
                resultadoFuno = factorialUno(numUno);
                resultadoFdos = factorialDos(numDos);

                break;

            }

        case 4:
            if(flagNumUno == 1 && flagNumDos == 1)
            {
                printf("La suma entre %f y %f da: %f ",numUno,numDos,resultadoS);
                printf("\nLa resta entre %f y %f da: %f ",numUno,numDos,resultadoR);
                printf("\nLa multiplicacion entre %f y %f da: %f ",numUno,numDos,resultadoM);
                if(numDos !=0)
                {
                    printf("\nLa division entre %f y %f da: %f ",numUno,numDos,resultadoD);
                }
                else
                {
                    printf("\nNo es posible dividir por cero");
                }
                printf("\nEl factorial de %f es %f y el factorial de %f es %f\n",numUno,resultadoFuno,numDos,resultadoFdos);
            }
            else if(flagNumUno != 1 || flagNumDos != 1)
            {
                printf("\nNo se ingresaron numeros\n");
            }

            break;
        case 5:
            flag = 1;
            break;

        default:
            printf("Opcion no valida\n");
            break;
        }

    }

}

    float sumar(float numUno, float numDos)
    {
        return numUno + numDos;
    }

    float restar(float numUno, float numDos)
    {
        return numUno - numDos;
    }

    float multiplicar(float numUno, float numDos)
    {
        return numUno * numDos;
    }

    float dividir(float numUno, float numDos)
    {
        return numUno / numDos;
    }
    float factorialUno(float numUno)
    {
        float factorialA;
        factorialA = 1;
        for(float factorialUno = numUno ; factorialUno > 0; factorialUno--)
        {
            factorialA = factorialA * factorialUno;
        }
        return factorialA;
    }
    float factorialDos(float numDos)
    {
        float factorialB;
        factorialB = 1;
        for(float factorialDos = numDos ; factorialDos > 0; factorialDos--)
        {
            factorialB = factorialB * factorialDos;
        }
        return factorialB;
    }
