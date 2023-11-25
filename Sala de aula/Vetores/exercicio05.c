/*
    Leia um vetor de 10 posições. Contar e escrever quantos pares ele possui.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main () {

    int vetor[10], pares;

    for (int i = 0; i < MAX; i++) {
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }
    printf("A quantidade de pares existentes no vetor e: %d", pares);
}