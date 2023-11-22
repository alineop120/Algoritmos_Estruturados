#include <stdio.h>

/*
                    Estrutura de repetição do...while
        _______________________________________________________________________________________________________________________
        Esta estrutura tem um comportamento muito semelhante ao while, com uma diferença crucial: a condição é verificada após executar o bloco de instruções correspondente.
        ESTRUTURA:
                do {
                    sentença;
                    sentença;
                    ...
                } while (expressão);
*/

int main () {
//
    int num = 0;

//
    do {
        printf("Numero: %d\n", num);
        num++;
    } while (num <= 10);

    printf("\nContinua...");
}