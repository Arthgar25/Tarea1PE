#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

char obtenerPaloAleatorio();
int generarValorAleatorio();
void mostrarCarta(char palo, int valor);
int compararValor(int valor1, int valor2);
int compararPalo(char palo1, char palo2);
int suma(int valor1, int valor2, int valor3);
int sumaConOnce(int valor1, int valor2, int valor3);

int main(int argc, char const *argv[])
{
    srand(time(0));
    char *iguales[10];
    char paloComparar1 = obtenerPaloAleatorio();
    char paloComparar2 = obtenerPaloAleatorio();
    int valorComparar1 = generarValorAleatorio();
    int valorComparar2 = generarValorAleatorio();
    int valorComparar3 = generarValorAleatorio();
    int comparar;

    system("cls");
    char elPalo = obtenerPaloAleatorio();   // Primer ejercicio: Generar un palo aleatorio
    printf("Palo aleatorio: %c\n", elPalo);
    int elValor = generarValorAleatorio();  // Segundo ejercicio: Generar un valor aleatorio
    printf("Valor aleatorio: %d\n", elValor);

    mostrarCarta(elPalo, elValor);
    printf("Cartas a comparar: \n");
    mostrarCarta(paloComparar1, valorComparar1);
    mostrarCarta(paloComparar2, valorComparar2);

    comparar = compararValor(valorComparar1, valorComparar2);
    if(comparar == 1){
        iguales[10] = "true";
    } else{
        iguales[10] = "false";
    }
    printf("valor igual: %s\n", iguales[10]);

    comparar = compararPalo(paloComparar1, paloComparar2);
    if(comparar == 1){
        iguales[10] = "true";
    } else{
        iguales[10] = "false";
    }
    printf("palo igual: %s\n", iguales[10]);

    printf("suma: %d", suma(valorComparar1, valorComparar2, valorComparar3));

    return 0;
}

char obtenerPaloAleatorio(){
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

int compararValor(int valor1, int valor2){
    int mismoValor;
    if(valor1 == valor2){
        mismoValor = 1;
    } else{
        mismoValor = 0;
    }
    return mismoValor;
}

int compararPalo(char palo1, char palo2){
    int mismoValor;
    if(palo1 == palo2){
        mismoValor = 1;
    } else{
        mismoValor = 0;
    }
    return mismoValor;
}

int suma(int valor1, int valor2, int valor3){
    int total;
    total = valor1 + valor2 + valor3;
    return total;
}

int sumaConOnce(int valor1, int valor2, int valor3){
    int total;
    total = valor1 + valor2 + valor3;
    return total;
}