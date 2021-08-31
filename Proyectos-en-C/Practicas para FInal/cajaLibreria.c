//  A) Implementar un programa que pida código (como máximo 4 digítos), precio y descripción de 10 artículos.
// Otro ejemplo: código 14, precio 1800, descripción "hojas impresora"


#include <stdio.h>
#include <string.h>

#define MAX_CODE 9999


int main()
{
    

    int codigo = 0;

    char descripcion[40];

    int precio = 0;

    //Pido al usuario que imprima el codigo de producto

    printf("Ingrese el codigo de 4 digitos del producto a escanear: ");
    fflush(stdin);
    scanf("%d", &codigo);

    while (codigo > MAX_CODE)
    {
        printf("Error, no hay ningun articulo con un codigo de mas de 4 cifras, intente neuvamente: ");
        fflush(stdin);
        scanf("%d", &codigo);
    }

    //Ahora pido el nombre del articulo

    printf("Ingrese el nombre o descripcion del articulo a escanear: ");
    fflush(stdin);
    scanf("%s", descripcion);

    //Ahora pido el precio del articulo a escanear

    printf("Ingrese el precio del articulo: ");
    fflush(stdin);
    scanf("%d", &precio);

    while (precio < 0)
    {
        printf("Error, el precion no puede ser negativo, intente nuevamente: ");
        fflush(stdin);
        scanf("%d", &precio);
    } 
    


    //Ahora devuelvo los datos ingresados

    printf("Codigo: %d, Descripcion: %s , Precio: %d", codigo, descripcion, precio);



    return 0;
}