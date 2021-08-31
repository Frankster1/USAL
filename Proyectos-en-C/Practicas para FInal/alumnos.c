// // 2) Implementar un programa que reciba DNI, nota del primer parcial y nota del segundo parcial de 10 alumnos

// 3) Recibir por consola el documento de un alumno e imprimir las notas de sus parciales
// 4) Recibir por consola el documento de un alumno e imprimir el promedio de nota de sus parciales



#include <stdio.h>

#define CANT_ALUMNOS 2


int main()
{

    int documento[CANT_ALUMNOS];
    float parcial_1[CANT_ALUMNOS];
    float parcial_2[CANT_ALUMNOS];


//Ejercicio 2

for (int i = 0; i < CANT_ALUMNOS; i++)
{
    
    //Pido el documento del alumno


    printf("Ingrese el numero de documento del alumno N°%d: ", i + 1);
    fflush(stdin);
    scanf("%d", &documento[i]);

     while (documento[i] > 99999999 || documento[i] < 10000000)
    {
        printf("Error, el numero de documento tiene maximo 8 carateres: ");
        fflush(stdin);
        scanf("%d", &documento[i]);
    }
    

    //Ahora que tengo el documento, pido la nota del primer parcial

    printf("Ingrese la nota del primer parcial del alumno N°%d: ", i + 1);
    fflush(stdin);
    scanf("%f", &parcial_1[i]);


    while (parcial_1[i] < (float) 0 || parcial_1[i] > (float) 10)
    {
        printf("Error, las notas deben ser de entre 0 y 10. Intente nuevamente: ");
        fflush(stdin);
        scanf("%f", &parcial_1[i]);
    }
    
    //Ahora pido las notas del segundo parcial

     printf("Ingrese la nota del segundo parcial del alumno  N°%d: ", i + 1);
    fflush(stdin);
    scanf("%f", &parcial_2[i]);

       while (parcial_2[i] < 0 || parcial_2[i] > 10)
    {
        printf("Error, las notas deben ser de entre 0 y 10. Intente nuevamente: ");
        fflush(stdin);
        scanf("%f", &parcial_2[i]);
    }



}
 

 //Ejercicio 3

    int documento_A_buscar;

    //Pedir el documento del alumno

    printf("Ingrese el documento del alumno que desea buscar: ");
    fflush(stdin);
    scanf("%d", &documento_A_buscar);

     while (documento_A_buscar > 99999999 || documento_A_buscar < 10000000)
    {
        printf("Error, el documento debe tener 8 cifras, intente nuevamente: ");
        fflush(stdin);
        scanf("%d", &documento_A_buscar);
    }

    int j = 0;

    for (int  i = 0; i < CANT_ALUMNOS; i++)
    {
        if (documento_A_buscar == documento[i])
        {
            printf("Nota del primer parcial: %f \n", &parcial_1);
        }else
        {
            while (documento_A_buscar =! documento[i])
            {
                documento[i] = documento[i] + 1;
            }
            
        }
        
    }

    return 0;
}