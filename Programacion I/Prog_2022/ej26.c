

/*
Confeccionar un programa que calcule los sueldos de N empleados,solicitando el ingreso por teclado de nombre completo,
 el pago porhora y la cantidad de horas trabajadas de cada empleado.

▪ Ingresar por teclado la cantidad N de empleados.

▪ Resolver usando estructuras, vectores y funciones.
*/

#include <stdio.h>

typedef struct 
{
    char nombre[20];
    float horasTrabajadas;
    float valorHora;
}DATA_EMPLEADO;

//TODO Agregar funcion calcularSueldo

int pedirCantidadEmp(int cantidad);

void cargarNomina(DATA_EMPLEADO nomina[],int iterador);

void calcularSueldo(DATA_EMPLEADO nomina[], int iterador, float sueldo[]);

void mostrarDatos(DATA_EMPLEADO nomina[], int iterador, float sueldo[]);

int main(){

    int cantidad = 0;

    int iterador = pedirCantiadadEmp(cantidad);

    float sueldo[iterador];

    DATA_EMPLEADO nomina[iterador];

    cargarNomina(nomina,iterador);

    calcularSueldo(nomina, iterador, sueldo);

    mostrarDatos(nomina, iterador, sueldo);

    return 0;
}

int pedirCantiadadEmp(int cantidad){

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
void cargarNomina(DATA_EMPLEADO nomina[],int iterador){
    for (int i = 0; i < iterador; i++)
    {
        //Pido Nombre
        printf("Ingrese el nombre del empleado: \n");
        fflush(stdin);
        scanf("%c", &nomina[iterador].nombre);
        //Pido Horas Trabajadas
        printf("Ingrese las horas trabajadas: \n"),
        fflush(stdin);
        scanf("%f", &nomina[iterador].horasTrabajadas);
        //Pido Valor Hora
        printf("Ingrese el valor de la hora: \n"),
        fflush(stdin);
        scanf("%f", &nomina[iterador].valorHora);
    }
    return;
}

void calcularSueldo(DATA_EMPLEADO nomina[], int iterador, float sueldo[]){

    for (int i = 0; i < iterador; i++)
    {
        sueldo[iterador] = nomina[iterador].horasTrabajadas * nomina[iterador].valorHora;
    }
    
    return;
}


void mostrarDatos(DATA_EMPLEADO nomina[], int iterador, float sueldo[]){

    for (int i = 0; i < iterador; i++)
    {
        printf("Nombre del empleado: %c\t", nomina[iterador].nombre);
        printf("Sueldo: %f\n", sueldo[iterador]);
    }
    
    return;
}