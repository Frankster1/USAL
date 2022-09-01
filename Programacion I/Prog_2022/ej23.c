/*Desarrollar dos funciones que reciban como parámetro el valor del lado 
de un cuadrado.

▪ La primera debe calcular la superficie y la segunda el perímetro.
Ninguna lee o imprime.

▪ Superficie = lado * lado▪ Perímetro = lado * 4
*/

#include <stdio.h>

float calcularSuperficie(float lado);

float calcularPerimetro(float lado);

float pedirValor(float lado);


int main(){

    float lado = pedirValor(lado);

    printf("La superficie es: %f\n", calcularSuperficie(lado));
    printf("El perimetro es: %f", calcularPerimetro(lado));

    return 0;
}

float calcularSuperficie(float lado){
    float superficie;
    superficie = lado * lado;

    return superficie;
}

float calcularPerimetro(float lado){
    float perimetro;
    perimetro = lado * 4;
    return perimetro;
}

float pedirValor(float lado){
    printf("Ingrese el valor del lado: ");
    scanf("%f", &lado);

    while (lado <= 0){
        printf("Error, el valor es negativo, intente nuevamente: ");
        fflush(stdin);
        scanf("%f", &lado);
    }
    return lado;
}

