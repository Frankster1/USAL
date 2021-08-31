/*En una escuela se busca calcular el promedio de atlura entre los alumnos

-Pedir la cantidad de alumnos. La cantiad de alumnos puede ser 0.

-La altura de los alumnos debe ser guardada en una vector de tipo double.

-La altura no puede ser menor a 0 ni mayor a 2,5 metros
*/

#include <stdio.h>


int main(){


  int cantidadAlumnos = 0;

//Pregunto al usuario cuantos alumnos hay en el curso


printf("Ingrese la cantidad de alumnos en el curso:\n");
fflush(stdin);
scanf("%d", &cantidadAlumnos);

while (cantidadAlumnos < 0)
{
  printf("Error, la cantidad de alumnos no puede ser menor a 0. Intente nuevamente:\n");
  fflush(stdin);
  scanf("%d", &cantidadAlumnos);
}

double alturas[cantidadAlumnos];

double acum_alturas = 0;


//Pido la altura para la cantiad de alumnos
  for (int i = 0; i < cantidadAlumnos; i++)
  {
    printf("Ingrese la altura del alumno %d\n", i + 1);
    fflush(stdin);
    scanf("%lf", &alturas[i]);

    while (alturas[i] < 0)
    {
      printf("Error, la altura no puede ser negativa, intente nuevamente:\n");
      fflush(stdin);
      scanf("%lf", &alturas[i]);
    }


    while (alturas[i] > 2.5)
    {
      printf("No se admiten jirafas en la escuela, ingrese un numeor valido:\n");
      fflush(stdin);
      scanf("%lf", &alturas[i]);
    }

    acum_alturas = acum_alturas + alturas[i];

  }


  //Calculo el promedio con los numeros que tengo

  double promedio = acum_alturas / cantidadAlumnos;

  printf("El promeido de alturas entre los alumnos del curso es: %lf \n", promedio);



  return 0;
}
