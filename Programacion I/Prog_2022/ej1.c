

#include <stdio.h>

int calcularCubo(int numero);


int main(){

	int numero;
	int cubo;
		
	printf("El cubo del numero ingresado es: %d\n", calcularCubo(cubo));
	
	return 0;
}


int calcularCubo(int numero){
	printf("Ingrese el numero que desee calcular: ");
	fflush(stdin);
	scanf("%d", &numero);

	int cubo = numero * numero * numero;

	return cubo;
}



