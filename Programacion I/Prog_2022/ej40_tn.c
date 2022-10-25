#include <stdio.h>
#include <stdlib.h>

int entPos();
void cargarTodas(int, int*);

int main(){
	//preguntar cuantos invitados hay
	puts("Ingrese cuantos invitados entraron: ");
	int N = entPos();
	
	//reservar la memoria
	int* conjEdad = (int*) malloc(N * sizeof(int));
	if (conjEdad != NULL){
		//tengo memoria para mi pgm
		
		cargarTodas(N, conjEdad);
			
		free(conjEdad);
	} else puts ("Error. Memoria no disponible");
	return 0;
}

void cargarTodas(int cant, int* conj){
	int x;
	puts("Ingrese las edades de sus invitados: ");
	for (int i=0; i<cant; i++){
		// opcion 1: usando la mem como un arreglo -- conj[i] = entPos();
		*conj = entPos();
		conj++;
	}
	return;
}

int entPos(){
	int z;
	do{
		scanf("%d", &z);
		if (z<=0) puts("Error. Dato no valido");
		
	} while (z<=0);
	return z;
}
