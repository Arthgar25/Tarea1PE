#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char obtenerPaloAleatorio();

int main(int argc, char const *argv[])
{
    char elPalo = obtenerPaloAleatorio();
    printf("Palo aleatorio: %c\n", elPalo);
    return 0;
}

char obtenerPaloAleatorio(){
    srand(time(NULL));
    int valor = 1;
    char palo;
    valor = (rand()%4+1);

    switch(valor){
        case 0: 
            palo = 'P';
            break;
        case 1: 
            palo = 'T'; 
            break;
        case 2: 
            palo = 'D'; 
            break;
        case 3: 
            palo = 'C'; 
            break;
        default:
            break;
    }
        
    return palo;
}