#include <stdio.h>

void segundos_a_horas(int *puntSegundos, int *H, int *M);

int main(){
	int segundos;
	int H = 0;
	int M = 0;
	printf("Ingrese segundos: ");
	scanf("%d", &segundos); //faltaría validar que sea mayor a cero
	segundos_a_horas(&segundos, &H, &M);
	printf("El tiempo ingresado es: %d:%d:%d", H, M, segundos);
}

void segundos_a_horas(int *segundos, int *H, int *M){
	if(*segundos >= 60){
		*M = (*segundos / 60);
		*segundos = (*segundos - (*M * 60));
		if(*M >= 60){
			*H = (*M / 60);
			*M = (*M - (*H * 60));
		}
	}
	return;
}
