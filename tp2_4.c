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

void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);


int main() 
{
    compu PCs[5];
}
void cargoDatos(compu pcs[], int cantidad) 
{
    for (int i = 0; i < cantidad; i++)
    {
        pcs[i].velocidad =rand() % (3 - 1 + 1) + 1;
        pcs[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        pcs[i].cantidad_nucleos = rand() % (8 - 1 + 1) + 1;
        
        char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
        pcs[i].tipo_cpu[3];
    }
    
}

void listarPCs(compu pcs[], int cantidad)
{

}

void mostrarMasVieja(compu pcs[], int cantidad) 
{

}

void mostrarMasVeloz(compu pcs[], int cantidad)
{

}