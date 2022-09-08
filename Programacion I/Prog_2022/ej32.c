

/*

Cantidad maxima de socios 7, variables descripcion, nonbre, apellido, costo anual

*/


#include <stdio.h>
#include <string.h>

#define MAX_CANT 7
#define MAX_STR 10


typedef struct 
{
    char nombre[MAX_STR];
    char apellido[MAX_STR];
    char descripcion[MAX_STR];
    double valorCuota;
}TIPO_SOCIO;


//Funciones
void pedirDatos(TIPO_SOCIO socio[]);

void validarSocio(TIPO_SOCIO socio[]);

void mostrarDatos(TIPO_SOCIO socio[]);

TIPO_SOCIO busqueda(TIPO_SOCIO socio[]);


int main(){

    TIPO_SOCIO socio[MAX_CANT];

    pedirDatos(socio);

    validarSocio(socio);

    mostrarDatos(socio);

    return 0;
}

//Funcion pedir Datos
void pedirDatos(TIPO_SOCIO socio[]){

    for (int i = 0; i < MAX_CANT; i++)
        {
            //Pedir nombre
            printf("Ingrese el nombre del socio: ");
            fflush(stdin);
            gets(socio[i].nombre);

            //Pedir apellido
            printf("Ingrese el apellido del socio: ");
            fflush(stdin);
            gets(socio[i].apellido);

            //Pedir costo anual
            printf("Ingrese el valor de la cuota anual del socio: ");
            fflush(stdin);
            scanf("%lf", &socio[i].valorCuota);

            //Pedir descripcion
            printf("Ingrese una descripcion del socio: \n");
            fflush(stdin);
            gets(socio[i].descripcion);
        }
}

//Valdiar costo
void validarSocio(TIPO_SOCIO socio[]){

    int i = 0;

    while (socio[i].valorCuota < 0)
    {
        printf("Error, el valor de la cuota no puede ser negativo, intente nuevamente:\t");
        fflush(stdin);
        scanf("%lf", &socio[i].valorCuota);
    }
    i++;
}

//Mostrar datos
void mostrarDatos(TIPO_SOCIO socio[]){
    for (int i = 0; i < MAX_CANT; i++)
    {
        printf("Nombre completo: %c %c\t", socio[i].nombre, socio[i].apellido);
        printf("Descripcion breve: %c\t", socio[i].descripcion);
        printf("Valor anual de cuota: %lf", socio[i].valorCuota);
    }
    
}
