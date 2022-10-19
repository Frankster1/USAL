#include <stdio.h>

void swap (int *a, int *b);

int main(){
	int a;
	int b;
	printf("Ingrese el numero a: ");
	scanf("%d", &a);
	printf("Ingrese el numero b: ");
	scanf("%d", &b);
	printf("a = %d y b = %d\n", a, b);
	swap(&a,&b);
	printf("a = %d y b = %d", a, b);
	return 0;
}

void swap (int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	return;
}
