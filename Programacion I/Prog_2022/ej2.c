
//Escribir un programa que lea 10 numeros enteros y luego 
//muestre cuantos valores ingresados fueron multiplos de 5.

#include <stdio.h>

#define MAX_INT 2

void pedirNumeros(int numeros[MAX_INT]);
int calcularMultiplos(int numeros[MAX_INT]);

int main(){

    int numeros[MAX_INT];

    pedirNumeros(numeros);

    printf("De los numeros ingresados, %d son multiplos de 5.", calcularMultiplos(numeros));

    return 0;
}

void pedirNumeros(int numeros[MAX_INT]){

    for(int i = 0; i < MAX_INT; i++){
        printf("Ingrese un numero: ");
        fflush(stdin);
        scanf("%d", &numeros[i]);

        while (numeros[i] == 0)
        {
            printf("Error, ingrese un numero distinto a 0: ");
            fflush(stdin);
            scanf("%d", &numeros[i]);
        }
        
    }

    return;    
}

int calcularMultiplos(int numeros[MAX_INT]){

    int cantidad = 0;
        
    for(int i = 0; i < MAX_INT; i++){        
        if(numeros[i] % 5 == 0){
            cantidad = cantidad + 1;
        }        
    }

    return cantidad;
}

