#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct {
    int velocidad; //Valor entre 1 y 3
    int anio; // valor entre 2015 y 2024
    int cantidad_nucleos; // valor entre 1 y 8
    char *tipo_cpu; // Apuntador a cadena de caracteres
} typedef compu;

void cargoDatos(compu pcs[], int cantidad);
void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);


int main() 
{
    //Para generar numeros aleatorios en cada ejecucion
    srand(time(NULL));

    int cantidadPcs;
    printf("Ingrese la cantidad de PCs que quiere crear: \n");
    scanf("%d", &cantidadPcs);

    compu PCs[cantidadPcs];
    cargoDatos(PCs, cantidadPcs);

    listarPCs(PCs, cantidadPcs);

}


void cargoDatos(compu pcs[], int cantidad) 
{
    for (int i = 0; i < cantidad; i++)
    {
        pcs[i].velocidad = rand() % (3 - 1 + 1) + 1;
        pcs[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        pcs[i].cantidad_nucleos = rand() % (8 - 1 + 1) + 1;
        
        char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
        pcs[i].tipo_cpu = tipos[(rand() % (5 - 0 + 1) + 0)];
    }
    
}

void listarPCs(compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("La velocidad del pc %d es %d \n", i+1, pcs[i].velocidad);
        printf("El anio del pc %d es %d \n", i+1, pcs[i].anio);

        printf("La cantidad de nucleos del pc %d es %d \n", i+1, pcs[i].cantidad_nucleos);

        printf("El tipo de CPU del pc %d es %s \n", i+1, pcs[i].tipo_cpu);

    }

}

void mostrarMasVieja(compu pcs[], int cantidad) 
{

}

void mostrarMasVeloz(compu pcs[], int cantidad)
{

}