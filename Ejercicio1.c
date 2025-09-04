#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char obtenerPaloAleatorio();
int generarValorAleatorio();

int main(int argc, char const *argv[])
{
    system("cls");
    char elPalo = obtenerPaloAleatorio();   // Primer ejercicio: Generar un palo aleatorio
    printf("Palo aleatorio: %c\n", elPalo);
    int elValor = generarValorAleatorio();  // Segundo ejercicio: Generar un valor aleatorio
    printf("Valor aleatorio: %d\n", elValor);
    return 0;
}

char obtenerPaloAleatorio(){
    srand(time(NULL));
    int valor = 1;
    char palo;
    valor = (rand()%4+1);

    switch(valor){
        case 1: 
            palo = 'P';
            break;
        case 2: 
            palo = 'T'; 
            break;
        case 3: 
            palo = 'D'; 
            break;
        case 4: 
            palo = 'C'; 
            break;
        default:
            printf("numero fuera de [1,4]");
            break;
    }
        
    return palo;
}

int generarValorAleatorio(){
    srand(time(0));
    int valor = 1;
    valor = (rand()%13+1);
    return valor;
}