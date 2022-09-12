

/*
Confeccionar un programa que calcule los sueldos de N empleados,solicitando el ingreso por teclado de nombre completo,
 el pago por hora y la cantidad de horas trabajadas de cada empleado.

▪ Ingresar por teclado la cantidad N de empleados.

▪ Resolver usando estructuras, vectores y funciones.
*/

#include <stdio.h>

typedef struct 
{
    char nombre[20];
    float horasTrabajadas;
    float valorHora;
} DATA_EMPLEADO;

//TODO Agregar funcion calcularSueldo

int pedirCantidadEmp(int cantidad);

void cargarNomina(DATA_EMPLEADO nomina[],int cantidad);

void calcularSueldo(DATA_EMPLEADO nomina[], int cantidad, float sueldo[]);

void mostrarDatos(DATA_EMPLEADO nomina[], int cantidad, float sueldo[]);

int main(){

    int cantidad = pedirCantidadEmp(cantidad);

    float sueldo[cantidad];

    DATA_EMPLEADO nomina[cantidad];

    cargarNomina(nomina,cantidad);

    calcularSueldo(nomina, cantidad, sueldo);

    mostrarDatos(nomina, cantidad, sueldo);

    return 0;
}

int pedirCantidadEmp(int cantidad){

    printf("Ingrese la cantidad de empleados para realiar el calculo: \n");
    fflush(stdin);
    scanf("%d", &cantidad);

    while (cantidad < 0)
    {
        printf("Error, valor invalido, ingrese un valor nuevamente: ");
        fflush(stdin);
        scanf("%d", &cantidad);
    }
    
    return cantidad;
}
//TODO Agregar validacion de los datos
void cargarNomina(DATA_EMPLEADO nomina[],int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        //Pido Nombre
        printf("Ingrese el nombre del empleado: \n");
        fflush(stdin);
        gets(nomina[i].nombre);
        //Pido Horas Trabajadas
        printf("Ingrese las horas trabajadas: \n"),
        fflush(stdin);
        scanf("%f", &nomina[i].horasTrabajadas);
        //Pido Valor Hora
        printf("Ingrese el valor de la hora: \n"),
        fflush(stdin);
        scanf("%f", &nomina[i].valorHora);
    }
    return;
}

void calcularSueldo(DATA_EMPLEADO nomina[], int cantidad, float sueldo[]){

    for (int i = 0; i < cantidad; i++)
    {
        sueldo[i] = nomina[i].horasTrabajadas * nomina[i].valorHora;
    }
    
    return;
}


void mostrarDatos(DATA_EMPLEADO nomina[], int cantidad, float sueldo[]){

    for (int i = 0; i < cantidad; i++)
    {
        printf("Nombre del empleado: %s\t", nomina[i].nombre);
        printf("Sueldo: %f\n", sueldo[i]);
    }
    
    return;
}