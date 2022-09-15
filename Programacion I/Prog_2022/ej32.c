

/*

Cantidad maxima de socios 7, variables descripcion, nonbre, apellido, costo anual

*/


#include <stdio.h>

#define MAX_STR 10

typedef struct {
  char nombre[MAX_STR];
  char apellido[MAX_STR];
  char descripcion[MAX_STR];
  double valorCuota;
} TIPO_SOCIO;

// Funciones
void pedirDatos(TIPO_SOCIO socio[], int cantidad);

void mostrarDatos(TIPO_SOCIO socio[], int cantidad);

int main() {

  int cantidad = 0;

  TIPO_SOCIO socio[cantidad];

  pedirDatos(socio, cantidad);

  mostrarDatos(socio, cantidad);

  return 0;
}

// Funcion pedir Datos
void pedirDatos(TIPO_SOCIO socio[], int cantidad) {

  int opcionCargarMas = 0;
  int i = 0;

  do
  {
    // Pedir nombre
    printf("\nIngrese el nombre del socio: ");
    fflush(stdin);
    gets(socio[i].nombre);

    // Pedir apellido
    printf("\nIngrese el apellido del socio: ");
    fflush(stdin);
    gets(socio[i].apellido);

    // Pedir costo anual
    printf("\nIngrese el valor de la cuota anual del socio: ");
    fflush(stdin);
    scanf("%lf", &socio[i].valorCuota);

    // Pedir descripcion
    printf("\nIngrese una descripcion del socio: ");
    fflush(stdin);
    gets(socio[i].descripcion);

    // Valdiar costo
    while (socio[i].valorCuota < 0) {
      printf("\nError, el valor de la cuota no puede ser negativo, intente nuevamente: ");
      fflush(stdin);
      scanf("%lf", &socio[i].valorCuota);
    }

    // Pregunto si quiere cargar mas datos
    printf("\nIngrese 1 para cargar otro socio, de lo contrario presione 0: ");
    fflush(stdin);
    scanf("%d", &opcionCargarMas);

    while (opcionCargarMas != 0 && opcionCargarMas != 1) {
      printf("\nError, ingrese 1 para cargar otro socio, de lo contrario presione 0: ");
      fflush(stdin);
      scanf("%d", &opcionCargarMas);
    }

    i++;
    
    cantidad = i;
  
  } while (opcionCargarMas == 1);
   
  return;
}

// Mostrar datos
void mostrarDatos(TIPO_SOCIO socio[], int cantidad) {

  printf("\nNombre completo: \t");
  printf("Descripcion breve: \t");
  printf("Valor anual de cuota: \n");

  for (int i = 0; i < cantidad; i++) {
    printf("%s %s\t", socio[i].nombre, socio[i].apellido);
    printf("%s\t", socio[i].descripcion);
    printf("%lf\n", socio[i].valorCuota);
  }
}
