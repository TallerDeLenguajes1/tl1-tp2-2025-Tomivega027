#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct{
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
   }typedef compu;

   void listarPCs(compu pcs[], int cantidad);
   void mostrarMasVieja(compu pcs[], int cantidad);
   void mostrarMasVeloz(compu pcs[], int cantidad);

   
   
int main(){
    srand(time(NULL));

    compu pcs[5];
    int cantidad = 5;
    
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};
    for (int i = 0; i < 5; i++)
    {
        pcs[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        pcs[i].velocidad = rand() % (3 - 1 + 1) + 1;
        pcs[i].cantidad_nucleos = rand() % (8 - 1 + 1) + 1;
        pcs[i].tipo_cpu = tipos[rand() % (5 - 0 + 1) + 0];
    }
    
    listarPCs( pcs , cantidad);
    mostrarMasVieja(pcs , cantidad);
    mostrarMasVeloz(pcs , cantidad);


   
    return 0;
}

void listarPCs(compu pcs[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("****PC numero %d****\n", i + 1);
        printf("el anio es :%d\n", pcs[i].anio);
        printf("la velocidad es: %d\n" , pcs[i].velocidad);
        printf("cantidad de nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("el tipo de cpu es: %s\n", pcs[i].tipo_cpu);
    }
    
}

void mostrarMasVieja(compu pcs[], int cantidad){

    int masVieja = pcs[0].anio;
    int id;

    for (int i = 0; i < cantidad; i++)
    {

        if (pcs[i].anio < masVieja)
        {
            id = i;
        }
        
    }

    printf("\nLa computadora mas vieja es la del anio: %d\n", pcs[id].anio);
    
}

void mostrarMasVeloz(compu pcs[], int cantidad){

    int masVeloz = pcs[0].velocidad;
    int id;

    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio > masVeloz )
        {
            id = i;
        }
        
    }

    printf("\nLa computadora mas veloz es de %d de velocidad\n" , pcs[id].velocidad);
    

}