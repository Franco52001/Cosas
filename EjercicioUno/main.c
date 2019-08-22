#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    float altura;

    char sexo;

    char seguir;
    seguir = 's';

    float alturaM;

    float alturaMJ;

    float alturaMV;

    float alturaMB;

    float alturaH;

    int edadM;

    int edadMJ;

    int edadMV;

    int edadMB;

    fflush(stdin);

    char sexoMA;

    int contador;
    contador = 0;

    int contadorMV;
    contadorMV = 0;

    int contadorMB;
    contadorMB = 0;

    int contadorAH;
    contadorAH = 0;

    int acumuladorE;
    acumuladorE = 0;

    int acumuladorAH;
    acumuladorAH = 0;

    float promedioE;

    float promedioAH;



    do{
    printf("Ingrese su edad\n");
    scanf("%d" , &edad);
    while(edad < 0 || edad > 110){
        printf("Numero no valido\n");
        scanf("%d" , &edad);

    }

    printf("Ingrese su altura\n");
    scanf("%f", &altura);
    while(altura > 2 || altura < 1){
        printf("Numero no valido\n");
        scanf("%f" , &altura);
    }

    fflush(stdin);

    printf("Ingrese su sexo(f/m)\n");
    scanf("%c", &sexo);

    if(contador == 0){
        alturaM = altura;
        alturaMJ = altura;
        edadM = edad;
        edadMJ = edad;
        sexoMA = sexo;

    }
    if(contadorMV== 0 && sexo == 'f' || sexo == 'F'){
        alturaMV = altura;
        edadMV = edad;
        contadorMV++;
    }
    if(contadorMB == 0 && sexo == 'm' || sexo == 'M'){
        edadMB = edad;
        alturaMB = altura;
        contadorMB++;
    }
    contador++;

    if(edad > edadMV && sexo == 'f' || sexo == 'F'){
        alturaMV = altura;
        edadMV  = edad;
    }


    if(edad < edadMJ){
       alturaMJ = altura;
       edadMJ = edad;
    }

    if(altura > alturaM){
        alturaM  = altura;
        sexoMA = sexo;
    }

    if(altura < alturaMB && sexo == 'm'|| sexo == 'M'){
        edadMB = edad;
        alturaMB = altura;
    }

    if(sexo == 'm'|| sexo == 'M'){
        alturaH = altura;
        contadorAH++;
        acumuladorAH = acumuladorAH + alturaH;
    }

    acumuladorE = acumuladorE + edad;


    fflush(stdin);
    printf("Desea seguir?(s/n)\n");
    scanf("%c", &seguir);


    }while(seguir == 's'|| seguir == 'S');

    if(contador !=0){
    promedioE = acumuladorE/contador;
    }
    if(contadorAH !=0){
    promedioAH = acumuladorAH/contadorAH;
    }

    printf("La altura de la mujer mas vieja es:%f\n" , alturaMV);

    printf("La altura de la persona mas joven es:%f\n", alturaMJ);

    printf("El sexo de la persona mas alta es:%c\n", sexoMA);

    printf("La edad del hombre mas bajo es:%d\n", edadMB);

    printf("El promedio de todas las edades es:%f\n", promedioE);

    printf("El promedio de la altura de los hombres es:%f\n", promedioAH);

    return 0;
}
