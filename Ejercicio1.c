#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char obtenerPaloAleatorio();
int generarValorAleatorio();
void mostrarCarta(char palo, int valor);

int main(int argc, char const *argv[])
{
    system("cls");
    char elPalo = obtenerPaloAleatorio();   // Primer ejercicio: Generar un palo aleatorio
    printf("Palo aleatorio: %c\n", elPalo);
    int elValor = generarValorAleatorio();  // Segundo ejercicio: Generar un valor aleatorio
    printf("Valor aleatorio: %d\n", elValor);
    mostrarCarta(elPalo, elValor);
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

void mostrarCarta(char palo, int valor){
    char valorLetra;
    char *paloString[10];
    switch (palo){
        case 'P':
            paloString[10] = "Pica";
            break;
        case 'T':
            paloString[10] = "Trebol";
            break;
        case 'D':
            paloString[10] = "Diamante";
            break;
        case 'C':
            paloString[10] = "Corazones";
            break;
        default:
            printf("Letra diferente de [P,T,D,C]");
            break;
    }
    switch (valor){
        case 1:
            valorLetra = 'A';
            printf("La carta es: %c de %s\n", valorLetra, paloString[10]);
            break;
        case 11:
            valorLetra = 'J';
            printf("La carta es: %c de %s\n", valorLetra, paloString[10]);
            break;
        case 12:
            valorLetra = 'Q';
            printf("La carta es: %c de %s\n", valorLetra, paloString[10]);
            break;
        case 13:
            valorLetra = 'K';
            printf("La carta es: %c de %s\n", valorLetra, paloString[10]);
            break;
        default:
            printf("La carta es: %d de %s\n", valor, paloString[10]);
            break;
    }
}