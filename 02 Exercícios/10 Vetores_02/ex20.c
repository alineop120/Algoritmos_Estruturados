/*
    Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um vetor com 10 posições. Preencha um segundo vetor apenas com os números ímapares do primeiro vetor. imprima os dois vetores, 2 elementos por linha.
*/
#include <stdio.h>

int main() {
    int vetorOriginal[10];
    int vetorImpares[10];
    
    // Leitura de números no intervalo [0, 50] e armazenamento no vetorOriginal
    printf("Digite 10 números inteiros no intervalo [0, 50]:\n");
    for (int i = 0; i < 10; i++) {
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &vetorOriginal[i]);
        } while (vetorOriginal[i] < 0 || vetorOriginal[i] > 50);
    }

    // Preenchimento do vetorImpares apenas com números ímpares do vetorOriginal
    int indiceImpares = 0;
    for (int i = 0; i < 10; i++) {
        if (vetorOriginal[i] % 2 != 0) {
            vetorImpares[indiceImpares] = vetorOriginal[i];
            indiceImpares++;
        }
    }

    // Impressão dos dois vetores, 2 elementos por linha
    printf("\nVetor Original:\n");
    for (int i = 0; i < 10; i += 2) {
        printf("%d", vetorOriginal[i]);
        if (i + 1 < 10) {
            printf("\t%d\n", vetorOriginal[i + 1]);
        } else {
            printf("\n");
        }
    }

    printf("\nVetor de Ímpares:\n");
    for (int i = 0; i < indiceImpares; i += 2) {
        printf("%d", vetorImpares[i]);
        if (i + 1 < indiceImpares) {
            printf("\t%d\n", vetorImpares[i + 1]);
        } else {
            printf("\n");
        }
    }

    return 0;
}
