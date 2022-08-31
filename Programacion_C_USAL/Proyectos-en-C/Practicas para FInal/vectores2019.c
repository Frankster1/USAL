// Dados dos vectores A y B con 10 elementos enteros, generar un tercer vector C también
// de diez elementos enteros donde el elemento:
// C[i] es igual al mayor entre A[i] y B[i]
// Ingresar por teclado los elementos del vector A y B.
// Una vez terminada la carga y la generación del vector C, mostrar los tres vectores
// encolumnados.
// Utilizar ciclos de diferentes tipos. No repetir el tipo de ciclo utilizado.


#include <stdio.h>


int main()
{

    //defino mis arreglos vectorA y vectorB como enteros de 10 espacios para c/u


    int vectorA[10], vectorB[10];


    //Aca Pido los 10 numeros para A


    for (int i = 0; i < 10; i++)
    {
        printf("Escriba el N°%d para el vector A: ", i + 1);
        fflush(stdin);
        scanf("%d", &vectorA[i]);
    }


    //Ahora pido los de B

    int j = 0;


    while (vectorB[j] < 10)
    {
        printf("Escriba el N°%d para el vector B", j + 1);
        fflush(stdin);
        scanf("%d", &vectorB[j]);
    }


    //Ahora empiezo a comparar entre A y B para completar mi vector c

    int vectorC[10];

    

    return 0;

}