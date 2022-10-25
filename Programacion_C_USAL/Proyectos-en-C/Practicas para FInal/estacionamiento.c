/*
-Se debera pedir la patente del vehiculo.
-Pedir las hroas en las que el auto estuvo estacionado. La condicion especial es truncar el numero de horas utilizadas (double).
-Se debe caclular el monto a cobrar dependientdo de las horas en las que el vehiculo estuvo estacionado por el valor hora.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>


int main()

{
  double estadia = 0;
  int valor_hora = 110;
  char patente[6];

  //Pido la patente del vehiculo

  // printf("Ingrese la patente del vehiculo:\n");
  // fflush(stdin);
  // scanf("%s", &patente);

  //Pido las hroas en las cuales el auto estuvo estacionado

  printf("Ingrese la cantidad de horas en las que le vehiculo estuvo estacionado:\n");
  fflush(stdin);
  scanf("%lf", &estadia);

  while (estadia < 0 || estadia == 0)
  {
    printf("Error, ingrese un numero valido:\n");
    fflush(stdin);
    scanf("%lf", &estadia);
  }

  double a_cobrar = 0;

  a_cobrar = a_cobrar + estadia * valor_hora;

  //Pido la patente
    printf("Ingrese la patente:\n");
    fflush(stdin);
    scanf("%s", &patente);
 
  printf("largo de patente: %s", strlen(patente));
  printf("El monto a cobrar para el vehiculo con patente %s es: %lf",patente, a_cobrar);
  
  return 0;
}
