/*
Se ingresan por teclado 5 pares de coordenadas x, y que representan puntos en el plano.
Al finalizar la carga, unforma cuantos punteros se han ingresado en el primer cuadrante.
Al finalizar la carga y luego de la cantidad, informe en un listado todos esos putnos del primer cuadrante.
EXTRA: En la consigna no lo dice pero los cuadrantes que se imprimen son solo los valores de coordenadas con valores positivos
*/

#include <stdio.h>
#include <stdlib.h>

#define CANT_MAX 2

typedef struct 
{
    int x, y;
} coordenadas;

void ingresoDatos(coordenadas *pDatos);
void validoDatos(coordenadas *puntDatos);


int main(){

    coordenadas *puntCoordenadas = (coordenadas*) malloc(CANT_MAX * sizeof(coordenadas));

    if(puntCoordenadas != NULL)
    {
	    ingresoDatos(puntCoordenadas);	
	    validoDatos(puntCoordenadas);

    } else puts("ERROR");

    return 0;
}

void ingresoDatos(coordenadas *pDatos)
{
	for(int i = 0 ;i < CANT_MAX; i++)
	{
		printf("Ingresar el valor para X: ");
		scanf("%d", &(pDatos +i) -> x);
		printf("Ingresar el valor para Y: ");
		scanf("%d", &(pDatos +i) -> y);
	}
	return;
}

void validoDatos(coordenadas *puntDatos)
{
	int primerCuadrante = 0;
	printf("Puntos en el primer cuadrante:\n");
	for (int i = 0;i < CANT_MAX;i++)
	{
		if( (puntDatos+i)->x > 0 && (puntDatos+i)->y > 0)
		{
			primerCuadrante++;
			printf( "X:%d; ",(puntDatos+i)->x);	
			printf( "Y:%d\n",(puntDatos+i)->y);	
		}
	}
	
	free(puntDatos);
	printf("\n Hay %d valores en el primer cuadrante", primerCuadrante);
	return;
}