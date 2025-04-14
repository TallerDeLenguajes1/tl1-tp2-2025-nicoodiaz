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
//Declaramos de manera global
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void cargoDatos(compu *pcs, int cantidad);
void listarPCs(compu *pcs, int cantidad);
void mostrarMasVieja(compu *pcs, int cantidad);
void mostrarMasVeloz(compu *pcs, int cantidad);


int main() 
{
    //Para generar numeros aleatorios en cada ejecucion
    srand(time(NULL));

    int cantidadPcs;
    printf("Ingrese la cantidad de PCs que quiere crear: ");
    scanf("%d", &cantidadPcs);

    compu PCs[cantidadPcs];
    cargoDatos(PCs, cantidadPcs);

    listarPCs(PCs, cantidadPcs);

    mostrarMasVieja(PCs, cantidadPcs);

    mostrarMasVeloz(PCs, cantidadPcs);

    return 0;
}


void cargoDatos(compu *pcs, int cantidad) 
{
    for (int i = 0; i < cantidad; i++)
    {
        pcs[i].velocidad = rand() % (3 - 1 + 1) + 1;
        pcs[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        pcs[i].cantidad_nucleos = rand() % (8 - 1 + 1) + 1;
        
        pcs[i].tipo_cpu = tipos[(rand() % (5 - 0 + 1) + 0)];
    }
    
}

void listarPCs(compu *pcs, int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("\n\nLa velocidad del pc %d es %d \n", i+1, pcs[i].velocidad);
        printf("El anio del pc %d es %d \n", i+1, pcs[i].anio);

        printf("La cantidad de nucleos del pc %d es %d \n", i+1, pcs[i].cantidad_nucleos);

        printf("El tipo de CPU del pc %d es %s \n", i+1, pcs[i].tipo_cpu);

    }

}

void mostrarMasVieja(compu *pcs, int cantidad) 
{
    //Creo un aux para poder guardar el indice de la pc mas antigua
    int max = 0;
    
    for (int i = 0; i < cantidad; i++)
    {
        //Si cuando pcS[i] es mayor q pcs[max] guardo el valor ahi para mostrar luego con "max"
        if (pcs[i].anio < pcs[max].anio)
        {
            max = i;
        }
    }
    printf("\nLa velocidad de la PC mas vieja es: %d\n", pcs[max].velocidad);
    printf("El anio de la PC mas vieja es: %d\n", pcs[max].anio);
    printf("La cantidad de nucleos de la PC mas vieja es: %d\n", pcs[max].cantidad_nucleos);
    printf("El tipo de CPU de la PC mas vieja es: %s\n", pcs[max].tipo_cpu);
}

void mostrarMasVeloz(compu *pcs, int cantidad)
{
    int max = 0;
    
    for (int i = 0; i < cantidad; i++)
    {
        //Si cuando pcS[i] es mayor q pcs[max] guardo el valor ahi para mostrar luego con "max"
        if (pcs[i].velocidad > pcs[max].velocidad)
        {
            max = i;
        }
    }
    printf("\nLa velocidad de la PC mas rapida es: %d\n", pcs[max].velocidad);
    printf("El anio de la PC mas rapida es: %d\n", pcs[max].anio);
    printf("La cantidad de nucleos de la PC mas rapida es: %d\n", pcs[max].cantidad_nucleos);
    printf("El tipo de CPU de la PC mas rapida es: %s\n", pcs[max].tipo_cpu);
}