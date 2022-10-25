

/*
Realizar un programa donde:

- Se ingrese por teclado un numero ENTERO POSITIVO y luego se genere una serie
HASTA otro numero tambien ingresado por teclado (lim inf y superior de la serie) 

- El limite inferior no puede ser CERO

- El limite superior debe ser mayor al limite inferior

- La cantidad maxima de numeros a guardar sera 10

- La serie cumple la condicion de cada numero es el DOBLE
que su anterior.

- Al finalizar muestre por pantalla todo el conjunto de numeros (ver 
pantalla de ejemplo)

CONDICIONES que cumplir:

Guardar la informacion en MEMORIA DINAMICA
Programar usando FUNCIONES
Utilizar lenguaje C STANDARD
Bibliotecas permitidas: STDIO.H, STDLIB.H, STDBOOL.H

-> Crear una funcion que tome el primer valor y sume o reste multiplicando el numero anterior hasta que llegue al segundo valor

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 10


int validarLimInf(int limInf);
int validarLimSup(int limSup, int* puntLimInf);
void calcularSerie(int* puntLimSup, int* puntLimInf, int* conjuntoSerie);


int main(){

    //Creo los punteros de los limites
    int limInf = validarLimInf(limInf);
    int* puntLimInf = &limInf; //Limite inferior validado

    int limSup = validarLimSup(limSup, puntLimInf);
    int* puntLimSup = &limSup; //Limite superior validado

    int* conjuntoSerie = (int*) malloc(MAX_NUM * sizeof(int));

    if (conjuntoSerie != NULL){
        calcularSerie(puntLimInf, puntLimSup, conjuntoSerie);

        free(conjuntoSerie);

    } else printf("\nError, memoria no disponible.");

    return 0;
}

int validarLimInf(int limInf){

    printf("\nIngrese el limite inferior de la funcion: ");
    fflush(stdin);
    scanf("%d", &limInf);

    while (limInf == 0)
    {
        printf("\nError, el limite inferior debe ser mayor a 0, intente nuevamnete: ");
        fflush(stdin);
        scanf("%d", &limInf);
    }          

    return limInf;
}

int validarLimSup(int limSup, int* puntLimInf){
    
    printf("\nIngrese el limite superior de la funcion: ");
    fflush(stdin);
    scanf("%d", &limSup);

    //El limite superior debe ser mayor a el limite inferior que se ingrese
    while (limSup < *puntLimInf)
    {
        printf("\nError, el limite superior debe ser mayor a %d, intente nuevamnete: ", *puntLimInf);
        fflush(stdin);
        scanf("%d", &limSup);
    }
  
  return limSup;
}

void calcularSerie(int* puntLimInf, int* puntLimSup, int* conjuntoSerie){
    int acum = 1;

    *conjuntoSerie =  *puntLimInf;

    int* aux = conjuntoSerie;
    conjuntoSerie++;

    do
    {
        *conjuntoSerie = *(conjuntoSerie - 1) * 2; 
        conjuntoSerie++; //Esto hace que cambie la ubicacion dentro del puntero
        acum++; //Esto incrementa el valor de cant de datos escritos en el puntero por si se ingresan menos datos de lo reservado
    } while ((((*conjuntoSerie)*2) < *puntLimSup) && (acum < MAX_NUM));

    printf("\nLa serie es: ");

    for (int i = 0; i < acum; i++)
    {
        printf("%d", aux[i]);

        if (i <= (acum - 2))//*Esto es solo para que ponga punto o coma
        {
            printf(", ");
        }
        if (i == (acum - 1))
        {
            printf(".");
        }//*
    }

    return;
}
