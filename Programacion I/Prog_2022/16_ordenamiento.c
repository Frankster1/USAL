/*
    Ingresar N Empleados: apellido y sueldo
    Ordenar empleados según primer letra del apellido
    Imprimir empleados en orden
*/

#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAXLEN 270

int consultarCantEmpleados(void) {
	int res;
	printf("\nIngrese cantidad de empleados: ");  
	scanf("%d", &res);
    return res;
}

float ingresarSueldoValido(void) {
	float res = 0;
	while (res == 0) {
		printf("Ingrese el sueldo: ");
		scanf("%f", &res);
		
		if(res <= 0) {
			printf("Valor invalido, reintente!\n");
		}
	}
	return res;
}

void consultarDatosEmpleados(int cantE, char apellidos[][MAXLEN], float sueldos[]) {
	printf("\n\nIngresar Datos");
	int i;
	for(i = 0; i < cantE; i++){
    	printf("\n\nEmpleado %d\n", i+1);
    	printf("Ingrese el apellido: ");
		scanf("%s", &apellidos[i]);
		sueldos[i] = ingresarSueldoValido();
	}
}

void ordenarDatosEmpleados(int cantE, char apellidos[][MAXLEN], float sueldos[]) {
	printf("\n\nOrdenando Datos...");
	int i;
	for (i=0; i<cantE;i++) {
		int j;
		for (j=0; j< cantE-i-1;j++){
			//reviso de apares y si el siguiente es menor intercambio valores 
			if(apellidos[j+1][0] < apellidos[j][0] ){ 
				float aux = sueldos[j+1];
				sueldos[j+1] = sueldos[j];
				sueldos[j] = aux;
				
				char aux2[MAXLEN];
				strcpy(aux2, apellidos[j+1]);
				strcpy(apellidos[j+1], apellidos[j]);
				strcpy(apellidos[j], aux2);
			}
		}
	}
}

void imprimirDatosEmpleados(int cantE, char apellidos[][MAXLEN], float sueldos[]) {
	printf("\n\nDatos Ordenados");
	char i;
	for(i = 0; i < cantE; i++){
    	printf("\n\nEmpleado %d", i+1);
    	printf("\nApellido: %s", apellidos[i]);
    	printf("\nSueldo: %.2f", sueldos[i]);
	}
}

int cantTrianSupMayorA5(int cantE, float sueldos[]) {
	char res = 0;
	char i;
	for(i = 0; i < cantE; i++) {
		if (sueldos[i] >12) res++;
	}
	return res;
}

void despedida(void) {
	printf("\n\nMuchas gracias por elegirnos.");  
    printf("\nLo esperamos pronto!");  
    printf("\n(Enter para finalizar)\n");  
    getchar();
}

int main() {

    printf("EMPLEADOS ORDENADOS");  // Titulo
    
    int cantE = consultarCantEmpleados();
	char apellidos[cantE][MAXLEN];
	float sueldos[cantE];
	
	consultarDatosEmpleados(cantE, apellidos, sueldos);
	
	ordenarDatosEmpleados(cantE, apellidos, sueldos);
	
	imprimirDatosEmpleados(cantE, apellidos, sueldos);
    
    despedida();

    return 0;
}











