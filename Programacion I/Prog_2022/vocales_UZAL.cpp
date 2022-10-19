//contar vocales Uzal 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 20

void contarVocales(int *a, int *e, char palabra[]){
char *punt = &palabra[0];
for(int i = 0; i < strlen(palabra); i++){
if(tolower(*(punt + i)) == 'a') (*a)++;
if(tolower(*(punt + i)) == 'e') (*e)++;
}
}

int main(){
int a = 0, e = 0;
char palabra[max];

fflush(stdin);
printf("Escriba una palabra: ");
scanf("%s", &palabra);

contarVocales(&a, &e, palabra);
printf("tiene %d A y %d E", a, e);
}

