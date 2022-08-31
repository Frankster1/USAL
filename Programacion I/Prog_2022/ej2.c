
//Escribir un programa que lea 10 numeros enteros y luego 
//muestre cuantos valores ingresados fueron multiplos de 5.

#include <stdio.h>

#define MAX_INT 2

void pedirNumeros(int numeros[MAX_INT]);
int calcularMultiplos(int numeros[MAX_INT]);

int main(){

    int numeros[MAX_INT];
    int multiplos;

    pedirNumeros(numeros);

    printf("De los numeros ingresados, %d son multiplos de 5.", calcularMultiplos(numeros));

    return 0;
}

void pedirNumeros(int numeros[MAX_INT]){

    for(int i = 0; i < MAX_INT; i++){
        printf("Ingrese un numero: ");
        fflush(stdin);
        scanf("%d", &numeros[i]);
    }

    return;    
}

int calcularMultiplos(int numeros[MAX_INT]){
        
    int multiplos = 0;

    for(int i = 0; i < MAX_INT; i++){        
        if(multiplos % 5 == 0){
            multiplos = multiplos + 1;
        }        
    }

    return multiplos;
}

